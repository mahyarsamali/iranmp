/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CVehicleNames.h
 *  PURPOSE:     GTA vehicle name definitions class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

class CVehicleNames
{
public:
    static bool IsValidModel(unsigned long ulModel);

    static const char*  GetVehicleName(unsigned long ulModel);
    static unsigned int GetVehicleModel(const char* szName);

    static const char* GetVehicleTypeName(unsigned long ulModel);
};
