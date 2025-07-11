/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerNetworkStatusPacket.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerNetworkStatusPacket.h"

bool CPlayerNetworkStatusPacket::Read(NetBitStreamInterface& BitStream)
{
    BitStream.Read(m_ucType);
    if (!BitStream.Read(m_uiTicks))
        return false;
    return true;
}
