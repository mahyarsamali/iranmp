/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/logic/lua/CLuaVector4.cpp
 *  PURPOSE:     Lua vector4 class
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

class CLuaVector4D : public CVector4D
{
public:
    CLuaVector4D();
    CLuaVector4D(const CVector4D& vector);
    CLuaVector4D(float fX, float fY, float fZ, float fW);

    ~CLuaVector4D();

    unsigned int GetScriptID() const { return m_uiScriptID; }

    static CLuaVector4D* GetFromScriptID(unsigned int uiScriptID);

private:
    unsigned int m_uiScriptID;
};
