/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CClientPerfStat.PacketUsage.cpp
 *  PURPOSE:     Performance stats manager class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl
//
//
//
///////////////////////////////////////////////////////////////
class CClientPerfStatPacketUsageImpl : public CClientPerfStatPacketUsage
{
public:
    ZERO_ON_NEW

    CClientPerfStatPacketUsageImpl();
    virtual ~CClientPerfStatPacketUsageImpl();

    // CClientPerfStatModule
    virtual const SString& GetCategoryName();
    virtual void           DoPulse();
    virtual void           GetStats(CClientPerfStatResult* pOutResult, const std::map<SString, int>& optionMap, const SString& strFilter);

    // CClientPerfStatModuleImpl
    void MaybeRecordStats();

    int                         m_iStatsCleared;
    CElapsedTime                m_TimeSinceGetStats;
    long long                   m_llNextRecordTime;
    SString                     m_strCategoryName;
    SPacketStat                 m_PrevPacketStats[2][256];
    SPacketStat                 m_PacketStats[2][256];
    SFixedArray<long long, 256> m_ShownPacketStats;
};

///////////////////////////////////////////////////////////////
//
// Temporary home for global object
//
//
//
///////////////////////////////////////////////////////////////
static CClientPerfStatPacketUsageImpl* g_pClientPerfStatPacketUsageImp = NULL;

