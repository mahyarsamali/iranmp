/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CResourceStopPacket.h
 *  PURPOSE:     Resource stop packet handler class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CResourceStopPacket final : public CPacket
{
public:
    CResourceStopPacket(unsigned short usID);

    ePacketID     GetPacketID() const { return PACKET_ID_RESOURCE_STOP; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

private:
    unsigned short m_usID;
};
