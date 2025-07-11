/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/xml/CXMLAttribute.h
 *  PURPOSE:     XML attribute interface
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CXMLCommon.h"
#include <string>

class CXMLAttribute : public CXMLCommon
{
public:
    virtual ~CXMLAttribute(){};

    virtual const std::string  GetName() const = 0;
    virtual const std::string& GetValue() const = 0;

    virtual void SetValue(const char* szValue) = 0;
    virtual void SetValue(bool bValue) = 0;
    virtual void SetValue(int iValue) = 0;
    virtual void SetValue(unsigned int uiValue) = 0;
    virtual void SetValue(float fValue) = 0;

    virtual void DeleteWrapper() = 0;
};
