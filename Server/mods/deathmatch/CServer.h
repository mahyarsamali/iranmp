/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/CServer.h
 *  PURPOSE:     Server interface handler class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <core/CServerBase.h>

class CServer : public CServerBase
{
public:
    CServer();
    virtual ~CServer();

    void ServerInitialize(CServerInterface* pServerInterface);
    bool ServerStartup(int iArgumentCount, char* szArguments[]);
    void ServerShutdown();

    void DoPulse();

    void GetTag(char* szInfoTag, int iInfoTag);
    void HandleInput(char* szCommand);

    bool IsReadyToAcceptConnections() const noexcept override;
    bool IsFinished();
    bool PendingWorkToDo();
    bool GetSleepIntervals(int& iSleepBusyMs, int& iSleepIdleMs, int& iLogicFpsLimit);

private:
    CServerInterface* m_pServerInterface;
    class CGame*      m_pGame;
};
