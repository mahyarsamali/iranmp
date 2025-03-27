/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/luadefs/CLuaVoiceDefs.h
 *  PURPOSE:     Lua Voice function definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaVoiceDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    LUA_DECLARE(IsVoiceEnabled);
    LUA_DECLARE(SetPlayerVoiceBroadcastTo);
    LUA_DECLARE(setPlayerVoiceIgnoreFrom);
};