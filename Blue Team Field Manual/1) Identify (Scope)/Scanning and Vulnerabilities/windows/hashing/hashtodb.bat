REM hash all files on F:\ into a database file.
@echo off
fciv.exe f:\ -r -md5 -xml output.xml
