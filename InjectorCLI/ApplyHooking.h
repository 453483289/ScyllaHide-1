#pragma once
#include <windows.h>
#include <Scylla/Hook.h>

void ApplyPEBPatch(HANDLE hProcess, DWORD flags);
bool ApplyHook(HOOK_DLL_DATA * hdd, HANDLE hProcess, BYTE * dllMemory, DWORD_PTR imageBase);
void RestoreHooks(HOOK_DLL_DATA * hdd, HANDLE hProcess);
