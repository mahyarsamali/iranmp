/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Server/mods/deathmatch/logic/CHandlingEntry.cpp
 *  PURPOSE:     Vehicle handling data entry
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CHandlingEntry.h"

CHandlingEntry::CHandlingEntry(tHandlingData* pOriginal)
{
    if (!pOriginal)
        return;

    // Copy the data from our original
    m_Handling = *pOriginal;
}

// Apply the handling data from another data
void CHandlingEntry::ApplyHandlingData(const CHandlingEntry* const pData) noexcept
{
    if (!pData)
        return;

    // Copy the data from our handling entry
    m_Handling = pData->m_Handling;
}
