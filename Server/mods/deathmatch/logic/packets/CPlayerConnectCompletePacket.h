/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerConnectCompletePacket.h
 *  PURPOSE:     Player connect complete packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CPlayerConnectCompletePacket final : public CPacket
{
public:
    ePacketID     GetPacketID() const { return static_cast<ePacketID>(PACKET_ID_SERVER_JOIN_COMPLETE); };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;
};
