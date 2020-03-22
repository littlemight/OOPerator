@echo off
setlocal enableextensions enabledelayedexpansion
set var=
FOR /R "." %%g IN (*.cpp) DO ( 
   REM COMPILE EVERY FILE EXCEPT Calculator.cpp and main.cpp
   (Echo "%%g" | FIND /I "Calculator.cpp" 1>NUL) || (Echo "%%g" | FIND /I "main.cpp" 1>NUL) || (
      set var=!var!  %%g
   )
)
echo Compiling all unit tests...
mkdir bin
cd bin
mkdir test
cd ..
g++ -std=c++0x !var! -o bin/test/utest
endlocal
echo Compilation done! && pause