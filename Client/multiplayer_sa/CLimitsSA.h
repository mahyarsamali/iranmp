/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        multiplayer_sa/CLimitsSA.h
 *  PURPOSE:     Multiplayer limits class
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

#include <multiplayer/CLimits.h>

class CLimitsSA : public CLimits
{
public:
    ~CLimitsSA() {}

    int  GetIPLFiles() const;
    bool SetIPLFiles(int);

    int  GetCollisionFiles() const;
    bool SetCollisionFiles(int);

    int  GetQuadtreeNodes() const;
    bool SetQuadtreeNodes(int);

    int  GetVehicleStructs() const;
    bool SetVehicleStructs(int);

    int  GetPolygons() const;
    bool SetPolygons(int);

    int  GetStreamingMemory() const;
    bool SetStreamingMemory(int);

    int  GetStreamingVehicles() const;
    bool SetStreamingVehicles(int);
};
