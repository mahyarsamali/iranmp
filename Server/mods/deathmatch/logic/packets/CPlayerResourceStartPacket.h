/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerResourceStartPacket.h
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CResource;

class CPlayerResourceStartPacket final : public CPacket
{
public:
    CPlayerResourceStartPacket() {}

    ePacketID               GetPacketID() const { return PACKET_ID_PLAYER_RESOURCE_START; }
    unsigned long           GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };
    virtual ePacketOrdering GetPacketOrdering() const { return PACKET_ORDERING_DEFAULT; }

    bool Read(NetBitStreamInterface& BitStream);

    CResource* GetResource() const { return m_pResource; }

private:
    CResource* m_pResource;
};
