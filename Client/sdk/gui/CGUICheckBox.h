/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUICheckBox.h
 *  PURPOSE:     Check box widget interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"
#include "CGUICallback.h"

class CGUICheckBox : public CGUIElement
{
public:
    virtual ~CGUICheckBox(){};

    virtual void SetSelected(bool bSelected) = 0;
    virtual bool GetSelected() = 0;
};
