/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/C3DMarkers.h
 *  PURPOSE:     3D marker manager interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "Common.h"

class C3DMarker;
class CVector;

class C3DMarkers
{
public:
    virtual C3DMarker* CreateMarker(DWORD Identifier, e3DMarkerType dwType, CVector* vecPosition, float fSize, float fPulseFraction, BYTE r, BYTE g, BYTE b,
                                    BYTE a) = 0;
    virtual C3DMarker* FindFreeMarker() = 0;
    virtual void       ReinitMarkers() = 0;
};
