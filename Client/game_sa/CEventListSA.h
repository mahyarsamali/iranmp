/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CEventListSA.h
 *  PURPOSE:     Header file for event list class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CEventList.h>

class CEventListSA : public CEventList
{
public:
    CEventDamage* GetEventDamage(CEventDamageSAInterface* pInterface);
};
