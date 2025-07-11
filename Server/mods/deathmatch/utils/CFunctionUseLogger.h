/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/utils/CFunctionUseLogger.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

struct lua_State;

struct SFuncCallRecord
{
    SString    strFunctionName;
    SString    strResourceName;
    uint       uiCallCount;
    SString    strExampleArgs;
    CTickCount timeFirstUsed;
};

//
// class CFunctionUseLogger
//
class CFunctionUseLogger
{
public:
    ZERO_ON_NEW

    CFunctionUseLogger(const SString& strLogFilename);
    ~CFunctionUseLogger();

    void Pulse();
    void OnFunctionUse(lua_State* luaVM, const char* szFunctionName, const char* szArgs, uint uiArgsSize);

protected:
    void MaybeFlush(bool bForce = false);

    SString                            m_strLogFilename;
    std::map<SString, SFuncCallRecord> m_FuncCallRecordMap;
};
