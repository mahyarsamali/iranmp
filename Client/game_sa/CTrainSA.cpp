/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CTrainSA.cpp
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CTrainSA.h"

CTrainSA::CTrainSA(CTrainSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
