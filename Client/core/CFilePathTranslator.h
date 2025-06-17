/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/core/CFilePathTranslator.h
 *  PURPOSE:     Header file for file path translator class
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <string>

class CFilePathTranslator
{
public:
    CFilePathTranslator();
    ~CFilePathTranslator();

    void SetCurrentWorkingDirectory(const std::string& PathBasedOffModuleRoot);
    void UnSetCurrentWorkingDirectory();
    void SetModPath(const std::string& PathBasedOffWorkingDirectory);

    void GetModPath(std::string& ModPathOut);
    void GetCurrentWorkingDirectory(std::string& WorkingDirectoryOut);

    bool GetFileFromModPath(const std::string& FileToGet, std::string& TranslatedFilePathOut);
    bool GetFileFromWorkingDirectory(const std::string& FileToGet, std::string& TranslatedFilePathOut);

    void GetGTARootDirectory(std::string& ModuleRootDirOut);
    void GetMTASARootDirectory(std::string& InstallRootDirOut);

private:
    std::string m_ModPath;
    std::string m_WorkingDirectory;
};
