/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerQuitPacket.cpp
 *  PURPOSE:     Player quit packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerQuitPacket.h"
#include <net/SyncStructures.h>

CPlayerQuitPacket::CPlayerQuitPacket()
{
    m_PlayerID = INVALID_ELEMENT_ID;
    m_ucQuitReason = 0;
}

bool CPlayerQuitPacket::Write(NetBitStreamInterface& BitStream) const
{
    if (m_PlayerID == INVALID_ELEMENT_ID)
        return false;
    BitStream.Write(m_PlayerID);

    SQuitReasonSync quitReason;
    quitReason.data.uiQuitReason = m_ucQuitReason;
    BitStream.Write(&quitReason);

    return true;
}
