/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        CServerIdManager.h
 *  PURPOSE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

class CServerIdManager
{
public:
    virtual ~CServerIdManager() {}
    virtual SString GetConnectionPrivateDirectory(bool bPreviousVer = false) = 0;

    static CServerIdManager* GetSingleton();
};
