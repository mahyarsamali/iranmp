/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CRadar.h
 *  PURPOSE:     Game radar interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "Common.h"

class CMarker;
class CVector;

class CRadar
{
public:
    virtual CMarker* CreateMarker(CVector* vecPosition) = 0;
    virtual CMarker* GetFreeMarker() = 0;
    virtual void     DrawAreaOnRadar(float fX1, float fY1, float fX2, float fY2, const SharedUtil::SColor color) = 0;
};
