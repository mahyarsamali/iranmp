/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaPickupDefs.h
 *  PURPOSE:     Lua pickup definitions class
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

    // Create/destroy
    LUA_DECLARE(createPickup);

    // Get
    LUA_DECLARE(getPickupType);
    LUA_DECLARE(getPickupWeapon);
    LUA_DECLARE(getPickupAmount);
    LUA_DECLARE(getPickupAmmo);
    LUA_DECLARE(getPickupRespawnInterval);
    LUA_DECLARE(isPickupSpawned);

    // Set
    LUA_DECLARE(setPickupType);
    LUA_DECLARE(setPickupRespawnInterval);
    LUA_DECLARE(usePickup);
};
