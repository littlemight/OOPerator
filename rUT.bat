@echo off
setlocal enabledelayedexpansion
set var=
for %%x in (%*) do (
   set var=!var!%%x,
)
bin/test/utest --order lex -s %var%
endlocal