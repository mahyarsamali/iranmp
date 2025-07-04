/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CBuildingsPool.h
 *  PURPOSE:     Buildings pool interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "Common.h"
#include <CVector.h>

class CBuilding;
class CBuildingSA;

class CBuildingsPool
{
public:

    // Buildings pool
    virtual CBuilding* AddBuilding(class CClientBuilding*, std::uint16_t modelId, CVector* vPos, CVector* vRot, std::uint8_t interior) = 0;
    virtual void       RemoveBuilding(CBuilding* pObject) = 0;
    virtual bool       HasFreeBuildingSlot() = 0;
    virtual bool       Resize(int size) = 0;
    virtual int        GetSize() const = 0;

    virtual void RemoveAllWithBackup() = 0;
    virtual void RestoreBackup() = 0;
};
