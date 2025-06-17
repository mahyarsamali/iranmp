/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/SResourceStartOptions.h
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

struct SResourceStartOptions
{
    bool bIncludedResources = true;
    bool bConfigs = true;
    bool bMaps = true;
    bool bScripts = true;
    bool bHTML = true;
    bool bClientConfigs = true;
    bool bClientScripts = true;
    bool bClientFiles = true;
};
