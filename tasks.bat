@echo off
setlocal enabledelayedexpansion

tasklist /FO LIST | findstr /i "ASUS" > %TEMP%\processes.txt

for /f "tokens=2 delims=:" %%i in (%TEMP%\processes.txt) do (
    set unformatted=%%i
    set formatted=!unformatted: =!
    taskkill /f /IM !formatted!
)
echo Done killing tasks
del %TEMP%\processes.txt
exit
