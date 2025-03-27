/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/

// Jpeg stuff
bool IsJpeg(const void* pData, uint uiDataSize);
bool JpegGetDimensions(const void* pData, uint uiDataSize, uint& uiOutWidth, uint& uiOutHeight);
bool JpegEncode(uint uiWidth, uint uiHeight, uint uiQuality, const void* pData, uint uiDataSize, CBuffer& outBuffer);
bool JpegDecode(const void* pData, uint uiDataSize, CBuffer* pOutBuffer, uint& uiOutWidth, uint& uiOutHeight);

// Png stuff
bool IsPng(const void* pData, uint uiDataSize);
bool PngGetDimensions(const void* pData, uint uiDataSize, uint& uiOutWidth, uint& uiOutHeight);
bool PngEncode(uint uiWidth, uint uiHeight, const void* pData, uint uiDataSize, CBuffer& outBuffer);
bool PngDecode(const void* pData, uint uiDataSize, CBuffer* pOutBuffer, uint& uiOutWidth, uint& uiOutHeight);
