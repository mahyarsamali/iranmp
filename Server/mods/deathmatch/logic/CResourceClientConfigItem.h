/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResourceClientConfigItem.h
 *  PURPOSE:     Resource client-side (XML) configuration file item class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CGame.h"
#include "CResourceFile.h"
#include <list>

class CResourceClientConfigItem : public CResourceFile
{
public:
    CResourceClientConfigItem(class CResource* resource, const char* szShortName, const char* szResourceFileName, CXMLAttributes* xmlAttributes);
    ~CResourceClientConfigItem();

    bool            Start();
    bool            Stop();
    class CXMLNode* GetRoot() { return m_pXMLRootNode; }

private:
    class CXMLFile* m_pXMLFile;
    CXMLNode*       m_pXMLRootNode;

    bool m_bInvalid;            // it failed to load
};
