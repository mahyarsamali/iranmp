/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once
#include "CLuaDefs.h"

class CLuaNetworkDefs : public CLuaDefs
{
public:
    static void LoadFunctions();

    LUA_DECLARE(CallRemote);
    LUA_DECLARE(FetchRemote);
    LUA_DECLARE(GetRemoteRequests);
    LUA_DECLARE(GetRemoteRequestInfo);
    LUA_DECLARE(AbortRemoteRequest);
};
