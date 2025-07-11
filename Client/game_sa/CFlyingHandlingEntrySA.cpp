/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CFlyingHandlingEntrySA.cpp
 *  PURPOSE:     Vehicle flying handling data entry
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CFlyingHandlingEntrySA.h"

CFlyingHandlingEntrySA::CFlyingHandlingEntrySA()
{
    memset(&m_pFlyingHandlingSA, 0, sizeof(tFlyingHandlingDataSA));
}

CFlyingHandlingEntrySA::CFlyingHandlingEntrySA(tFlyingHandlingDataSA* pOriginal)
{
    m_pFlyingHandlingSA = *pOriginal;
}

void CFlyingHandlingEntrySA::Assign(const CFlyingHandlingEntry* pData)
{
    if (!pData)
        return;
    const CFlyingHandlingEntrySA* pEntrySA = static_cast<const CFlyingHandlingEntrySA*>(pData);
    m_pFlyingHandlingSA = pEntrySA->m_pFlyingHandlingSA;
}
