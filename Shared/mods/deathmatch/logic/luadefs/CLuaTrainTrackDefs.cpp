/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CLuaTrainTrackDefs.h"
#include <lua/CLuaFunctionParser.h>

#ifndef MTA_CLIENT
    #include "CTrainTrackManager.h"
    #include "CGame.h"
#endif

void CLuaTrainTrackDefs::LoadFunctions()
{
    // CLuaCFunctions::AddFunction("getDefaultTrack", ArgumentParser<GetDefaultTrack>);
}

void CLuaTrainTrackDefs::AddClass(lua_State* luaVM)
{
    // lua_newclass(luaVM);

    // lua_classfunction(luaVM, "getDefault", "getDefaultTrack");

    // lua_registerclass(luaVM, "TrainTrack", "Element");
}

auto CLuaTrainTrackDefs::GetDefaultTrack(uchar trackID) -> CLuaTrainTrackDefs::TrainTrack
{
    if (trackID > 3)
        throw std::invalid_argument("Bad default track ID (0-3)");

#ifdef MTA_CLIENT
    return trackID;
#else
    return g_pGame->GetTrainTrackManager()->GetTrainTrackByIndex(trackID);
#endif
}
