/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CMonsterTruckSA.cpp
 *  PURPOSE:     Monster truck vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CMonsterTruckSA.h"

CMonsterTruckSA::CMonsterTruckSA(CMonsterTruckSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
