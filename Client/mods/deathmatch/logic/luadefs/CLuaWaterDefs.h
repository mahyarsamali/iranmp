/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/shared_logic/luadefs/CLuaWaterDefs.cpp
 *  PURPOSE:     Lua definitions class
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
    LUA_DECLARE(ResetWaterLevel);
    LUA_DECLARE(ResetWaterColor);
    LUA_DECLARE(TestLineAgainstWater);

    LUA_DECLARE(SetWaterLevel);
    LUA_DECLARE(SetWaterDrawnLast);
    LUA_DECLARE(SetWaterVertexPosition);
    LUA_DECLARE(SetWaterColor);

    LUA_DECLARE(GetWaterColor);
    LUA_DECLARE(GetWaterLevel);
    LUA_DECLARE(IsWaterDrawnLast);
    LUA_DECLARE(GetWaterVertexPosition);
};
