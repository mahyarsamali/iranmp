/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

//
// For bouncing a ped task packet
//
class CSimPedTaskPacket : public CSimPacket
{
public:
    ZERO_ON_NEW

    CSimPedTaskPacket(ElementID PlayerID);

    ePacketID     GetPacketID() const { return PACKET_ID_PED_TASK; };
    unsigned long GetFlags() const { return PACKET_HIGH_PRIORITY | PACKET_RELIABLE; };

    bool Read(NetBitStreamInterface& BitStream);
    bool Write(NetBitStreamInterface& BitStream) const;

    // Set in constructor
    const ElementID m_PlayerID;

    // Set in Read ()
    struct
    {
        uint uiNumBitsInPacketBody;
        char DataBuffer[56];
    } m_Cache;
};
