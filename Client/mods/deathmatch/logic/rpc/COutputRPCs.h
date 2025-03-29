/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/rpc/COutputRPCs.h
 *  PURPOSE:     Header for output RPC class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CRPCFunctions.h"

class COutputRPCs : public CRPCFunctions
{
public:
    static void LoadFunctions();

    DECLARE_RPC(ToggleDebugger);
    DECLARE_RPC(SetTransferBoxVisibility);
};
