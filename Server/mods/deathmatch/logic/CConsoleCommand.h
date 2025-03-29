/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CConsoleCommand.h
 *  PURPOSE:     Console command class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CClient.h"

typedef bool(FCommandHandler)(class CConsole*, const char*, CClient*, CClient*);

class CConsoleCommand
{
public:
    CConsoleCommand(FCommandHandler* pHandler, const char* szCommand, bool bRestricted, const char* szConsoleHelpText);
    ~CConsoleCommand() { delete[] m_szCommand; };

    bool             operator()(class CConsole* pConsole, const char* szArguments, CClient* pClient, CClient* pEchoClient);
    FCommandHandler* GetHandler() { return m_pHandler; };
    const char*      GetCommand() { return m_szCommand; };
    bool             IsRestricted() { return m_bRestricted; };
    const char*      GetHelp() { return m_szConsoleHelpText; };

private:
    FCommandHandler* m_pHandler;
    char*            m_szCommand;
    bool             m_bRestricted;
    const char*      m_szConsoleHelpText;
};
