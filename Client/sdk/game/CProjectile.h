/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CProjectile.h
 *  PURPOSE:     Projectile entity interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CObject.h"

class CProjectileInfo;

class CProjectile : public virtual CObject
{
public:
    virtual ~CProjectile(){};

    virtual void Destroy(bool bBlow) = 0;
    virtual void SetProjectileInfo(CProjectileInfo* pProjectileInfo) = 0;
    virtual bool CorrectPhysics() = 0;
};
