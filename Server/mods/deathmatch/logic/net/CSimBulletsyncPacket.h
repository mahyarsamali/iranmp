/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

//
// For bouncing a bullet sync packet
//
class CSimBulletsyncPacket : public CSimPacket
{
public:
    ZERO_ON_NEW

    CSimBulletsyncPacket(ElementID PlayerID);

    ePacketID     GetPacketID() const { return PACKET_ID_PLAYER_BULLETSYNC; };
    unsigned long GetFlags() const { return PACKET_MEDIUM_PRIORITY | PACKET_RELIABLE; };

    bool Read(NetBitStreamInterface& BitStream);
    bool Write(NetBitStreamInterface& BitStream) const;

    // Set in constructor
    const ElementID m_PlayerID;

    // Set in Read ()
    struct
    {
        eWeaponType weaponType;
        CVector     vecStart;
        CVector     vecEnd;
        uchar       ucOrderCounter;
        float       fDamage;
        uchar       ucHitZone;
        ElementID   DamagedPlayerID;
    } m_Cache;
};
