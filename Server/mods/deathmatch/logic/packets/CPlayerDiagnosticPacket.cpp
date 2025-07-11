/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/packets/CPlayerDiagnosticPacket.cpp
 *  PURPOSE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPlayerDiagnosticPacket.h"

bool CPlayerDiagnosticPacket::Read(NetBitStreamInterface& BitStream)
{
    if (BitStream.ReadString(m_strMessage))
    {
        SString strLevel;
        m_strMessage.Split(",", &strLevel, &m_strMessage);
        m_uiLevel = atoi(strLevel);
        return true;
    }
    return false;
}
