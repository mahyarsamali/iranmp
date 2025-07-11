/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPickups.h
 *  PURPOSE:     Pickup entity manager interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "Common.h"

class CPickup;
class CVector;

class CPickups
{
public:
    virtual CPickup* CreatePickup(CVector* position, DWORD ModelIndex, ePickupType Type = PICKUP_ONCE, DWORD dwMonetaryValue = 0, DWORD dwMoneyPerDay = 0,
                                  BYTE bPingOutOfPlayer = 0) = 0;
    virtual void     DisablePickupProcessing(bool bDisabled) = 0;
};
