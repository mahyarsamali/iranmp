/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        StdInc.h
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>

#define SHARED_UTIL_WITH_FAST_HASH_MAP
#include <SharedUtil.h>
#include <MTAPlatform.h>

#ifdef WIN32
//
// Windows
//
    #include <windows.h>
    #include <mmsystem.h>
#endif
