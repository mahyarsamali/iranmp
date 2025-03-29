/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CEventList.h
 *  PURPOSE:     Event list interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CEventDamage;
class CEventDamageSAInterface;

class CEventList
{
public:
    virtual CEventDamage* GetEventDamage(CEventDamageSAInterface* pInterface) = 0;
};
