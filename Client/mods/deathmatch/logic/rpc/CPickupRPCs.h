/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/rpc/CPickupRPCs.h
 *  PURPOSE:     Header for pickups RPC class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CRPCFunctions.h"

class CPickupRPCs : public CRPCFunctions
{
public:
    static void LoadFunctions();

    DECLARE_RPC(DestroyAllPickups);
    DECLARE_ELEMENT_RPC(SetPickupType);
    DECLARE_ELEMENT_RPC(SetPickupVisible);
};
