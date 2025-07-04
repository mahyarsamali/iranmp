/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/sdk/game/CHandlingManager.h
 *  PURPOSE:     Vehicle handling manager interface
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <string>
#include "Common.h"

class CBikeHandlingEntry;
class CBoatHandlingEntry;
class CFlyingHandlingEntry;
class CHandlingEntry;

class CHandlingManager
{
public:
    virtual std::unique_ptr<CHandlingEntry>       CreateHandlingData() const noexcept = 0;
    virtual std::unique_ptr<CFlyingHandlingEntry> CreateFlyingHandlingData() const noexcept = 0;
    virtual std::unique_ptr<CBoatHandlingEntry>   CreateBoatHandlingData() const noexcept = 0;
    virtual std::unique_ptr<CBikeHandlingEntry>   CreateBikeHandlingData() const noexcept = 0;

    virtual const CHandlingEntry*       GetOriginalHandlingData(std::uint32_t model) const noexcept = 0;
    virtual const CFlyingHandlingEntry* GetOriginalFlyingHandlingData(std::uint32_t model) const noexcept = 0;
    virtual const CBoatHandlingEntry*   GetOriginalBoatHandlingData(std::uint32_t model) const noexcept = 0;
    virtual const CBikeHandlingEntry*   GetOriginalBikeHandlingData(std::uint32_t model) const noexcept = 0;

    virtual eHandlingProperty GetPropertyEnumFromName(const std::string& name) const noexcept = 0;

    virtual void CheckSuspensionChanges(const CHandlingEntry* const entry) const noexcept = 0;
};
