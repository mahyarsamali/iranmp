/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CDirectorySA.h
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

struct DirectoryInfoSA
{
    std::uint32_t m_nOffset;
    std::uint16_t m_nStreamingSize;
    std::uint16_t m_nSizeInArchive;
    char          m_szName[24];
};

class CDirectorySAInterface
{
    public:
        DirectoryInfoSA* GetModelEntry(std::uint16_t modelId);
        bool             SetModelStreamingSize(std::uint16_t modelId, std::uint16_t size);
        std::uint16_t    GetModelStreamingSize(std::uint16_t modelId);

    private:
        DirectoryInfoSA* m_pEntries{};
        std::uint32_t    m_nCapacity{};
        std::uint32_t    m_nNumEntries{};
        bool             m_bOwnsEntries{};
};
