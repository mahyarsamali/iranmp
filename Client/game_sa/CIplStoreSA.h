/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CIplStore.h
 *  PURPOSE:     IPL store class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CIplSA.h"
#include "CPoolsSA.h"
#include <game/CIplStore.h>
#include <functional>

class CIplStoreSA : public CIplStore
{
public:
    CIplStoreSA();
    ~CIplStoreSA() = default;

    void SetDynamicIplStreamingEnabled(bool state);
    void SetDynamicIplStreamingEnabled(bool state, std::function<bool(CIplSAInterface *ipl)> filter);

private:
    void UnloadAndDisableStreaming(int iplId);
    void EnableStreaming(int iplId);

private:
    CPoolSAInterface<CIplSAInterface>** m_ppIplPoolInterface;

    bool m_isStreamingEnabled;
};
