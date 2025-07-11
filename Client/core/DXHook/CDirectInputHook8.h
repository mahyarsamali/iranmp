/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CDirectInputHook8.h
 *  PURPOSE:     Header file for DirectInput 8 hooker class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

typedef HRESULT(__stdcall* pDirectInputCreate)(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);

class CDirectInputHook8 : public CSingleton<CDirectInputHook8>
{
public:
    CDirectInputHook8();
    ~CDirectInputHook8();

    // Hook routines.
    static HRESULT __stdcall API_DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);

    // Hook utilities.
    bool ApplyHook();
    bool RemoveHook();

private:
    pDirectInputCreate m_pfnDirectInputCreate;
    bool               m_bIsUnicodeInterface;
};
