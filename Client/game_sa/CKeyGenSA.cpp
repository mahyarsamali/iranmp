/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CKeyGenSA.cpp
 *  PURPOSE:     Game key generator
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CKeyGenSA.h"

unsigned int CKeyGenSA::GetKey(const char* szString, int iLength)
{
    unsigned int uiReturn;
    DWORD        dwFunc = FUNC_CKeyGen_GetKey_len;
    _asm
    {
        push    iLength
        push    szString
        call    dwFunc
        add     esp, 0x8
        mov     uiReturn, eax
    }
    return uiReturn;
}

unsigned int CKeyGenSA::GetKey(const char* szString)
{
    unsigned int uiReturn;
    DWORD        dwFunc = FUNC_CKeyGen_GetKey;
    _asm
    {
        push    szString
        call    dwFunc
        add     esp, 0x4
        mov     uiReturn, eax
    }
    return uiReturn;
}

unsigned int CKeyGenSA::GetUppercaseKey(const char* szString)
{
    unsigned int uiReturn;
    DWORD        dwFunc = FUNC_CKeyGen_GetUppercaseKey;
    _asm
    {
        push    szString
        call    dwFunc
        add     esp, 0x4
        mov     uiReturn, eax
    }
    return uiReturn;
}

unsigned int CKeyGenSA::AppendStringToKey(unsigned int uiKey, const char* szString)
{
    unsigned int uiReturn;
    DWORD        dwFunc = FUNC_CKeyGen_AppendStringToKey;
    _asm
    {
        push    szString
        push    uiKey
        call    dwFunc
        add     esp, 0x8
        mov     uiReturn, eax
    }
    return uiReturn;
}
