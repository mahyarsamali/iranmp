/*****************************************************************************
 *
 *  PROJECT:     Iran Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/xml/CXMLFile.h
 *  PURPOSE:     XML file interface
 *
 *  Iran Multi Player is available from http://www.ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include "CXMLCommon.h"
#include "CXMLErrorCodes.h"

#include <vector>
#include <string>

class CXMLNode;

class CXMLFile : public CXMLCommon
{
public:
    virtual ~CXMLFile(){};

    virtual const char* GetFilename() = 0;
    virtual void        SetFilename(const char* szFilename) = 0;

    virtual bool Parse(std::vector<char>* pOutFileContents = NULL) = 0;
    virtual bool Write() = 0;
    virtual void Clear() = 0;
    virtual void Reset() = 0;

    virtual CXMLNode* CreateRootNode(const std::string& strTagName) = 0;
    virtual CXMLNode* GetRootNode() = 0;

    virtual CXMLErrorCodes::Code GetLastError(std::string& strOut) = 0;
    virtual void                 ResetLastError() = 0;

    virtual bool IsValid() = 0;
};
