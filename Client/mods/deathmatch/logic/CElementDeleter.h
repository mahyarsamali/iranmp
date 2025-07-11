/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CElementDeleter.h
 *  PURPOSE:     Header for element deleter class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <memory>
#include <list>

class CElementDeleter
{
public:
    CElementDeleter();
    ~CElementDeleter() { DoDeleteAll(); };

    void Delete(class CClientEntity* pElement);
    void DeleteRecursive(class CClientEntity* pElement);
    void DoDeleteAll();
    bool IsBeingDeleted(class CClientEntity* pElement);
    void Unreference(class CClientEntity* pElement);
    void CleanUpForVM(CLuaMain* pLuaMain);

private:
    void DoDeleteAllSmartPointers();

    CMappedList<class CClientEntity*> m_List;
    bool                              m_bAllowUnreference;
    CMappedList<class CClientEntity*> m_ListRawSmartPointer;
};
