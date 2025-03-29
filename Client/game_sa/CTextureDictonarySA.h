/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CTextureDictonarySA.h
 *  PURPOSE:     Header file for game texture dictonary class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/RenderWare.h>

class CTextureDictonarySAInterface
{
public:
    RwTexDictionary* rwTexDictonary;
    unsigned short   usUsagesCount;
    unsigned short   usParentIndex;
    unsigned int     hash;
};
