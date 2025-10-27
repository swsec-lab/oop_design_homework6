@echo off
setlocal enabledelayedexpansion

set i=1

g++ main.cpp bird.cpp -o main > nul
main > Test\output.txt
fc Test\output.txt Test\expected.txt > nul
if errorlevel 1 (
    echo Test : FAIL
) else (
    echo Test : PASS
)