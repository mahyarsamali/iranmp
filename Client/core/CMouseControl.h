/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CMouseControl.h
 *  PURPOSE:     Simulates the 'Fly with mouse' and 'Steer with mouse' controls
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include <game/CPad.h>

#pragma once

enum MouseControlVehicleType
{
    TYPE_CAR = 0,
    TYPE_BIKE,
    TYPE_PLANE,
    TYPE_NONE,
};

class CMouseControl
{
public:
    CMouseControl();
    ~CMouseControl();

    void Reset();
    bool ProcessMouseMove(UINT uMsg, WPARAM wParam, LPARAM lParam);
    void ApplyAxes(CControllerState& cs);

protected:
    short m_usLeftStickX;
    short m_usLeftStickY;
};
