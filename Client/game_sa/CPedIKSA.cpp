/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CPedIKSA.cpp
 *  PURPOSE:     Ped entity inverse kinematics for animations
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CPedIKSA.h"

RwV3d& CPedIKSAInterface::XaxisIK = *(RwV3d*)0x8D232C;
RwV3d& CPedIKSAInterface::YaxisIK = *(RwV3d*)0x8D2338;
RwV3d& CPedIKSAInterface::ZaxisIK = *(RwV3d*)0x8D2344;

void CPedIKSA::RotateTorso(void* bone, LimbOrientation* orientation, bool flag)
{
    auto CPedIKSA_RotateTorso = (void(__thiscall*)(CPedIKSAInterface*, void*, LimbOrientation*, bool))0x5FDDB0;
    CPedIKSA_RotateTorso(internalInterface, bone, orientation, flag);
}
