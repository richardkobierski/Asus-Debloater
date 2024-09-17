@echo off
setlocal enabledelayedexpansion
schtasks /FO LIST | findstr /i "\\ASUS" > %TEMP%\startups.txt

for /f "tokens=2 delims=:" %%i in (%TEMP%\startups.txt) do (
    set unformatted=%%i
    set formatted=!unformatted: =!
    schtasks /delete /tn !formatted! /f > NUL
    if !ERRORLEVEL! neq 0 (
        echo Failed to delete !formatted!
    )
)
