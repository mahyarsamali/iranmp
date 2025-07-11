/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CCredits.h
 *  PURPOSE:     Header file for credits class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

class CCredits;

#pragma once

#include "CMainMenu.h"
#include <ctime>

#define MAX_CREDITS_LABEL_COUNT 120

class CCredits
{
public:
    CCredits();
    ~CCredits();

    void SetVisible(bool bVisible);
    bool IsVisible();

    void Update();

    bool OnOKButtonClick(CGUIElement* pElement);

private:
    CGUIWindow* m_pWindow;
    CGUILabel*  m_pLabels[MAX_CREDITS_LABEL_COUNT];
    CGUIButton* m_pButtonOK;
    SString     m_strCredits;

    clock_t m_clkStart;
};
