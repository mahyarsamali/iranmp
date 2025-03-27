/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CIplStore.h
 *  PURPOSE:     Game IPL store interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CIplStore
{
public:
    virtual void SetDynamicIplStreamingEnabled(bool state) = 0;
    virtual void SetDynamicIplStreamingEnabled(bool state, std::function<bool(CIplSAInterface* ipl)> filter) = 0;
};
