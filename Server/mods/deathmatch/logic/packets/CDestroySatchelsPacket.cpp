/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CDestroySatchelsPacket.cpp
 *  PURPOSE:     Satchel destruction packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CDestroySatchelsPacket.h"
#include "CElement.h"

CDestroySatchelsPacket::CDestroySatchelsPacket()
{
}

bool CDestroySatchelsPacket::Read(NetBitStreamInterface& BitStream)
{
    return true;
}

bool CDestroySatchelsPacket::Write(NetBitStreamInterface& BitStream) const
{
    // Write the source player.
    if (m_pSourceElement)
    {
        BitStream.Write(m_pSourceElement->GetID());
    }
    else
        return false;

    return true;
}
