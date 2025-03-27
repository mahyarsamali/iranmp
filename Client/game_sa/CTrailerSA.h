/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CTrailerSA.h
 *  PURPOSE:     Header file for trailer vehicle entity class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CTrailer.h>
#include "CAutomobileSA.h"

class CTrailerSAInterface : public CAutomobileSAInterface
{
    // fill this
};

class CTrailerSA final : public virtual CTrailer, public virtual CAutomobileSA
{
public:
    CTrailerSA(CTrailerSAInterface* pInterface);

    CTrailerSAInterface* GetTrailerInterface() { return reinterpret_cast<CTrailerSAInterface*>(GetInterface()); }
};
