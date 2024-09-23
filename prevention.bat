@echo off
setlocal enabledelayedexpansion

set services[0]=AsusAppService
set services[1]=AsusOptimization
set services[2]=AsusSystemManager
set services[3]=AsusService

for /l %%i in (0,1,3) do (
    sc query !services[%%i]! > NUL
    echo Attempting to create dummy service for !services[%%i]!...
    if !ERRORLEVEL! neq 0 (
        sc create !services[%%i]! binpath=. start=disabled
    ) else (
        echo !services[%%i]! exists, skipping...
))

set location[0]=C:\ProgramData
set location[1]=C:\Program Files
set location[2]=C:\Program Files (x86)
set location[3]=C:\Windows

for /l %%i in (0,1,3) do (
    echo Attempting to create dummy files for !location[%%i]!...
    if exist "!location[%%i]!\ASUS\" (
        echo "!location[%%i]!\ASUS\" exists, skipping...
    ) else (
        copy NUL "!location[%%i]!\ASUS"
))
exit
