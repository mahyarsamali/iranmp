/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/shared_logic/luadefs/CLuaPickupDefs.cpp
 *  PURPOSE:     Lua definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaPickupDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

    LUA_DECLARE(CreatePickup);

    LUA_DECLARE(GetPickupType);
    LUA_DECLARE(GetPickupWeapon);
    LUA_DECLARE(GetPickupAmount);
    LUA_DECLARE(GetPickupAmmo);

    LUA_DECLARE(SetPickupType);
};
