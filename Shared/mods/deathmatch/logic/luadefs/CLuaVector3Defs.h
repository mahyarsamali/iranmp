/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/deathmatch/logic/luadefs/CLuaVector3Defs.h
 *  PURPOSE:     Lua general class functions
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

extern "C"
{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

#include "luadefs/CLuaDefs.h"

class CLuaVector3Defs : public CLuaDefs
{
public:
    static void AddClass(lua_State* luaVM);
    LUA_DECLARE(Create);
    LUA_DECLARE(Destroy);

    LUA_DECLARE(GetLength);
    LUA_DECLARE(GetLengthSquared);
    LUA_DECLARE(GetNormalized);
    LUA_DECLARE(Normalize);
    LUA_DECLARE(Cross);
    LUA_DECLARE(Dot);

    LUA_DECLARE(ToString);

    LUA_DECLARE(SetX);
    LUA_DECLARE(SetY);
    LUA_DECLARE(SetZ);

    LUA_DECLARE(GetX);
    LUA_DECLARE(GetY);
    LUA_DECLARE(GetZ);

    static std::variant<CVector, bool> IntersectsSegmentTriangle(CVector origin, CVector segmentDir, CVector triVert0, CVector triVert1, CVector triVert2);

    LUA_DECLARE(Add);
    LUA_DECLARE(Sub);
    LUA_DECLARE(Mul);
    LUA_DECLARE(Div);
    LUA_DECLARE(Pow);
    LUA_DECLARE(Unm);
    LUA_DECLARE(Eq);
};
