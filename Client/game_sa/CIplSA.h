/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CIplSA.h
 *  PURPOSE:     Header file for game IPL class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <cstdint>
#include "CRect.h"

class CIplSAInterface
{
public:
    CRect   rect;
    char    name[16];
    uint16_t unk;
    uint16_t minBuildId;
    uint16_t maxBuildId;
    uint16_t minBummyId;
    uint16_t maxDummyId;
    uint16_t relatedIpl;
    uint8_t  interior;
    uint8_t  unk2;
    uint8_t  bLoadReq;
    uint8_t  bDisabledStreaming;
    uint8_t  unk3;
    uint8_t  unk4;
    uint8_t  unk5;
    uint8_t  unk6;
};
static_assert(sizeof(CIplSAInterface) == 0x34, "Wrong CIplSAInterface size");
