/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CThreadCommandQueue.h
 *  PURPOSE:     Thread command queue class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#ifdef WIN32

#include <list>
#include <string>

class CThreadCommandQueue
{
public:
    void Add(const char* szCommand);
    void Process(bool& bRequestedQuit, class CModManagerImpl* pModManager);

private:
    std::list<std::string> m_Commands;
    CCriticalSection       m_Critical;
};

#endif
