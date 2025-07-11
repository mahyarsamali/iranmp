/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUISize.h
 *  PURPOSE:     Widget size interface
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CGUISize
{
public:
    CGUISize() {}
    CGUISize(float width, float height) : fWidth(width), fHeight(height) {}

    bool operator==(const CGUISize& other) const;
    bool operator!=(const CGUISize& other) const;

    float fWidth;
    float fHeight;
};
