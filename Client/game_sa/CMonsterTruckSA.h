/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CMonsterTruckSA.h
 *  PURPOSE:     Header file for monster truck vehicle entity class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CMonsterTruck.h>
#include "CAutomobileSA.h"

class CMonsterTruckSAInterface : public CAutomobileSAInterface
{
    // fill this
};

class CMonsterTruckSA final : public virtual CMonsterTruck, public virtual CAutomobileSA
{
public:
    CMonsterTruckSA(CMonsterTruckSAInterface* pInterface);

    CMonsterTruckSAInterface* GetMonsterTruckInterface() { return reinterpret_cast<CMonsterTruckSAInterface*>(GetInterface()); }
};
