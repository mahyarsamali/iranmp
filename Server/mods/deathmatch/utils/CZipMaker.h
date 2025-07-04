/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        CZipMaker.h
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/
#pragma once

class CZipMaker
{
public:
    CZipMaker(const SString& strZipPathFilename);
    ~CZipMaker();

    bool IsValid();
    bool Close();
    bool InsertFile(const SString& strSrc, const SString& strDest);
    bool InsertDirectoryTree(const SString& strSrc, const SString& strDest);

protected:
    bool AddFile(const SString& strDest, const std::vector<char>& buffer);

    void* m_uzFile;
};
