/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/rpc/CRadarRPCs.h
 *  PURPOSE:     Header for radar rpc class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CRPCFunctions.h"

class CRadarRPCs : public CRPCFunctions
{
public:
    static void LoadFunctions();

    DECLARE_RPC(DestroyAllRadarAreas);
    DECLARE_ELEMENT_RPC(SetRadarAreaSize);
    DECLARE_ELEMENT_RPC(SetRadarAreaColor);
    DECLARE_ELEMENT_RPC(SetRadarAreaFlashing);
};
