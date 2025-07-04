/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CStatsSA.cpp
 *  PURPOSE:     Game statistics
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CStatsSA.h"

float CStatsSA::GetStatValue(unsigned short usIndex)
{
    DWORD dwFunc = FUNC_GetStatValue;
    float fReturn = 0.0f;
    DWORD dwStatIndex = usIndex;

    _asm
    {
        push    dwStatIndex
        call    dwFunc
        add     esp, 4
        fstp    fReturn
    }
    return fReturn;
}

void CStatsSA::ModifyStat(unsigned short usIndex, float fAmmount)
{
    DWORD dwFunc = FUNC_ModifyStat;
    DWORD dwStatIndex = usIndex;

    _asm
    {
        push    fAmmount
        push    dwStatIndex
        call    dwFunc
        add     esp, 8
    }
}

void CStatsSA::SetStatValue(unsigned short usIndex, float fAmmount)
{
    DWORD dwFunc = FUNC_SetStatValue;
    DWORD dwStatIndex = usIndex;

    _asm
    {
        push    fAmmount
        push    dwStatIndex
        call    dwFunc
        add     esp, 8
    }
}

unsigned short CStatsSA::GetSkillStatIndex(eWeaponType type)
{
    int   weaponType = (int)type;
    int   iIndex;
    DWORD dwFunc = FUNC_CWeaponInfo_GetSkillStatIndex;
    _asm
    {
        push    weaponType
        call    dwFunc
        add     esp, 0x4
        mov     iIndex, eax
    }
    return (unsigned short)iIndex;
}
