/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

class CSimPacket;
class CSimPlayerManager;

#include "SharedUtil.Thread.h"
#include "CNetBufferWatchDog.h"
#include "CNetBuffer.h"
#include "CSimPlayer.h"
#include "CSimPlayerManager.h"
#include "CSimPlayerPuresyncPacket.h"
#include "CSimVehiclePuresyncPacket.h"
#include "CSimKeysyncPacket.h"
#include "CSimBulletsyncPacket.h"
#include "CSimPedTaskPacket.h"

extern CNetServer* g_pRealNetServer;
