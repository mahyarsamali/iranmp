/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/core/AjaxResourceHandler.h
 *  PURPOSE:     Interface for CEF Handler for Ajax Requests with delayed results
 *
 *  IRan Multi Player is available from https://ir-mp.ir/ 
 *
 *****************************************************************************/
#pragma once

class CAjaxResourceHandlerInterface
{
public:
    virtual std::vector<SString>& GetGetData() = 0;
    virtual std::vector<SString>& GetPostData() = 0;
    virtual void                  SetResponse(const SString& data) = 0;
};
