/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/HeapTrace.h
 *  PURPOSE:     Heap trace
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

void AddTrack(void* pAddress, size_t size, const char* szFile, int iLine);
void RemoveTrack(void* pAddress);
void DumpUnfreed();
