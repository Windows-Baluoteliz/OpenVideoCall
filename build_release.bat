@echo off
title qmake and nmake build prompt
set VCINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build
set QTDIR=C:\Qt\5.12.2\msvc2017
set PATH=%VCINSTALLDIR%\bin;%QTDIR%\bin;C:\Program Files\7-Zip;%PATH%
::shadow build
call "%VCINSTALLDIR%\vcvarsall.bat" x86
qmake OpenVideoCall.pro "CONFIG+=release" "CONFIG+=qml_release"
nmake
cd release
windeployqt OpenVideoCall.exe