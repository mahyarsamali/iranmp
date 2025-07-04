/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerResourceStartPacket.cpp
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerResourceStartPacket.h"
#include "CGame.h"
#include "CResourceManager.h"

bool CPlayerResourceStartPacket::Read(NetBitStreamInterface& BitStream)
{
    ushort usResourceNetId;
    BitStream.Read(usResourceNetId);
    m_pResource = g_pGame->GetResourceManager()->GetResourceFromNetID(usResourceNetId);
    return true;
}
