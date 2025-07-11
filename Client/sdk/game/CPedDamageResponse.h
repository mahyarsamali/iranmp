/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPedDamageResponse.h
 *  PURPOSE:     ped damage response interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CEntity;
class CPedDamageResponseSAInterface;
enum ePedPieceTypes;
enum eWeaponType;

class CPedDamageResponse
{
public:
    virtual CPedDamageResponseSAInterface* GetInterface() = 0;
    virtual void Calculate(CEntity* pEntity, float fDamage, eWeaponType weaponType, ePedPieceTypes bodyPart, bool b_1, bool bSpeak) = 0;
};
