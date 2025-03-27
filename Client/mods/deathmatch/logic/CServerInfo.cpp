/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CServerInfo.cpp
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include <StdInc.h>
#include "CServerInfo.h"

CServerInfo::CServerInfo() : m_MaxPlayersCount(0)
{
}

void CServerInfo::SetMaxPlayers(uint set)
{
    m_MaxPlayersCount = set;
}
