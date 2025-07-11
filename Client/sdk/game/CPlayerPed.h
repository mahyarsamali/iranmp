/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPlayerPed.h
 *  PURPOSE:     Played ped entity interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CPed.h"

class CWanted;

class CPlayerPed : public virtual CPed
{
public:
    virtual ~CPlayerPed(){};

    virtual CWanted* GetWanted() = 0;

    virtual void SetInitialState() = 0;

    virtual eMoveAnim GetMoveAnim() = 0;
    virtual void      SetMoveAnim(eMoveAnim iAnimGroup) = 0;

    virtual CEntity* GetTargetedEntity() const = 0;
    virtual void     SetTargetedEntity(CEntity* entity) = 0;
};
