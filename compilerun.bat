@echo off

rem Compile the C program
gcc hello.c -o hello
if errorlevel 1 (
    exit /b 1
)

rem Run the executable
hello.exe