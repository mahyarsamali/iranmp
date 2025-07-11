/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerNoSocketPacket.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/
#pragma once

class CPlayerNoSocketPacket final : public CPacket
{
public:
    virtual bool  RequiresSourcePlayer() const { return true; }
    ePacketID     GetPacketID() const { return PACKET_ID_PLAYER_NO_SOCKET; };
    unsigned long GetFlags() const
    {
        assert(0);
        return 0;
    };

    bool Read(NetBitStreamInterface& BitStream) { return true; };
};
