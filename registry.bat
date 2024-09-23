@echo off
setlocal enabledelayedexpansion

set location[0]="HKEY_LOCAL_MACHINE\SOFTWARE\ASUS"
set location[1]="HKEY_CURRENT_USER\Software\ASUS"

for /l %%i in (0,1,1) do (
    echo Attempting to remove !location[%%i]!...
    reg delete !location[%%i]! /f
)
exit
