/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CVehicleColorManager.h
 *  PURPOSE:     Vehicle entity color manager class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <list>

class CVehicleColors
{
public:
    void         AddColor(const CVehicleColor& colVehicle) { m_Colors.push_back(colVehicle); };
    unsigned int CountColors() { return static_cast<unsigned int>(m_Colors.size()); };
    void         RemoveAllColors() { m_Colors.clear(); };

    CVehicleColor GetRandomColor();

private:
    std::list<CVehicleColor> m_Colors;
};

class CVehicleColorManager
{
public:
    bool Load(const char* szFilename);
    bool Generate(const char* szFilename);
    void Reset();

    void          AddColor(unsigned short usModel, const CVehicleColor& colVehicle);
    CVehicleColor GetRandomColor(unsigned short usModel);

private:
    SFixedArray<CVehicleColors, 212> m_Colors;
};
