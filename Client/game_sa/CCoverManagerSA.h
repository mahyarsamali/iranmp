/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CCoverManagerSA.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include "CEntitySA.h"
#include "CPtrNodeDoubleListSA.h"

class CCoverManagerSA
{
public:
    CCoverManagerSA();
    ~CCoverManagerSA() = default;

    void RemoveAllCovers();
    void RemoveCover(CEntitySAInterface* entity);

private:
    void RemoveCoverFromArray(CEntitySAInterface* entity);

private:
    CPtrNodeDoubleListSAInterface<CEntitySAInterface>* m_pCoverList;
};
