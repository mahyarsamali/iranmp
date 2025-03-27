/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CObjectSync.h
 *  PURPOSE:     Header for object sync class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#ifdef WITH_OBJECT_SYNC

#include "CPlayerManager.h"
#include "CObjectManager.h"
#include "packets/CObjectSyncPacket.h"

class CObjectSync
{
public:
    CObjectSync(CPlayerManager* pPlayerManager, CObjectManager* pObjectManager);

    void DoPulse();
    bool ProcessPacket(CPacket& Packet);

    void OverrideSyncer(CObject* pObject, CPlayer* pPlayer, bool bPersist = false);

    void SetSyncerAsPersistent(bool bPersist) { m_bSyncPersist = bPersist; };
    bool IsSyncerPersistent() { return m_bSyncPersist; };

private:
    void     Update();
    void     UpdateObject(CObject* pObject);
    void     FindSyncer(CObject* pObject);
    CPlayer* FindPlayerCloseToObject(CObject* pObject, float fMaxDistance);

    void StartSync(CPlayer* pPlayer, CObject* pObject);
    void StopSync(CObject* pObject);

    void Packet_ObjectSync(CObjectSyncPacket& Packet);

    CPlayerManager* m_pPlayerManager;
    CObjectManager* m_pObjectManager;

    CElapsedTime m_UpdateTimer;

    bool m_bSyncPersist = false;
};

#endif
