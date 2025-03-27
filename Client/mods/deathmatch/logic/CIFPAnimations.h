/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/mods/deathmatch/logic/CIFPAnimations.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CClientIFP.h"

class CIFPAnimations
{
public:
    struct SAnimation
    {
        SString                              Name;
        unsigned int                         uiNameHash;
        std::unique_ptr<CAnimBlendHierarchy> pHierarchy;
        BYTE*                                pSequencesMemory;
    };

    std::vector<SAnimation> vecAnimations;

public:
    ~CIFPAnimations();
    void DeleteAnimations();
};
