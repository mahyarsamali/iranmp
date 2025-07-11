/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CMovingObjectsManager.cpp
 *  PURPOSE:     Manager for moving objects
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CDeathmatchObject.h"

void CMovingObjectsManager::DoPulse()
{
    using Iterator = std::list<CDeathmatchObject*>::iterator;

    for (Iterator iter = m_List.begin(); iter != m_List.end(); /* manual increment */)
    {
        // Use a copy of the iterator to avoid an iterator invalidation crash
        Iterator current = iter++;

        CDeathmatchObject* const object = *current;
        m_currentPulseObject = object;
        object->UpdateMovement();

        if (m_currentPulseObject && !object->IsMoving())
        {
            m_List.erase(current);
        }
    }

    m_currentPulseObject = nullptr;
}
