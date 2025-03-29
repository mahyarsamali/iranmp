/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CRenderer.h
 *  PURPOSE:     Renderer interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CModelInfo;
class CMatrix;

class CRenderer
{
public:
    virtual ~CRenderer() {}

    virtual void RenderModel(CModelInfo* pModelInfo, const CMatrix& matrix, float lighting) = 0;
};
