/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/
#pragma once

struct CTickRateSettings
{
public:
    CTickRateSettings()
    {
        iPureSync = 100;
        iLightSync = 1500;
        iCamSync = 500;
        iPedSync = 400;
        iPedFarSync = 2000;
        iUnoccupiedVehicle = 400;
        iObjectSync = 500;
        iKeySyncRotation = 100;
        iKeySyncAnalogMove = 100;
        iNearListUpdate = 100;
        iPedSyncerDistance = 100;
        iUnoccupiedVehicleSyncerDistance = 130;
        iVehicleContactSyncRadius = 30;
        playerTeleportAlert = 100;
    }

    int iPureSync;
    int iLightSync;
    int iCamSync;
    int iPedSync;
    int iPedFarSync;
    int iUnoccupiedVehicle;
    int iObjectSync;
    int iKeySyncRotation;
    int iKeySyncAnalogMove;
    int iNearListUpdate;
    int iPedSyncerDistance;
    int iUnoccupiedVehicleSyncerDistance;
    int iVehicleContactSyncRadius;
    int playerTeleportAlert;
};

extern CTickRateSettings g_TickRateSettings;
