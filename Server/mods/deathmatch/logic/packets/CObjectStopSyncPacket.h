/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CObjectStopSyncPacket.h
 *  PURPOSE:     Object stop sync packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CObjectStopSyncPacket final : public CPacket
{
public:
    CObjectStopSyncPacket(CObject* pObject) { m_pObject = pObject; };

    ePacketID     GetPacketID() const { return PACKET_ID_OBJECT_STOPSYNC; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const
    {
        BitStream.Write(m_pObject->GetID());
        return true;
    };

private:
    CObject* m_pObject;
};
