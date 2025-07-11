/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/shared_logic/luadefs/CLuaPointLightDefs.cpp
 *  PURPOSE:     Lua browser definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaPointLightDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

    LUA_DECLARE(CreateLight);
    LUA_DECLARE(GetLightType);
    LUA_DECLARE(GetLightRadius);
    LUA_DECLARE(GetLightColor);
    LUA_DECLARE(GetLightDirection);
    LUA_DECLARE(SetLightRadius);
    LUA_DECLARE(SetLightColor);
    LUA_DECLARE(SetLightDirection);
};