/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CBmxSA.cpp
 *  PURPOSE:     Bmx bike vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CBmxSA.h"

CBmxSA::CBmxSA(CBmxSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
