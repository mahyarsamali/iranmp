/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CScreenShot.h
 *  PURPOSE:     Header file for screen capture handling class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CCore.h"
#include <time.h>

class CScreenShot
{
public:
    static void InitiateScreenShot(bool bIsCameraShot);
    static void CheckForScreenShot(bool bBeforeGUI);
    static void SetPhotoSavingInsideDocuments(bool bSavePhoto) noexcept;

protected:
    static void    StartSaveThread();
    static void    ClearBuffer();
    static SString GetScreenshotPath();
    static bool    IsRateLimited(bool bIsCameraShot);
    static DWORD   ThreadProc(LPVOID lpdwThreadParam);
};
