/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CMessageLoopHook.h
 *  PURPOSE:     Header file for message loop hook class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <windows.h>
#include "CSingleton.h"

#define URI_CONNECT 1
#define VK_1    0x30
#define VK_9    0x39

class CMessageLoopHook : public CSingleton<CMessageLoopHook>
{
public:
    CMessageLoopHook();
    ~CMessageLoopHook();

    void ApplyHook(HWND hFocusWindow);
    void RemoveHook();
    HWND GetHookedWindowHandle() const;
    void MaybeRefreshMsgQueue();
    void SetRefreshMsgQueueEnabled(bool bEnable);
    void StartWindowMovement();

    static LRESULT CALLBACK ProcessMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    static LRESULT CALLBACK ProcessDummyWindowMessage(HWND hwnd, UINT uMsg, WPARAM wPAram, LPARAM lParam);

private:
    CElapsedTime m_ProcessMessageTimer;
    WNDPROC      m_HookedWindowProc;
    HWND         m_HookedWindowHandle;
    bool         m_bRefreshMsgQueueEnabled;
    POINT        m_MoveOffset;
    HWND         m_MovementDummyWindow;

    static WPARAM m_LastVirtualKeyCode;
    static UCHAR  m_LastScanCode;
    static BYTE*  m_LastKeyboardState;
};
