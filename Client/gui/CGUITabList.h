/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        gui/CGUITabList.h
 *  PURPOSE:     Tab-able Elements list class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#include <list>

typedef std::list<CGUITabListItem*>::const_iterator CGUITabIterator;

class CGUITabList
{
public:
    CGUITabList(){};
    ~CGUITabList(){};

    void AddItem(CGUITabListItem* pItem) { m_Items.push_back(pItem); };
    void RemoveItem(CGUITabListItem* pItem) { m_Items.remove(pItem); };

    void SelectNext(CGUITabListItem* pBase);

private:
    std::list<CGUITabListItem*> m_Items;
};
