/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        game_sa/CPtrNodeDoubleListSA.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

template<class T>
class CPtrNodeDoubleLink
{
public:
    T* pItem;
    CPtrNodeDoubleLink<T>* pNext;
    CPtrNodeDoubleLink<T>* pPrev;
};

template <class T>
class CPtrNodeDoubleListSAInterface
{
public:
    CPtrNodeDoubleLink<T>* m_pNode;

    void RemoveItem(T* pItem)
    {
        using CPtrListDoubleLinkSAInterface_RemoveItem = void(__thiscall*)(CPtrNodeDoubleListSAInterface<T> * pLinkList, void* item);
        ((CPtrListDoubleLinkSAInterface_RemoveItem)0x5336B0)(this, pItem);
    };

    void RemoveAllItems()
    {
        while (m_pNode)
        {
            RemoveItem(m_pNode->pItem);
        }
    };
};
