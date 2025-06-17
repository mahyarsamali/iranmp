/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerWorldSpecialPropertyPacket.cpp
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerWorldSpecialPropertyPacket.h"

bool CPlayerWorldSpecialPropertyPacket::Read(NetBitStreamInterface& stream) noexcept
{
    stream.ReadString(m_property);
    stream.ReadBit(m_enabled);

    return true;
}
