@echo off
REM compiler.cmd(VC++6.0�AVS2002-2003-2005-2008-2010-2012�Ή���)

:VS110
if not exist "%VS110COMNTOOLS%vsvars32.bat" goto VS100
call "%VS110COMNTOOLS%vsvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
echo 
goto :eof

:VS100
echo VitualStudio2012��������܂���ł����B
if not exist "%VS100COMNTOOLS%vsvars32.bat" goto VS90
call "%VS100COMNTOOLS%vsvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:VS90
echo VitualStudio2010��������܂���ł����B
if not exist "%VS90COMNTOOLS%vsvars32.bat" goto VC80
call "%VS90COMNTOOLS%vsvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:VS80
echo VitualStudio2008��������܂���ł����B
if not exist "%VS80COMNTOOLS%vsvars32.bat" goto VC71
call "%VS80COMNTOOLS%vsvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:VS71
echo VitualStudio2005��������܂���ł����B
if not exist "%VS71COMNTOOLS%vsvars32.bat" goto VC70
call "%VS71COMNTOOLS%vsvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:VC70
echo VitualStudio2003��������܂���ł����B
if not exist "%VS70COMNTOOLS%vcvars32.bat" goto VC98
call "%VS70COMNTOOLS%vcvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:VC98
echo VitualStudio2002��������܂���ł����B
if not exist "C:\Program Files (x86)\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT" goto missing
call "%VS60COMNTOOLS%vcvars32.bat"
CL %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof

:missing
echo VitualC++6.0��������܂���ł����B
echo Error: �R���p�C�����C���X�g�[������Ă��邩�m�F���ĉ������B
pause
goto :eof

REM "C:\Program Files\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT"
