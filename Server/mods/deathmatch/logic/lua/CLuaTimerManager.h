/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/lua/CLuaTimerManager.h
 *  PURPOSE:     Lua timer manager class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

class CLuaTimerManager;

#pragma once

#include "LuaCommon.h"
#include "lua/CLuaTimer.h"
#include <list>

class CLuaTimerManager
{
public:
    CLuaTimerManager()
    {
        m_pPendingDelete = NULL;
        m_pProcessingTimer = NULL;
    }
    ~CLuaTimerManager() { RemoveAllTimers(); };

    void DoPulse(CLuaMain* pLuaMain);

    CLuaTimer* GetTimerFromScriptID(unsigned int uiScriptID);

    CLuaTimer*    AddTimer(const CLuaFunctionRef& iLuaFunction, CTickCount llTimeDelay, unsigned int uiRepeats, const CLuaArguments& Arguments);
    void          RemoveTimer(CLuaTimer* pLuaTimer);
    void          RemoveAllTimers();
    unsigned long GetTimerCount() const { return m_TimerList.size(); }

    void SetTimerPaused(CLuaTimer* timer, bool paused);
    void ResetTimer(CLuaTimer* pLuaTimer);

    CFastList<CLuaTimer*>::const_iterator IterBegin() { return m_TimerList.begin(); }
    CFastList<CLuaTimer*>::const_iterator IterEnd() { return m_TimerList.end(); }

private:
    CFastList<CLuaTimer*>  m_TimerList;
    std::deque<CLuaTimer*> m_ProcessQueue;
    CLuaTimer*             m_pPendingDelete;
    CLuaTimer*             m_pProcessingTimer;
};
