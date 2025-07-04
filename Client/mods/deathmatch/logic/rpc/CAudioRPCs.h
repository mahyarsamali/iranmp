/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/rpc/CAudioRPCs.h
 *  PURPOSE:     Header for audio RPC class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CRPCFunctions.h"

class CAudioRPCs : public CRPCFunctions
{
public:
    static void LoadFunctions();

    DECLARE_RPC(PlaySound);

private:
    enum
    {
        AUDIO_FRONTEND,
        AUDIO_MISSION_PRELOAD,
        AUDIO_MISSION_PLAY
    };
};
