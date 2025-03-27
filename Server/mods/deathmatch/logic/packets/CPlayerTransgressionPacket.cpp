/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerTransgressionPacket.cpp
 *  PURPOSE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerTransgressionPacket.h"

bool CPlayerTransgressionPacket::Read(NetBitStreamInterface& BitStream)
{
    return BitStream.Read(m_uiLevel) && BitStream.ReadString(m_strMessage);
}
