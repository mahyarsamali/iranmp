/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CCamSA.cpp
 *  PURPOSE:     Camera entity
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CCamSA.h"
#include "CGameSA.h"

extern CGameSA* pGame;

CEntity* CCamSA::GetTargetEntity() const
{
    CEntitySAInterface* pInterface = m_pInterface->CamTargetEntity;
    if (pInterface)
    {
        CPools* pPools = pGame->GetPools();
        return pPools->GetEntity((DWORD*)pInterface);
    }
    return nullptr;
}

void CCamSA::SetTargetEntity(CEntity* pEntity)
{
    m_pInterface->CamTargetEntity = pEntity->GetInterface();
}

void CCamSA::GetDirection(float& fHorizontal, float& fVertical)
{
    fHorizontal = m_pInterface->m_fHorizontalAngle;
    fVertical = m_pInterface->m_fVerticalAngle;
}

void CCamSA::SetDirection(float fHorizontal, float fVertical)
{
    // Calculation @ sub 0x50F970
    m_pInterface->m_fHorizontalAngle = fHorizontal;
    m_pInterface->m_fVerticalAngle = fVertical;
}
