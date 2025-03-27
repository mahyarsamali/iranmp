/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CCollision.h
 *  PURPOSE:     Interface file for `CCollisionSA`
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

struct CColLineSA;
struct CColSphereSA;

class CCollision {
public:
    virtual bool TestLineSphere(const CColLineSA& line, const CColSphereSA& sphere) const = 0;
};
