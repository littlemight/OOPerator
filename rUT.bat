@echo off
setlocal enabledelayedexpansion
set var=
for %%x in (%*) do (
   set var=!var!%%x,
)
cd bin/test
utest.exe --order lex -s %var%
endlocal