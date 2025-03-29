/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/core/CModManager.h
 *  PURPOSE:     Server mod manager interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

class CModManager
{
public:
    virtual bool RequestLoad(const char* szModName) = 0;

    virtual const char* GetServerPath() = 0;
    virtual const char* GetModPath() = 0;
    virtual SString     GetAbsolutePath(const char* szRelative) = 0;

    virtual void SetExitCode(int exitCode) = 0;
    virtual int  GetExitCode() const = 0;
};
