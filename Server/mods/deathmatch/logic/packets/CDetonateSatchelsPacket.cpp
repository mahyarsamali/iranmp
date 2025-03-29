/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CDetonateSatchelsPacket.cpp
 *  PURPOSE:     Satchel detonation packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CDetonateSatchelsPacket.h"
#include "CPlayer.h"

CDetonateSatchelsPacket::CDetonateSatchelsPacket()
{
}

bool CDetonateSatchelsPacket::Read(NetBitStreamInterface& BitStream)
{
    return true;
}

bool CDetonateSatchelsPacket::Write(NetBitStreamInterface& BitStream) const
{
    // Write the source player and latency if any.
    if (m_pSourceElement)
    {
        BitStream.Write(m_pSourceElement->GetID());

        unsigned short usLatency = static_cast<CPlayer*>(m_pSourceElement)->GetPing();
        BitStream.WriteCompressed(usLatency);
    }
    else
        return false;

    return true;
}
