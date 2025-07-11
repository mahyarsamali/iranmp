/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/mods/deathmatch/logic/CIFPEngine.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "game/CAnimBlendHierarchy.h"
class CAnimBlendHierarchy;

class CIFPEngine
{
public:
    enum eRestoreAnimation
    {
        SINGLE = 0,
        BLOCK,
        ALL
    };

    static std::shared_ptr<CClientIFP> LoadIFP(CResource* resource, CClientManager* clientManager, const SString& blockName, bool isRawInput, SString input);
    static bool                        EngineReplaceAnimation(CClientEntity* pEntity, const SString& strInternalBlockName, const SString& strInternalAnimName,
                                                              const SString& strCustomBlockName, const SString& strCustomAnimName);
    static bool                        EngineRestoreAnimation(CClientEntity* pEntity, const SString& strInternalBlockName, const SString& strInternalAnimName,
                                                              const eRestoreAnimation& eRestoreType);
    static bool                        EngineApplyAnimation(CClientPed& Ped, CAnimBlendHierarchySAInterface* pOriginalHierarchyInterface,
                                                            CAnimBlendHierarchySAInterface* pAnimHierarchyInterface);
    static bool                        IsIFPData(const SString& strData);
};
