/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CHeliSA.cpp
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CHeliSA.h"

CHeliSA::CHeliSA(CHeliSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
