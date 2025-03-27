/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CObjectRespawner.h
 *  PURPOSE:     Header for object respawner class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CObjectRespawner
{
public:
    CObjectRespawner();
    ~CObjectRespawner() { DoRespawnAll(); };

    void Respawn(CClientObject* pObject);
    void DoRespawnAll();

    bool IsBeingRespawned(CClientObject* pObject);
    void Unreference(CClientObject* pObject);

private:
    std::vector<CClientObject*> m_List;
};
