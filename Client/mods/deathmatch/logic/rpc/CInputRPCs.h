/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/rpc/CInputRPCs.h
 *  PURPOSE:     Header for input RPC class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CRPCFunctions.h"

class CInputRPCs : public CRPCFunctions
{
public:
    static void LoadFunctions();

    DECLARE_RPC(BindKey);
    DECLARE_RPC(UnbindKey);
    DECLARE_RPC(BindCommand);
    DECLARE_RPC(UnbindCommand);
    DECLARE_RPC(ToggleControl);
    DECLARE_RPC(ToggleAllControls);
    DECLARE_RPC(SetControlState);
    DECLARE_RPC(ForceReconnect);
    DECLARE_RPC(ShowCursor);
    DECLARE_RPC(ShowChat);
};
