/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CAESoundManager.h
 *  PURPOSE:     Game audio engine manager interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

class CAESoundManager
{
public:
    virtual void CancelSoundsInBankSlot(uint uiGroup, uint uiIndex) = 0;
};
