/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CUnoccupiedVehicleStopSyncPacket.h
 *  PURPOSE:     Unoccupied vehicle stop synchronization packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"

class CUnoccupiedVehicleStopSyncPacket final : public CPacket
{
public:
    CUnoccupiedVehicleStopSyncPacket(ElementID ID) { m_ID = ID; };

    ePacketID     GetPacketID() const { return PACKET_ID_UNOCCUPIED_VEHICLE_STOPSYNC; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE | PACKET_SEQUENCED; };

    bool Write(NetBitStreamInterface& BitStream) const
    {
        BitStream.Write(m_ID);
        return true;
    };

private:
    ElementID m_ID;
};
