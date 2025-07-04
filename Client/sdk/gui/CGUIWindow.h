/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUIWindow.h
 *  PURPOSE:     Window widget interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"

class CGUIWindow : public CGUIElement
{
public:
    virtual ~CGUIWindow(){};

    virtual void SetMovable(bool bMovable) = 0;
    virtual bool IsMovable() = 0;
    virtual void SetSizingEnabled(bool bResizeEnabled) = 0;
    virtual bool IsSizingEnabled() = 0;
    virtual void SetFrameEnabled(bool bFrameEnabled) = 0;
    virtual bool IsFrameEnabled() = 0;
    virtual void SetCloseButtonEnabled(bool bCloseButtonEnabled) = 0;
    virtual bool IsCloseButtonEnabled() = 0;
    virtual void SetTitlebarEnabled(bool bTitlebarEnabled) = 0;
    virtual bool IsTitlebarEnabled() = 0;

    virtual void SetCloseClickHandler(GUI_CALLBACK Callback) = 0;
};
