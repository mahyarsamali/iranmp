/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        gui/CGUITabListItem.h
 *  PURPOSE:     Tab-able Element Interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

#include <gui/CGUI.h>

class CGUITabListItem : public CGUIElement
{
public:
    virtual bool ActivateOnTab() = 0;
};
