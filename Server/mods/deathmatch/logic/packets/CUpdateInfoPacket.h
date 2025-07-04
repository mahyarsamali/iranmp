/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CUpdateInfoPacket.h
 *  PURPOSE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CUpdateInfoPacket final : public CPacket
{
public:
    CUpdateInfoPacket();
    CUpdateInfoPacket(const SString& m_strType, const SString& strData);

    ePacketID     GetPacketID() const { return PACKET_ID_UPDATE_INFO; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const;

private:
    SString m_strType;
    SString m_strData;
};
