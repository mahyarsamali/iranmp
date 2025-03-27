/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CDirectInputHookManager.h
 *  PURPOSE:     Header file for DirectInput hook manager class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CDirectInputHook8.h"

class CDirectInputHookManager
{
public:
    CDirectInputHookManager();
    ~CDirectInputHookManager();

    void ApplyHook();
    void RemoveHook();

private:
    CDirectInputHook8* m_pDirectInputHook8;
};
