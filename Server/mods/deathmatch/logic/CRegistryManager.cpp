/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CRegistryManager.cpp
 *  PURPOSE:     Track registry objects
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CRegistryManager.h"
#include "CRegistry.h"

CRegistryManager::~CRegistryManager()
{
    // Current behaviour is that there should be no open DB's at this point
    assert(m_RegistryList.size() == 0);
    while (m_RegistryList.size())
        CloseRegistry(m_RegistryList.front());
}

void CRegistryManager::DoPulse()
{
    // End automatic transactions started in the previous pulse
    for (unsigned int i = 0; i < m_RegistryList.size(); i++)
        m_RegistryList[i]->EndAutomaticTransaction();
}

// Create a new registry and keep track of it
CRegistry* CRegistryManager::OpenRegistry(const std::string& strFileName)
{
    CRegistry* pRegistry = new CRegistry(strFileName);
    m_RegistryList.push_back(pRegistry);
    return pRegistry;
}

// Delete a tracked registry
bool CRegistryManager::CloseRegistry(CRegistry* pRegistry)
{
    if (ListContains(m_RegistryList, pRegistry))
    {
        ListRemove(m_RegistryList, pRegistry);
        delete pRegistry;
        return true;
    }
    return false;
}
