/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPedModelInfo.h
 *  PURPOSE:     Ped model information interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

typedef unsigned long AssocGroupId;

class CPedModelInfo
{
public:
    virtual void SetMotionAnimGroup(AssocGroupId animGroup) = 0;
};
