/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/game_sa/CHandlingManagerSA.h
 *  PURPOSE:     Header file for vehicle handling manager class
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <game/CHandlingManager.h>
#include "CHandlingEntrySA.h"
#include "CFlyingHandlingEntrySA.h"
#include "CBoatHandlingEntrySA.h"
#include "CBikeHandlingEntrySA.h"

class CHandlingManagerSA : public CHandlingManager
{
public:
    CHandlingManagerSA();
    ~CHandlingManagerSA();

    std::unique_ptr<CHandlingEntry>       CreateHandlingData() const noexcept;
    std::unique_ptr<CFlyingHandlingEntry> CreateFlyingHandlingData() const noexcept;
    std::unique_ptr<CBoatHandlingEntry>   CreateBoatHandlingData() const noexcept;
    std::unique_ptr<CBikeHandlingEntry>   CreateBikeHandlingData() const noexcept;

    const CHandlingEntry*       GetOriginalHandlingData(std::uint32_t model) const noexcept;
    const CFlyingHandlingEntry* GetOriginalFlyingHandlingData(std::uint32_t model) const noexcept;
    const CBoatHandlingEntry*   GetOriginalBoatHandlingData(std::uint32_t model) const noexcept;
    const CBikeHandlingEntry*   GetOriginalBikeHandlingData(std::uint32_t model) const noexcept;

    eHandlingProperty GetPropertyEnumFromName(const std::string& name) const noexcept;

    void CheckSuspensionChanges(const CHandlingEntry* const entry) const noexcept;

    static eHandlingTypes GetHandlingID(std::uint32_t model) noexcept;

private:
    void InitializeDefaultHandlings() noexcept;
};
