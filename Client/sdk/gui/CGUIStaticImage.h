/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUIStaticImage.h
 *  PURPOSE:     Static image widget interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"
#include "CGUITexture.h"

class CGUIStaticImage : public CGUIElement
{
public:
    virtual ~CGUIStaticImage(){};

    virtual bool LoadFromFile(const char* szFilename) = 0;
    virtual bool LoadFromTexture(CGUITexture* pTexture) = 0;
    virtual void Clear() = 0;
    virtual bool GetNativeSize(CVector2D& vecSize) = 0;

    virtual void SetFrameEnabled(bool bFrameEnabled) = 0;
    virtual bool IsFrameEnabled() = 0;

    virtual void Render() = 0;
};
