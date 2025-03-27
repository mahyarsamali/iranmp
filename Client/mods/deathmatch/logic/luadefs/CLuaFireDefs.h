/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/mods/deathmatch/logic/luadefs/CLuaFireDefs.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

#include "CLuaDefs.h"

class CLuaFireDefs : public CLuaDefs
{
public:
    static void LoadFunctions();

    LUA_DECLARE(CreateFire);
    LUA_DECLARE(ExtinguishFire);
};
