/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CUnoccupiedVehiclePushPacket.h
 *  PURPOSE:     Unoccupied vehicle push synchronization packet class ( Change syncer to the pusher of the vehicle to make it neater. )
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CPacket.h"
#include <net/SyncStructures.h>

class CVehicle;

class CUnoccupiedVehiclePushPacket final : public CPacket
{
public:
    CUnoccupiedVehiclePushPacket(){};

    ePacketID     GetPacketID() const { return PACKET_ID_VEHICLE_PUSH_SYNC; };
    unsigned long GetFlags() const { return 0; };            // Not used

    bool Read(NetBitStreamInterface& BitStream);

    SUnoccupiedPushSync vehicle;
};
