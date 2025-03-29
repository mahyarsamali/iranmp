/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CElementGroup.h
 *  PURPOSE:     Element group class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

class CElementGroup;

#pragma once

#include "CElement.h"

class CElementGroup
{
private:
    CFastList<CElement*> m_elements;

public:
    ~CElementGroup();
    void         Add(CElement* element);
    void         Remove(CElement* element);
    unsigned int GetCount();

    CFastList<CElement*>::const_iterator IterBegin() { return m_elements.begin(); }
    CFastList<CElement*>::const_iterator IterEnd() { return m_elements.end(); }
};
