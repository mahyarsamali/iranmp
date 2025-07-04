/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Shared/mods/logic/lua/CLuaMatrix.cpp
 *  PURPOSE:     Lua matrix class
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CLuaMatrix.h"
#include "CIdArray.h"

CLuaMatrix::CLuaMatrix() : CMatrix()
{
    m_uiScriptID = CIdArray::PopUniqueId(this, EIdClass::MATRIX);
}

CLuaMatrix::CLuaMatrix(const CMatrix& matrix) : CMatrix(matrix)
{
    m_uiScriptID = CIdArray::PopUniqueId(this, EIdClass::MATRIX);
}

CLuaMatrix::~CLuaMatrix()
{
    CIdArray::PushUniqueId(this, EIdClass::MATRIX, m_uiScriptID);
    m_uiScriptID = INVALID_ARRAY_ID;
}

CLuaMatrix* CLuaMatrix::GetFromScriptID(unsigned int uiScriptID)
{
    CLuaMatrix* pLuaMatrix = (CLuaMatrix*)CIdArray::FindEntry(uiScriptID, EIdClass::MATRIX);
    return pLuaMatrix;
}
