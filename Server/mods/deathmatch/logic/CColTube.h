/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CColTube.h
 *  PURPOSE:     Tube-shaped collision entity class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CColShape.h"

class CColTube : public CColShape
{
public:
    CColTube(CColManager* pManager, CElement* pParent, const CVector& vecPosition, float fRadius, float fHeight);
    CElement* Clone(bool* bAddEntity, CResource* pResource) override;

    virtual CSphere GetWorldBoundingSphere();

    eColShapeType GetShapeType() { return COLSHAPE_TUBE; }
    bool          DoHitDetection(const CVector& vecNowPosition);

    float GetRadius() { return m_fRadius; };
    void  SetRadius(float fRadius)
    {
        m_fRadius = fRadius;
        SizeChanged();
    };
    float GetHeight() { return m_fHeight; };
    void  SetHeight(float fHeight)
    {
        m_fHeight = fHeight;
        SizeChanged();
    };

protected:
    bool ReadSpecialData(const int iLine) override;

    float m_fRadius;
    float m_fHeight;
};
