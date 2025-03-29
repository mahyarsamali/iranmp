/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CPtrNodeSingleLinkPool.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CPtrNodeSingleLinkPool
{
public:
    virtual bool        Resize(std::size_t size) = 0;
    virtual void        ResetCapacity() = 0;
    virtual std::size_t GetCapacity() const = 0;
    virtual std::size_t GetUsedSize() const = 0;
};
