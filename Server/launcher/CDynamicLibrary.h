/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        launcher/CDynamicLibrary.h
 *  PURPOSE:     Dynamic library handling class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#ifdef WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

class CDynamicLibrary
{
public:
    CDynamicLibrary();
    ~CDynamicLibrary();

    bool Load(const char* szFilename);
    void Unload();
    bool IsLoaded();

    void* GetProcedureAddress(const char* szProcName);

private:
    #ifdef WIN32
    HMODULE m_hModule;
    #else
    void* m_hModule;
    #endif
};
