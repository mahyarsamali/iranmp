/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CColCallback.h
 *  PURPOSE:     Collision entity callback interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CColShape.h"

class CColCallback
{
public:
    virtual void Callback_OnCollision(CColShape& Shape, CElement& Element) = 0;
    virtual void Callback_OnLeave(CColShape& Shape, CElement& Element) = 0;
    virtual void Callback_OnCollisionDestroy(CColShape* pShape) = 0;
};
