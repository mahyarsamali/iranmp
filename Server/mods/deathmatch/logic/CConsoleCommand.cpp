/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CConsoleCommand.cpp
 *  PURPOSE:     Console command class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CConsoleCommand.h"

CConsoleCommand::CConsoleCommand(FCommandHandler* pHandler, const char* szCommand, bool bRestricted, const char* szConsoleHelpText)
{
    // Init
    m_pHandler = pHandler;

    // Copy the command name string
    m_szCommand = new char[strlen(szCommand) + 1];
    strcpy(m_szCommand, szCommand);
    m_bRestricted = bRestricted;
    m_szConsoleHelpText = szConsoleHelpText;
}

bool CConsoleCommand::operator()(CConsole* pConsole, const char* szArguments, CClient* pClient, CClient* pEchoClient)
{
    return m_pHandler(pConsole, szArguments, pClient, pEchoClient);
}
