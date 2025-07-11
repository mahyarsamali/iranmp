/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CMovingObjectsManager.h
 *  PURPOSE:     Manager for moving objects
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <list>

class CDeathmatchObject;

class CMovingObjectsManager
{
public:
    void Add(CDeathmatchObject* pObject) { m_List.push_back(pObject); };
    void Remove(CDeathmatchObject* pObject)
    {
        if (!m_List.empty())
        {
            m_List.remove(pObject);

            if (m_currentPulseObject == pObject)
                m_currentPulseObject = nullptr;
        }
    };

    void DoPulse();

private:
    std::list<CDeathmatchObject*> m_List;

    // Current object being updated in DoPulse method. Setting it to nullptr during this period
    // will prevent the code from trying to erase it from m_List.
    CDeathmatchObject* m_currentPulseObject = nullptr;
};
