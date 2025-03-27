/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/deathmatch/logic/luadefs/CLuaFileDefs.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once
#include "luadefs/CLuaDefs.h"

class CLuaPathDefs : public CLuaDefs
{
public:
    static void LoadFunctions();
    static void AddClass(lua_State* luaVM);

private:
    static std::optional<std::vector<std::string>> pathListDir(lua_State* luaVM, std::string path);
    
    static bool pathIsFile(lua_State* luaVM, std::string path);
    static bool pathIsDirectory(lua_State* luaVM, std::string path);
};
