/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResourceModelStreamer.h
 *  PURPOSE:     Resource model manager
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <unordered_map>

class CResourceModelStreamer
{
public:
    CResourceModelStreamer() = default;
    ~CResourceModelStreamer() = default;

    bool RequestModel(std::uint16_t modelId, bool addRef = false, bool blocking = false);
    bool ReleaseModel(std::uint16_t modelId, bool removeRef = false);

    void ReleaseAll();
    void FullyReleaseModel(std::uint16_t modelId);

private:
    std::unordered_map<std::uint16_t, std::uint16_t> m_requestedModels;
};
