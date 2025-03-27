/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CBoat.h
 *  PURPOSE:     Boat vehicle interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CVehicle.h"

class CBoatHandlingEntry;

class CBoat : public virtual CVehicle
{
public:
    virtual ~CBoat(){};

    virtual CBoatHandlingEntry* GetBoatHandlingData() = 0;
    virtual void                SetBoatHandlingData(CBoatHandlingEntry* pHandling) = 0;
};
