#pragma once

#define VERSION L"0.1"

VOID PrintUsage();
DWORD DoMain();
BOOL chkPriv(HANDLE hTokenToCheck, LPCWSTR pwszPrivilegeToCheck);
BOOL genPipeNm(LPWSTR *ppwszPipeName);
HANDLE createSpooPipe(LPWSTR pwszPipeName);
HANDLE ConnectSpoolNamedPipe(HANDLE hPipe);
HANDLE TriggerNamedPipeConnection(LPWSTR pwszPipeName);
DWORD WINAPI TriggerNamedPipeConnectionThread(LPVOID lpParam);
BOOL GetSystem(HANDLE hPipe);
