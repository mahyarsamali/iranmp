/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/logic/lua/CLuaVector3.h
 *  PURPOSE:     Lua vector3 class
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

class CLuaVector3D : public CVector
{
public:
    CLuaVector3D();
    CLuaVector3D(const CVector& vector);
    CLuaVector3D(float fX, float fY, float fZ);

    ~CLuaVector3D();

    unsigned int GetScriptID() const { return m_uiScriptID; }

    static CLuaVector3D* GetFromScriptID(unsigned int uiScriptID);

private:
    unsigned int m_uiScriptID;
};
