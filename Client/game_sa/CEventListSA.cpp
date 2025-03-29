/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CEventListSA.cpp
 *  PURPOSE:     Event list
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CEventListSA.h"
#include "CEventDamageSA.h"

CEventDamage* CEventListSA::GetEventDamage(CEventDamageSAInterface* pInterface)
{
    return new CEventDamageSA(pInterface);
}
