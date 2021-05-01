@echo off
if not exist build mkdir build
pushd build
cl -nologo -Zi ..\src\main.c
popd