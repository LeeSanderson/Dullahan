@echo off
REM - setup environment using vcvarsall.bat (passed as argument 1 to this script) and the build architecture (x86 or x86_amd64 - passed as 2nd arg)
call %1 %2
perl Configure %3 no-asm --prefix=%4
REM - call ms\do_win64a or ms\do_ms.bat depending on x86
IF "%2" == "x86" (
    echo "Creating 32-bit makefile"
    call ms\do_ms.bat
) ELSE (
    echo "Creating 64-bit makefile"
	call ms\do_win64a
)

nmake -f ms\nt.mak install