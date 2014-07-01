@echo off
REM - setup environment using vcvarsall.bat (passed as argument 1 to this script) and the build architecture (x86 or x86_amd64 - passed as 2nd arg)
call %1 %2
call preconfig.cmd