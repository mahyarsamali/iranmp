/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/core/CClientCommands.h
 *  PURPOSE:     Command name definitions for client base
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <string_view>

namespace mtasa
{
    using namespace std::string_view_literals;

    static inline auto CMD_ALWAYS_SHOW_TRANSFERBOX = "cvar_always_show_transferbox"sv;
}            // namespace mtasa
