/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CPlaneSA.cpp
 *  PURPOSE:     Plane vehicle entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlaneSA.h"

CPlaneSA::CPlaneSA(CPlaneSAInterface* pInterface)
{
    SetInterface(pInterface);
    Init();
}