CClientPerfStatPacketUsage* CClientPerfStatPacketUsage::GetSingleton()
{
    if (!g_pClientPerfStatPacketUsageImp)
        g_pClientPerfStatPacketUsageImp = new CClientPerfStatPacketUsageImpl();
    return g_pClientPerfStatPacketUsageImp;
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::CClientPerfStatPacketUsageImpl
//
//
//
///////////////////////////////////////////////////////////////
CClientPerfStatPacketUsageImpl::CClientPerfStatPacketUsageImpl()
{
    m_strCategoryName = "Packet usage";
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::CClientPerfStatPacketUsageImpl
//
//
//
///////////////////////////////////////////////////////////////
CClientPerfStatPacketUsageImpl::~CClientPerfStatPacketUsageImpl()
{
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::GetCategoryName
//
//
//
///////////////////////////////////////////////////////////////
const SString& CClientPerfStatPacketUsageImpl::GetCategoryName()
{
    return m_strCategoryName;
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::DoPulse
//
//
//
///////////////////////////////////////////////////////////////
void CClientPerfStatPacketUsageImpl::DoPulse()
{
    MaybeRecordStats();
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::RecordStats
//
//
//
///////////////////////////////////////////////////////////////
void CClientPerfStatPacketUsageImpl::MaybeRecordStats()
{
    // Someone watching?
    if (m_TimeSinceGetStats.Get() < 10000)
    {
        // Time for record update?    // Copy and clear once every 5 seconds
        long long llTime = GetTickCount64_();
        if (llTime >= m_llNextRecordTime)
        {
            m_llNextRecordTime = std::max(m_llNextRecordTime + 5000, llTime + 5000 / 10 * 9);

            // Save previous sample so we can calc the delta values
            memcpy(m_PrevPacketStats, m_PacketStats, sizeof(m_PacketStats));
            memcpy(m_PacketStats, g_pNet->GetPacketStats(), sizeof(m_PacketStats));

            if (m_iStatsCleared == 1)
            {
                // Prime if was zeroed
                memcpy(m_PrevPacketStats, m_PacketStats, sizeof(m_PacketStats));
                m_iStatsCleared = 2;
            }
            else if (m_iStatsCleared == 2)
                m_iStatsCleared = 0;
        }
    }
    else
    {
        // No one watching
        if (!m_iStatsCleared)
        {
            memset(m_PrevPacketStats, 0, sizeof(m_PacketStats));
            memset(m_PacketStats, 0, sizeof(m_PacketStats));
            m_iStatsCleared = 1;
        }
    }
}

///////////////////////////////////////////////////////////////
//
// CClientPerfStatPacketUsageImpl::GetStats
//
//
//
///////////////////////////////////////////////////////////////
void CClientPerfStatPacketUsageImpl::GetStats(CClientPerfStatResult* pResult, const std::map<SString, int>& strOptionMap, const SString& strFilter)
{
    m_TimeSinceGetStats.Reset();
    MaybeRecordStats();

    //
    // Set option flags
    //
    bool bHelp = MapContains(strOptionMap, "h");

    //
    // Process help
    //
    if (bHelp)
    {
        pResult->AddColumn("Packet usage help");
        pResult->AddRow()[0] = "Option h - This help";
        return;
    }

    // Add columns
    pResult->AddColumn("Packet type");
    pResult->AddColumn("Incoming.msgs/sec");
    pResult->AddColumn("Incoming.bytes/sec");
    pResult->AddColumn("Incoming.logic cpu");
    pResult->AddColumn("Outgoing.msgs/sec");
    pResult->AddColumn("Outgoing.bytes/sec");
    pResult->AddColumn("Outgoing.msgs share");

    if (m_iStatsCleared)
    {
        pResult->AddRow()[0] = "Sampling... Please wait";
    }

    // Calc msgs grand total for percent calculation
    int iOutDeltaCountTotal = 0;
    for (uint i = 0; i < 256; i++)
    {
        const SPacketStat& statOutPrev = m_PrevPacketStats[CNet::STATS_OUTGOING_TRAFFIC][i];
        const SPacketStat& statOutNow = m_PacketStats[CNet::STATS_OUTGOING_TRAFFIC][i];
        iOutDeltaCountTotal += statOutNow.iCount - statOutPrev.iCount;
    }

    long long llTickCountNow = CTickCount::Now().ToLongLong();
    // Fill rows
    for (uint i = 0; i < 256; i++)
    {
        // Calc incoming delta values
        SPacketStat statInDelta;
        {
            const SPacketStat& statInPrev = m_PrevPacketStats[CNet::STATS_INCOMING_TRAFFIC][i];
            const SPacketStat& statInNow = m_PacketStats[CNet::STATS_INCOMING_TRAFFIC][i];
            statInDelta.iCount = statInNow.iCount - statInPrev.iCount;
            statInDelta.iTotalBytes = statInNow.iTotalBytes - statInPrev.iTotalBytes;
            statInDelta.totalTime = statInNow.totalTime - statInPrev.totalTime;
        }

        // Calc outgoing delta values
        SPacketStat statOutDelta;
        {
            const SPacketStat& statOutPrev = m_PrevPacketStats[CNet::STATS_OUTGOING_TRAFFIC][i];
            const SPacketStat& statOutNow = m_PacketStats[CNet::STATS_OUTGOING_TRAFFIC][i];
            statOutDelta.iCount = statOutNow.iCount - statOutPrev.iCount;
            statOutDelta.iTotalBytes = statOutNow.iTotalBytes - statOutPrev.iTotalBytes;
            statOutDelta.totalTime = statOutNow.totalTime - statOutPrev.totalTime;
        }

        if (!statInDelta.iCount && !statOutDelta.iCount)
        {
            // Once displayed, keep a row displayed for at least 20 seconds
            if (llTickCountNow - m_ShownPacketStats[i] > 20000)
                continue;
        }
        else
        {
            m_ShownPacketStats[i] = llTickCountNow;
        }

        // Add row
        SString* row = pResult->AddRow();

        int c = 0;
        // Turn "PACKET_ID_PED_SYNC" into "64_Ped_sync"
        SString strPacketDesc = EnumToString((ePacketID)i).SplitRight("PACKET_ID", NULL, -1).ToLower();
        row[c++] = SString("%d", i) + strPacketDesc.Left(2).ToUpper() + strPacketDesc.SubStr(2);
        if (statInDelta.iCount)
        {
            row[c++] = SString("%d", (statInDelta.iCount + 4) / 5);
            row[c++] = SString("%d", (statInDelta.iTotalBytes + 4) / 5);
            row[c++] = SString("%2.2f%%",
                               statInDelta.totalTime / 50000.f);            // Number of microseconds in sample period ( 5sec * 1000000 ) into percent ( * 100 )
        }
        else
        {
            row[c++] = "-";
            row[c++] = "-";
            row[c++] = "-";
        }

        if (statOutDelta.iCount)
        {
            row[c++] = SString("%d", (statOutDelta.iCount + 4) / 5);
            row[c++] = SString("%d", (statOutDelta.iTotalBytes + 4) / 5);
            row[c++] = SString("%d%%", (int)(statOutDelta.iCount * 100 / iOutDeltaCountTotal));
        }
        else
        {
            row[c++] = "-";
            row[c++] = "-";
            row[c++] = "-";
        }
    }
}
