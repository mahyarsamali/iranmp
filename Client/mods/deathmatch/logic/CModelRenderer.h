/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CModelRenderer.h
 *  PURPOSE:     3D models renderer
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#pragma once

class CModelRenderer final
{
public:
    struct SModelToRender final
    {
        CModelInfo* pModelInfo;
        CMatrix matrix;
        float lighting;

        SModelToRender(CModelInfo* pModelInfo, const CMatrix& matrix, float lighting = 0.0f) :
            pModelInfo(pModelInfo),
            matrix(matrix),
            lighting(lighting)
        {
        }
    };

    bool EnqueueModel(CModelInfo* pModelInfo, const CMatrix& matrix, float lighting);

    void Update();

    void Render();

    static void RenderEntity(SModelToRender* entity, float distance);

private:  

    std::vector<SModelToRender> m_Queue;
};
