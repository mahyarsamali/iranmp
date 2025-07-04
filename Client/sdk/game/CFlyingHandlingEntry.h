/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CFlyingHandlingEntry.h
 *  PURPOSE:     Vehicle handling entry interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CFlyingHandlingEntry
{
public:
    // Destructor
    virtual ~CFlyingHandlingEntry(){};

    // Use this to copy data from an another handling class to this
    virtual void Assign(const CFlyingHandlingEntry* pData) = 0;
};
