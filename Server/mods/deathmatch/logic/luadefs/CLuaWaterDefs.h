/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaWaterDefs.h
 *  PURPOSE:     Lua function definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaWaterDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

    LUA_DECLARE(CreateWater);
    LUA_DECLARE(SetWaterLevel);
    LUA_DECLARE(ResetWaterLevel);
    LUA_DECLARE(GetWaterVertexPosition);
    LUA_DECLARE(SetWaterVertexPosition);
    LUA_DECLARE(GetWaterColor);
    LUA_DECLARE(SetWaterColor);
    LUA_DECLARE(ResetWaterColor);
};