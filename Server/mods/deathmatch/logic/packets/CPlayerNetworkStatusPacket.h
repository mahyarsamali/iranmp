/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerNetworkStatusPacket.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CPlayerNetworkStatusPacket final : public CPacket
{
public:
    virtual bool  RequiresSourcePlayer() const { return true; }
    ePacketID     GetPacketID() const { return PACKET_ID_PLAYER_NETWORK_STATUS; };
    unsigned long GetFlags() const
    {
        assert(0);
        return 0;
    };

    bool Read(NetBitStreamInterface& BitStream);

    uchar m_ucType;
    uint  m_uiTicks;
};
