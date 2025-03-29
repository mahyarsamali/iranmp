/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CRopes.h
 *  PURPOSE:     Rope entity interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CVector;
class CEntitySAInterface;

class CRopes
{
public:
    virtual int  CreateRopeForSwatPed(const CVector& vecPosition, DWORD dwDuration = 4000) = 0;
    virtual void RemoveEntityRope(CEntitySAInterface* pObjectSA) = 0;
};
