/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

//
// For bouncing a key sync packet
//
class CSimKeysyncPacket : public CSimPacket
{
public:
    ZERO_ON_NEW

    CSimKeysyncPacket(ElementID PlayerID, bool bPlayerHasOccupiedVehicle, ushort usVehicleGotModel, uchar ucPlayerGotWeaponType, float fPlayerGotWeaponRange,
                      bool bVehicleHasHydraulics, bool bVehicleIsPlaneOrHeli, CControllerState& sharedControllerState);

    ePacketID     GetPacketID() const { return PACKET_ID_PLAYER_KEYSYNC; };
    unsigned long GetFlags() const { return PACKET_MEDIUM_PRIORITY | PACKET_SEQUENCED; };

    bool Read(NetBitStreamInterface& BitStream);
    bool Write(NetBitStreamInterface& BitStream) const;

    // Set in constructor
    const ElementID   m_PlayerID;
    const bool        m_bPlayerHasOccupiedVehicle;
    const ushort      m_usVehicleGotModel;
    const uchar       m_ucPlayerGotWeaponType;
    const float       m_fPlayerGotWeaponRange;
    const bool        m_bVehicleHasHydraulics;
    const bool        m_bVehicleIsPlaneOrHeli;
    CControllerState& m_sharedControllerState;

    // Set in Read ()
    struct
    {
        float fPlayerRotation;
        float fCameraRotation;

        SKeysyncFlags flags;

        bool   bWeaponCorrect;
        uchar  ucWeaponSlot;            // Only valid if bWeaponCorrect
        ushort usAmmoInClip;            // Only valid if bWeaponCorrect

        float   fAimDirection;            // Only valid if bWeaponCorrect
        CVector vecSniperSource;
        CVector vecTargetting;

        uchar ucDriveByDirection;

        SVehicleTurretSync turretSync;
    } m_Cache;
};
