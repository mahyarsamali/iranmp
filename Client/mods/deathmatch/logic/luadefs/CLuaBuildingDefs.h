/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.x
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/shared_logic/luadefs/CLuaBuildingDefs.h
 *  PURPOSE:     Lua building definitions class header
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaBuildingDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

    // Buiding create funcs
    static CClientBuilding* CreateBuilding(lua_State* const luaVM, std::uint16_t modelId, CVector pos, std::optional<CVector> rot, std::optional<std::uint8_t> interior);
    static void             RemoveAllGameBuildings();
    static void             RestoreGameBuildings();
};
