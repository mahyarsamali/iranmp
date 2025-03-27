/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CBoatSA.cpp
 *  PURPOSE:     Boat vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CBoatSA.h"

CBoatSA::CBoatSA(CBoatSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}

CBoatHandlingEntry* CBoatSA::GetBoatHandlingData()
{
    return m_pBoatHandlingData;
}

void CBoatSA::SetBoatHandlingData(CBoatHandlingEntry* pBoatHandling)
{
    if (!pBoatHandling)
        return;
    m_pBoatHandlingData = static_cast<CBoatHandlingEntrySA*>(pBoatHandling);
    GetBoatInterface()->pBoatHandlingData = m_pBoatHandlingData->GetInterface();
}
