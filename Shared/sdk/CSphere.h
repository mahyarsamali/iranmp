/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/CSphere.h
 *  PURPOSE:     Sphere class
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CVector.h"

class CSphere
{
public:
    CVector vecPosition;
    float   fRadius;

    CSphere() : fRadius(0.0f) {}

    CSphere(const CVector& vecInPosition, float fInRadius) : vecPosition(vecInPosition), fRadius(fInRadius) {}

    bool operator==(const CSphere& other) const { return (vecPosition == other.vecPosition && fRadius == other.fRadius); }

    bool operator!=(const CSphere& other) const { return !operator==(other); }
};
