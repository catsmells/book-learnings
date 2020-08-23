@echo off
title network-discovery
net view /all
net view \\<HOSTNAME>
pause
