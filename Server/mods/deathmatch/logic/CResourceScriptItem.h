/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CResourceScriptItem.h
 *  PURPOSE:     Resource server-side script item class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CResourceFile.h"

class CResourceScriptItem : public CResourceFile
{
public:
    CResourceScriptItem(class CResource* resource, const char* szShortName, const char* szResourceFileName, CXMLAttributes* xmlAttributes);
    ~CResourceScriptItem();

    bool Start();
    bool Stop();

private:
};
