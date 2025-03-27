/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CBuilding.h
 *  PURPOSE:     Physical entity interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CEntity.h"

class CBuildingSAInterface;

class CBuilding : public virtual CEntity
{
public:
    virtual ~CBuilding(){};

    virtual CBuildingSAInterface* GetBuildingInterface() = 0;
    virtual void                  SetLod(CBuilding* pLod) = 0;
};
