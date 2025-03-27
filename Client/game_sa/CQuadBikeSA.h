/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CQuadBikeSA.h
 *  PURPOSE:     Header file for quad bike vehicle entity class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CQuadBike.h>
#include "CAutomobileSA.h"

class CQuadBikeSAInterface : public CAutomobileSAInterface
{
    // fill this
};

class CQuadBikeSA final : public virtual CQuadBike, public virtual CAutomobileSA
{
public:
    CQuadBikeSA(CQuadBikeSAInterface* pInterface);

    CQuadBikeSAInterface* GetQuadBikeInterface() { return reinterpret_cast<CQuadBikeSAInterface*>(GetInterface()); }
};
