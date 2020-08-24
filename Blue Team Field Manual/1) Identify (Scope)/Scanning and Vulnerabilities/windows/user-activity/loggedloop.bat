REM script loop scan
@echo off
for /L %i in (1,1,254) do psloggedon \\192.168.1.%i >> output.txt
