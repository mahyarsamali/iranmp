/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CNetworkStats.h
 *  PURPOSE:     Header for network stats class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CClientDisplayManager.h"

class CNetworkStats
{
public:
    CNetworkStats(CClientDisplayManager* pDisplayManager);

    void Draw();
    void Reset();

private:
    void Update();

    CClientDisplayManager* m_pDisplayManager;

    unsigned long      m_ulLastUpdateTime;
    unsigned int       m_uiLastPacketsReceived;
    unsigned int       m_uiLastPacketsSent;
    unsigned long long m_ullLastBytesSent;
    unsigned long long m_ullLastBytesReceived;

    float m_fPacketSendRate;
    float m_fPacketReceiveRate;
    float m_fByteSendRate;
    float m_fByteReceiveRate;
};
