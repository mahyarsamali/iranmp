/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUITabPanel.h
 *  PURPOSE:     Tab panel widget interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"
#include "CGUITab.h"

class CGUITabPanel : public CGUIElement
{
public:
    virtual ~CGUITabPanel(){};

    virtual CGUITab* CreateTab(const char* szCaption) = 0;
    virtual void     DeleteTab(CGUITab* pTab) = 0;

    virtual CGUITab* GetSelectedTab() = 0;
    virtual void     SetSelectedTab(CGUITab* pTab) = 0;

    virtual void         SetSelectedIndex(unsigned int uiIndex) = 0;
    virtual unsigned int GetSelectedIndex() = 0;

    virtual unsigned int GetTabCount() = 0;

    virtual void SetSelectionHandler(GUI_CALLBACK Callback) = 0;

    virtual bool IsTabSelected(CGUITab* pTab) = 0;
};
