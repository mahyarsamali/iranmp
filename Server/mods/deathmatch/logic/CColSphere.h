/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CColSphere.h
 *  PURPOSE:     Sphere-shaped collision entity class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CColShape.h"

class CColSphere : public CColShape
{
public:
    CColSphere(CColManager* pManager, CElement* pParent, const CVector& vecPosition, float fRadius, bool bIsPartnered = false);
    CElement* Clone(bool* bAddEntity, CResource* pResource) override;

    virtual CSphere GetWorldBoundingSphere();

    eColShapeType GetShapeType() { return COLSHAPE_SPHERE; }

    bool DoHitDetection(const CVector& vecNowPosition);

    float GetRadius() { return m_fRadius; };
    void  SetRadius(float fRadius)
    {
        m_fRadius = fRadius;
        SizeChanged();
    };

protected:
    bool ReadSpecialData(const int iLine) override;

    float m_fRadius;
};
