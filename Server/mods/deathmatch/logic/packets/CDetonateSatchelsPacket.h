/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CDetonateSatchelsPacket.h
 *  PURPOSE:     Satchel detonation packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CDetonateSatchelsPacket final : public CPacket
{
public:
    CDetonateSatchelsPacket();

    ePacketID     GetPacketID() const { return PACKET_ID_DETONATE_SATCHELS; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Read(NetBitStreamInterface& BitStream);
    bool Write(NetBitStreamInterface& BitStream) const;
};
