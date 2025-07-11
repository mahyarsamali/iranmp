/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CObjectGroupPhysicalProperties.h
 *  PURPOSE:     Objects dynamic physical properties handler interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

class CFxSystemBPSAInterface;
class CObjectGroupPhysicalPropertiesSAInterface;
class CVector;

class CObjectGroupPhysicalProperties
{
public:
    virtual class CObjectGroupPhysicalPropertiesSAInterface* GetInterface() const = 0;
    virtual unsigned char                                    GetGroup() const = 0;
    virtual void                                             RestoreDefault() = 0;

    virtual void                            SetMass(float fMass) = 0;
    virtual float                           GetMass() const = 0;
    virtual void                            SetTurnMass(float fTurnMass) = 0;
    virtual float                           GetTurnMass() const = 0;
    virtual void                            SetAirResistance(float fAirResistance) = 0;
    virtual float                           GetAirResistance() const = 0;
    virtual void                            SetElasticity(float fElasticity) = 0;
    virtual float                           GetElasticity() const = 0;
    virtual void                            SetBuoyancy(float fBuoyancy) = 0;
    virtual float                           GetBuoyancy() const = 0;
    virtual void                            SetUprootLimit(float fUprootLimit) = 0;
    virtual float                           GetUprootLimit() const = 0;
    virtual void                            SetCollisionDamageMultiplier(float fColMult) = 0;
    virtual float                           GetCollisionDamageMultiplier() const = 0;
    virtual void                            SetCollisionDamageEffect(eObjectGroup::DamageEffect eDamageEffect) = 0;
    virtual eObjectGroup::DamageEffect      GetCollisionDamageEffect() const = 0;
    virtual void                            SetCollisionSpecialResponseCase(eObjectGroup::CollisionResponse eResponseCase) = 0;
    virtual eObjectGroup::CollisionResponse GetCollisionSpecialResponseCase() const = 0;
    virtual void                            SetCameraAvoidObject(bool bAvoid) = 0;
    virtual bool                            GetCameraAvoidObject() const = 0;
    virtual void                            SetCausesExplosion(bool bExplodes) = 0;
    virtual bool                            GetCausesExplosion() const = 0;
    virtual void                            SetFxType(eObjectGroup::FxType eFxType) = 0;
    virtual eObjectGroup::FxType            GetFxType() const = 0;
    virtual void                            SetFxOffset(CVector vecOffset) = 0;
    virtual CVector                         GetFxOffset() const = 0;
    virtual bool                            SetFxParticleSystem(CFxSystemBPSAInterface* pBlueprint) = 0;
    virtual void                            RemoveFxParticleSystem() = 0;
    virtual void                            SetSmashMultiplier(float fMult) = 0;
    virtual float                           GetSmashMultiplier() const = 0;
    virtual void                            SetBreakVelocity(CVector vecVelocity) = 0;
    virtual CVector                         GetBreakVelocity() const = 0;
    virtual void                            SetBreakVelocityRandomness(float fRand) = 0;
    virtual float                           GetBreakVelocityRandomness() const = 0;
    virtual void                            SetBreakMode(eObjectGroup::BreakMode eBreakMode) = 0;
    virtual eObjectGroup::BreakMode         GetBreakMode() const = 0;
    virtual void                            SetSparksOnImpact(bool bSparks) = 0;
    virtual bool                            GetSparksOnImpact() const = 0;
};
