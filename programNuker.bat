@echo off
setlocal enabledelayedexpansion

set location[0]="C:\ProgramData\ASUS\"
set location[1]="C:\Program Files\ASUS"
set location[2]="C:\Program Files (x86)\ASUS\"
set location[3]="C:\eSupport\"
set location[4]="C:\Windows\ASUS\"


for /l %%i in (0,1,4) do (
    echo Attempting to remove !location[%%i]!...
    if exist !location[%%i]! (
        rmdir /s /q !location[%%i]!
    ) else (
        echo !location[%%i]! does not exist, skipping...
))
