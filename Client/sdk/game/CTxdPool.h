/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "Common.h"

class CTxdPool
{
public:
    virtual std::uint32_t AllocateTextureDictonarySlot(std::uint32_t uiSlotID, std::string& strTxdName) = 0;
    virtual void          RemoveTextureDictonarySlot(std::uint32_t uiTxdID) = 0;
    virtual bool          IsFreeTextureDictonarySlot(std::uint32_t uiTxdID) = 0;

    virtual std::uint16_t GetFreeTextureDictonarySlot() = 0;
};
