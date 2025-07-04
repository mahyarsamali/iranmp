/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "SimHeaders.h"
#include "CPickupManager.h"
#include "CWeaponStatManager.h"

CSimBulletsyncPacket::CSimBulletsyncPacket(ElementID PlayerID) : m_PlayerID(PlayerID)
{
    m_Cache.ucOrderCounter = 0;
    m_Cache.fDamage = 0;
    m_Cache.ucHitZone = 0;
    m_Cache.DamagedPlayerID = INVALID_ELEMENT_ID;
}

//
// Should do the same this as what CBulletsyncPacket::Read() does
//
bool CSimBulletsyncPacket::Read(NetBitStreamInterface& BitStream)
{
    char cWeaponType = 0;
    if (!BitStream.Read(cWeaponType) || !CWeaponStatManager::HasWeaponBulletSync(cWeaponType))
        return false;
    m_Cache.weaponType = (eWeaponType)cWeaponType;

    if (!BitStream.Read((char*)&m_Cache.vecStart, sizeof(CVector)) || !BitStream.Read((char*)&m_Cache.vecEnd, sizeof(CVector)))
        return false;

    if (!m_Cache.vecStart.IsValid() || !m_Cache.vecEnd.IsValid())
        return false;

    // Duplicate packet protection
    if (!BitStream.Read(m_Cache.ucOrderCounter))
        return false;

    if (BitStream.ReadBit())
    {
        BitStream.Read(m_Cache.fDamage);
        BitStream.Read(m_Cache.ucHitZone);
        BitStream.Read(m_Cache.DamagedPlayerID);
    }

    return true;
}

//
// Should do the same this as what CBulletsyncPacket::Write() does
//
bool CSimBulletsyncPacket::Write(NetBitStreamInterface& BitStream) const
{
    // Write the source player id
    BitStream.Write(m_PlayerID);

    // Write the bulletsync data
    BitStream.Write((char)m_Cache.weaponType);
    BitStream.Write((const char*)&m_Cache.vecStart, sizeof(CVector));
    BitStream.Write((const char*)&m_Cache.vecEnd, sizeof(CVector));

    // Duplicate packet protection
    BitStream.Write(m_Cache.ucOrderCounter);

    if (m_Cache.fDamage > 0 && m_Cache.DamagedPlayerID != INVALID_ELEMENT_ID)
    {
        BitStream.WriteBit(true);
        BitStream.Write(m_Cache.fDamage);
        BitStream.Write(m_Cache.ucHitZone);
        BitStream.Write(m_Cache.DamagedPlayerID);
    }
    else
    {
        BitStream.WriteBit(false);
    }

    return true;
}
