@echo off
setlocal enabledelayedexpansion

set services[0]=AsusAppService
set services[1]=AsusOptimization
set services[2]=AsusSystemManager
set services[3]=AsusService

for /l %%i in (0,1,3) do (
    sc query !services[%%i]! > NUL
    echo Attempting to delete !services[%%i]!...
    if !ERRORLEVEL! neq 0 (
        echo !services[%%i]! does not exist
    ) else (
        sc delete !services[%%i]!
))
exit
