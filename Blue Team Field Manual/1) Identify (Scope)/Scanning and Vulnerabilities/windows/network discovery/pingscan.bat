@echo off
title pingscan
for /L %I in (1,1,254) do ping -w 30 -n 1 192.168.1.%I | find "Reply" >> output.txt
pause
