/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CResourceStartPacket.h
 *  PURPOSE:     Resource start packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"
#include <list>

class CResourceStartPacket final : public CPacket
{
public:
    CResourceStartPacket(const char* szResourceName, class CResource* pResource);

    ePacketID     GetPacketID() const { return PACKET_ID_RESOURCE_START; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

private:
    std::string m_strResourceName;
    CResource*  m_pResource;
};
