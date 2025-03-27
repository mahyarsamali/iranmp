/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CResourceStopPacket.cpp
 *  PURPOSE:     Resource stop packet handler class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CResourceStopPacket.h"

CResourceStopPacket::CResourceStopPacket(unsigned short usID)
{
    m_usID = usID;
}

bool CResourceStopPacket::Write(NetBitStreamInterface& BitStream) const
{
    // Write the resource id
    BitStream.Write(m_usID);
    return true;
}
