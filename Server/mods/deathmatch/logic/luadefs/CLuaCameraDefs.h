/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaCameraDefs.h
 *  PURPOSE:     Lua camera function definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaCameraDefs : public CLuaDefs
{
public:
    static void LoadFunctions();

    // Get functions
    LUA_DECLARE_OOP(getCameraMatrix);
    LUA_DECLARE(getCameraTarget);
    LUA_DECLARE(getCameraInterior);

    // Set functions
    LUA_DECLARE(setCameraMatrix);
    LUA_DECLARE(setCameraTarget);
    LUA_DECLARE(setCameraInterior);
    LUA_DECLARE(fadeCamera);
};