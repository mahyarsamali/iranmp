/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CDynamicLibrary.h
 *  PURPOSE:     Dynamic library handling class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#ifdef WIN32
#include <windows.h>
#endif

typedef void (*FuncPtr_t)();

class CDynamicLibrary
{
public:
    CDynamicLibrary();
    ~CDynamicLibrary();

    bool Load(const char* szFilename);
    void Unload();
    bool IsLoaded();

    FuncPtr_t GetProcedureAddress(const char* szProcName);
    bool      CheckMtaVersion(const char* szLibName);

private:
    #ifdef WIN32
    HMODULE m_hModule;
    #else
    void* m_hModule;
    #endif
};
