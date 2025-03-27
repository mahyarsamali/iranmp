/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CCollisionSA.cpp
 *  PURPOSE:     Implementation of `CCollision` - collision detection related functions
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"

#include "CCollisionSA.h"

bool CCollisionSA::TestLineSphere(const CColLineSA& line, const CColSphereSA& sphere) const
{
    return reinterpret_cast<bool(__cdecl*)(const CColLineSA&, const CColSphereSA&)>(0x417470)(line, sphere);
}
