@echo off
REM basic nbtstat scan:
nbtstat -A 127.0.0.1
pause
REM cached NetBIOS info on localhost:
nbtstat -c
pause
REM script loop scan
for /L %I in (1,1,254) do nbstat -An 192.168.1.%I
