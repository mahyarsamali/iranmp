/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CGraphStats.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

#define TIMING_GRAPH(name) \
    GetGraphStats()->AddTimingPoint( name );

//
// CGraphStatsInterface for measuring and displaying a timing graph
//
class CGraphStatsInterface
{
public:
    virtual ~CGraphStatsInterface() {}

    virtual void Draw() = 0;
    virtual void SetEnabled(bool bEnabled) = 0;
    virtual bool IsEnabled() = 0;
    virtual void AddTimingPoint(const char* szName) = 0;
    virtual void RemoveTimingPoint(const char* szName) = 0;
};

CGraphStatsInterface* GetGraphStats();
