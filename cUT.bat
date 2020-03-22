@echo off
setlocal enabledelayedexpansion
set var=
FOR /R "." %%g IN (*.cpp) DO ( 
   REM COMPILE EVERY FILE EXCEPT Calculator.cpp and main.cpp
   (Echo "%%g" | FIND /I "Calculator.cpp" 1>NUL) || (Echo "%%g" | FIND /I "main.cpp" 1>NUL) || (
      set var=!var!  %%g
   )
)
echo Compiling all unit tests... && g++ -std=c++0x !var! -o bin/test/utest && echo Compilation done! && pause
endlocal