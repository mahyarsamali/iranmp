/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include <optional>

struct SModelCacheStats;

class CModelCacheManager
{
public:
    virtual ~CModelCacheManager() {}

    // CModelCacheManager interface
    virtual void DoPulse() = 0;
    virtual void GetStats(SModelCacheStats& outStats) = 0;
    virtual bool UnloadModel(ushort usModelId) = 0;
    virtual void OnRestreamModel(ushort usModelId) = 0;
    virtual void OnClientClose() = 0;
    virtual void UpdatePedModelCaching(const std::map<ushort, float>& newNeedCacheList) = 0;
    virtual void UpdateVehicleModelCaching(const std::map<ushort, float>& newNeedCacheList) = 0;
    virtual void SetCustomLimits(std::optional<size_t> numVehicles, std::optional<size_t> numPeds) = 0;
};

CModelCacheManager* NewModelCacheManager();
