@echo off
setlocal enabledelayedexpansion
set var=
for %%x in (%*) do (
   set var=!var!%%x,
)
utest --order lex -s %var%
endlocal