/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CDummyPoolSA.cpp
 *  PURPOSE:     Dummy pool class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "StdInc.h"
#include "CDummyPoolSA.h"
#include "CGameSA.h"
#include <game/CWorld.h>

extern CGameSA* pGame;

CDummyPoolSA::CDummyPoolSA()
{
    m_ppDummyPoolInterface = (CPoolSAInterface<CEntitySAInterface>**)0xB744A0;
}

void CDummyPoolSA::RemoveAllWithBackup()
{
    if (m_pOriginalElementsBackup)
        return;

    m_pOriginalElementsBackup = std::make_unique<pool_backup_t>();

    auto pDummyPool = (*m_ppDummyPoolInterface);
    for (auto i = 0; i < MAX_DUMMIES_DEFAULT; i++)
    {
        if (pDummyPool->IsContains(i))
        {
            CEntitySAInterface* building = pDummyPool->GetObject(i);

            pGame->GetWorld()->Remove(building, CDummyPool_Destructor);
            building->RemoveRWObjectWithReferencesCleanup();

            pDummyPool->Release(i);

            (*m_pOriginalElementsBackup)[i].first = true;
            std::memcpy((*m_pOriginalElementsBackup)[i].second, building, sizeof(CEntitySAInterface));
        }
        else
        {
            (*m_pOriginalElementsBackup)[i].first = false;
        }
    }
}

void CDummyPoolSA::RestoreBackup()
{
    if (!m_pOriginalElementsBackup)
        return;

    auto& originalData = *m_pOriginalElementsBackup;
    auto  pDummyPool = (*m_ppDummyPoolInterface);
    for (auto i = 0; i < MAX_DUMMIES_DEFAULT; i++)
    {
        if (originalData[i].first)
        {
            pDummyPool->AllocateAtNoInit(i);
            auto pDummy = pDummyPool->GetObject(i);
            std::memcpy(pDummy, &originalData[i].second, sizeof(CEntitySAInterface));

            pGame->GetWorld()->Add(pDummy, CDummyPool_Constructor);
        }
    }

    m_pOriginalElementsBackup = nullptr;
}

void CDummyPoolSA::UpdateBuildingLods(const std::uint32_t offset)
{
    if (m_pOriginalElementsBackup)
        UpdateBackupLodOffset(offset);
    else
        UpdateLodsOffestInPool(offset);
}

void CDummyPoolSA::UpdateBackupLodOffset(const std::uint32_t offset)
{
    for (auto& it : *m_pOriginalElementsBackup)
    {
        if (it.first)
        {
            CEntitySAInterface* object = reinterpret_cast<CEntitySAInterface*>(&it.second);
            CEntitySAInterface* lod = object->GetLod();
            if (lod)
                object->SetLod((CEntitySAInterface*)((std::uint32_t)lod + offset));
        }
    }
}

void CDummyPoolSA::UpdateLodsOffestInPool(const std::uint32_t offset)
{
    for (auto i = 0; i < (*m_ppDummyPoolInterface)->Size(); i++)
    {
        CEntitySAInterface* object = (*m_ppDummyPoolInterface)->GetObject(i);
        CEntitySAInterface* lod = object->GetLod();
        if (lod)
            object->SetLod((CEntitySAInterface*)((std::uint32_t)lod + offset));
    }
}
