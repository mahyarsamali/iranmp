/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/logic/lua/CLuaMatrix.h
 *  PURPOSE:     Lua matrix class
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

class CLuaMatrix : public CMatrix
{
public:
    CLuaMatrix();
    CLuaMatrix(const CMatrix& matrix);

    ~CLuaMatrix();

    unsigned int GetScriptID() const { return m_uiScriptID; }

    static CLuaMatrix* GetFromScriptID(unsigned int uiScriptID);

private:
    unsigned int m_uiScriptID;
};
