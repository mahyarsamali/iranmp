/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

class CClientModelCacheManager
{
public:
    virtual ~CClientModelCacheManager() {}

    // CClientModelCacheManager interface
    virtual void DoPulse() = 0;
    virtual void OnRestreamModel(ushort usModelId) = 0;
    virtual void SetCustomLimits(std::optional<size_t> numVehicles, std::optional<size_t> numPeds) = 0;
};

CClientModelCacheManager* NewClientModelCacheManager();
