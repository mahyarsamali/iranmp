/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CLuaPacket.cpp
 *  PURPOSE:     Lua packet class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CLuaPacket.h"

bool CLuaPacket::Write(NetBitStreamInterface& BitStream) const
{
    // Write the action ID
    BitStream.Write(m_ucActionID);

    // Copy each byte from the bitstream we have to this one
    unsigned char ucTemp;
    int           iLength = m_BitStream.GetNumberOfBitsUsed();
    while (iLength > 8)
    {
        m_BitStream.Read(ucTemp);
        BitStream.Write(ucTemp);
        iLength -= 8;
    }
    if (iLength > 0)
    {
        m_BitStream.ReadBits(&ucTemp, iLength);
        BitStream.WriteBits(&ucTemp, iLength);
    }

    m_BitStream.ResetReadPointer();

    return true;
}
