/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaTextDefs.h
 *  PURPOSE:     Lua text display function definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaTextDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

    LUA_DECLARE(textCreateDisplay);
    LUA_DECLARE(textDestroyDisplay);
    LUA_DECLARE(textCreateTextItem);
    LUA_DECLARE(textDestroyTextItem);

    LUA_DECLARE(textDisplayAddText);
    LUA_DECLARE(textDisplayRemoveText);
    LUA_DECLARE(textDisplayAddObserver);
    LUA_DECLARE(textDisplayRemoveObserver);
    LUA_DECLARE(textDisplayIsObserver);
    LUA_DECLARE(textDisplayGetObservers);

    LUA_DECLARE(textItemSetText);
    LUA_DECLARE(textItemGetText);
    LUA_DECLARE(textItemSetScale);
    LUA_DECLARE(textItemGetScale);
    LUA_DECLARE(textItemSetPosition);
    LUA_DECLARE(textItemGetPosition);
    LUA_DECLARE(textItemSetColor);
    LUA_DECLARE(textItemGetColor);
    LUA_DECLARE(textItemSetPriority);
    LUA_DECLARE(textItemGetPriority);
};