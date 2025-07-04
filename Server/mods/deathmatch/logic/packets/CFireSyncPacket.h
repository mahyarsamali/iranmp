/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CFireSyncPacket.h
 *  PURPOSE:     Fire synchronization packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"
#include <CVector.h>

class CFireSyncPacket final : public CPacket
{
public:
    CFireSyncPacket();
    CFireSyncPacket(const CVector& vecPosition, float fSize);

    ePacketID     GetPacketID() const { return PACKET_ID_FIRE; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Read(NetBitStreamInterface& BitStream);
    bool Write(NetBitStreamInterface& BitStream) const;

private:
    CVector m_vecPosition;
    float   m_fSize;
};
