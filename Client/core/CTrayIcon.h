/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CTrayIcon.cpp
 *  PURPOSE:     Header file for the tray icon class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

#include <core/CTrayIconInterface.h>
#include <ShellAPI.h>

class CTrayIcon : public CTrayIconInterface
{
public:
    CTrayIcon();
    ~CTrayIcon();
    bool DoesTrayIconExist() { return m_bTrayIconExists; };
    bool CreateTrayIcon();
    void DestroyTrayIcon();
    bool CreateTrayBallon(SString strText, eTrayIconType trayIconType, bool useSound);

    static LRESULT CALLBACK ProcessNotificationsWindowMessage(HWND hwnd, UINT uMsg, WPARAM wPAram, LPARAM lParam);

private:
    NOTIFYICONDATAW* m_pNID;
    bool             m_bTrayIconExists;
    long long        m_llLastBalloonTime;
};
