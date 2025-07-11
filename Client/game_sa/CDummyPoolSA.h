/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CDummyPoolSA.h
 *  PURPOSE:     Dummy pool class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <game/CDummyPool.h>
#include "CEntitySA.h"
#include "CPoolSAInterface.h"
#include <memory>

constexpr std::size_t MAX_DUMMIES_DEFAULT = 2500;

class CDummyPoolSA final : public CDummyPool
{
public:
    CDummyPoolSA();
    ~CDummyPoolSA() = default;

    void RemoveAllWithBackup() override;
    void RestoreBackup() override;
    void UpdateBuildingLods(const std::uint32_t offset);

private:
    void UpdateBackupLodOffset(const std::uint32_t offest);
    void UpdateLodsOffestInPool(const std::uint32_t offset);

private:
    CPoolSAInterface<CEntitySAInterface>**  m_ppDummyPoolInterface;

    using building_buffer_t = std::uint8_t[sizeof(CEntitySAInterface)];
    using pool_backup_t = std::array<std::pair<bool, building_buffer_t>, MAX_DUMMIES_DEFAULT>;
    std::unique_ptr<pool_backup_t> m_pOriginalElementsBackup;
};
