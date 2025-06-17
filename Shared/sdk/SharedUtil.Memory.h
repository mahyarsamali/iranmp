/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        SharedUtil.Memory.h
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <stddef.h>

namespace SharedUtil
{
    struct ProcessMemoryStats
    {
        size_t virtualMemorySize;
        size_t residentMemorySize;
        size_t sharedMemorySize;
        size_t privateMemorySize;
    };

    bool TryGetProcessMemoryStats(ProcessMemoryStats& out);
}            // namespace SharedUtil
