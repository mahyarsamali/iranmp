/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPlane.h
 *  PURPOSE:     Plane vehicle entity interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CAutomobile.h"

class CPlane : public virtual CAutomobile
{
public:
    virtual ~CPlane(){};
};
