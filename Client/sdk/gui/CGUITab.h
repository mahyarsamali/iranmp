/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUITab.h
 *  PURPOSE:     Tab widget interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"

class CGUITab : public CGUIElement
{
public:
    virtual ~CGUITab(){};

    virtual void SetCaption(const char* szCaption) = 0;
};
