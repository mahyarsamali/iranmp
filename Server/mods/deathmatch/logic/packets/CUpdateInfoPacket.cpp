/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CUpdateInfoPacket.cpp
 *  PURPOSE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CUpdateInfoPacket.h"

CUpdateInfoPacket::CUpdateInfoPacket()
{
}

CUpdateInfoPacket::CUpdateInfoPacket(const SString& strType, const SString& strData)
{
    m_strType = strType;
    m_strData = strData;
}

bool CUpdateInfoPacket::Write(NetBitStreamInterface& BitStream) const
{
    BitStream.Write((unsigned short)m_strType.length());
    BitStream.Write(m_strType.c_str(), m_strType.length());

    BitStream.Write((unsigned short)m_strData.length());
    BitStream.Write(m_strData.c_str(), m_strData.length());

    return true;
}
