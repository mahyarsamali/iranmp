/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaHTTPDefs.h
 *  PURPOSE:     Lua HTTP webserver definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

// This class is for functions are only available to HTTPD scripts.

class CLuaHTTPDefs : public CLuaDefs
{
public:
    static void LoadFunctions(lua_State* luaVM);

    LUA_DECLARE(httpWrite);
    LUA_DECLARE(httpSetResponseHeader);
    LUA_DECLARE(httpSetResponseCookie);
    LUA_DECLARE(httpSetResponseCode);
    LUA_DECLARE(httpClear);
    LUA_DECLARE(httpRequestLogin);
};