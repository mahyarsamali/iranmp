/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CTrailerSA.cpp
 *  PURPOSE:     Trailer vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CTrailerSA.h"

CTrailerSA::CTrailerSA(CTrailerSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
