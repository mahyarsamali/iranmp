/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        ceflauncher/Main.cpp
 *  PURPOSE:     CEF launcher entry point
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

/*
    IMPORTANT

    If this project changes, a new release build should be copied into
    the Shared\data\launchers directory.

    The .exe in Shared\data\launchers will be used by the installer and updater.

    (set flag.new_cef_exe on the build server to generate new exe)
*/

int _declspec(dllimport) InitCEF();

using HINSTANCE = struct HINSTANCE__*;
using LPSTR = char*;

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdShow, int nCmdShow)
{
    return InitCEF();
}
