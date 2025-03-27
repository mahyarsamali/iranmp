/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CPointLightsSA.h
 *  PURPOSE:     Point lights sdk header
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CEntity;
class CVector;

enum ePointLightType
{
    PLTYPE_POINTLIGHT = 0,
    PLTYPE_SPOTLIGHT = 1,
    PLTYPE_DARKLIGHT = 2,
};

class CPointLights
{
public:
    virtual void AddLight(int iMode, const CVector vecPosition, CVector vecDirection, float fRadius, SharedUtil::SColor color, unsigned char uc_8,
                          bool bCreatesShadow, CEntity* pAffected) = 0;

    virtual void PreRenderHeliLights() = 0;
    virtual void PostRenderHeliLights() = 0;
    virtual void RenderHeliLight(const CVector& vecStart, const CVector& vecEnd, float startRadius, float endRadius, bool renderSpot) = 0;
};
