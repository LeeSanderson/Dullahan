@echo off
echo Dullahan command line tool %~dp0
cd %~dp0

REM Add nant to path
set PATH=%~dp0Packages\NAnt.Portable.0.92;%PATH%