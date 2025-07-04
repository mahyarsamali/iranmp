/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CPickupsSA.h
 *  PURPOSE:     Header file for pickup manager class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CPickups.h>

class CPickupSA;

#define MAX_PICKUPS                 620
#define MAX_PICKUPS_ALWAYS_UPDATED  16

#define ARRAY_PICKUPS               0x9788C0
#define FUNC_CPickups__Update       0x458DE0

class CPickupsSA : public CPickups
{
private:
    CPickupSA* Pickups[MAX_PICKUPS];

public:
    CPickupsSA();
    ~CPickupsSA();

    CPickup* GetPickup(DWORD ID);
    CPickup* CreatePickup(CVector* position, DWORD ModelIndex, ePickupType Type, DWORD dwMonetaryValue, DWORD dwMoneyPerDay, BYTE bPingOutOfPlayer);
    void     DisablePickupProcessing(bool bDisabled);
};
