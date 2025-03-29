/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/lua/LuaUtils.h
 *  PURPOSE:     Lua Utility functions
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

struct lua_State;

SString GetDebugMessage(lua_State* luaVM);
