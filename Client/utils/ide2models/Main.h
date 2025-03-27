/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        utils/ide2models/Main.h
 *  PURPOSE:     IDE to models converter
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <cstdio>
using namespace std;

int  main(int iArgumentCount, char* szArgs[]);
int  Convert(FILE* pInput, FILE* pOutput);
bool Parse(const char* szLine, FILE* pOutput);
