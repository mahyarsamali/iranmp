/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/shared_logic/lua/CLuaFunctionDefs.Voice.cpp
 *  PURPOSE:     Lua Voice function definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"

int CLuaFunctionDefs::IsVoiceEnabled(lua_State* luaVM)
{
    lua_pushboolean(luaVM, g_pClientGame->GetVoiceRecorder()->IsEnabled());
    return 1;
}