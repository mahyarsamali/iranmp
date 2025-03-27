/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CBoatHandlingEntrySA.cpp
 *  PURPOSE:     Vehicle flying handling data entry
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CBoatHandlingEntrySA.h"

CBoatHandlingEntrySA::CBoatHandlingEntrySA()
{
    memset(&m_pBoatHandlingSA, 0, sizeof(tBoatHandlingDataSA));
}

CBoatHandlingEntrySA::CBoatHandlingEntrySA(tBoatHandlingDataSA* pOriginal)
{
    m_pBoatHandlingSA = *pOriginal;
}

void CBoatHandlingEntrySA::Assign(const CBoatHandlingEntry* pData)
{
    const CBoatHandlingEntrySA* pEntrySA = static_cast<const CBoatHandlingEntrySA*>(pData);
    m_pBoatHandlingSA = pEntrySA->m_pBoatHandlingSA;
}
