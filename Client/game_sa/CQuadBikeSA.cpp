/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CQuadBikeSA.cpp
 *  PURPOSE:     Quad bike vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CQuadBikeSA.h"

CQuadBikeSA::CQuadBikeSA(CQuadBikeSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
