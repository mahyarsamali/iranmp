/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CWanted.h
 *  PURPOSE:     Wanted level interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CWanted
{
public:
    virtual void SetWantedLevel(DWORD dwWantedLevel) = 0;
    virtual char GetWantedLevel() = 0;
    virtual void SetWantedLevelNoFlash(DWORD dwWantedLevel) = 0;
};
