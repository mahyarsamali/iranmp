/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  Iran Multi Player is available from https://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <game/CTxdPool.h>
#include "CPoolSAInterface.h"
#include "CBuildingSA.h"
#include "CTextureDictonarySA.h"

class CTxdPoolSA final : public CTxdPool
{
public:
    CTxdPoolSA();
    ~CTxdPoolSA() = default;

    std::uint32_t AllocateTextureDictonarySlot(std::uint32_t uiSlotID, std::string& strTxdName);
    void          RemoveTextureDictonarySlot(std::uint32_t uiTxdId);
    bool          IsFreeTextureDictonarySlot(std::uint32_t uiTxdId);

    std::uint16_t GetFreeTextureDictonarySlot();

private:
    CPoolSAInterface<CTextureDictonarySAInterface>** m_ppTxdPoolInterface;
};
