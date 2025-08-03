#pragma once
#include "clr.h"

void CreatePowerShellConsole();
void ExecutePowerShellScript(LPWSTR pwszScript);

BOOL DisablePowerShellEtwProvider(mscorlib::_AppDomain* pAppDomain);
void PatchAllTheThings(mscorlib::_AppDomain* pAppDomain);

BOOL CreateInitialRunspaceConfiguration(mscorlib::_AppDomain* pAppDomain, VARIANT* pvtRunspaceConfiguration);
BOOL StartConsoleShell(mscorlib::_AppDomain* pAppDomain, VARIANT vtRunspaceConfiguration, LPCWSTR pwszBanner, LPCWSTR pwszHelp, LPCWSTR* ppwszArguments, DWORD dwArgumentCount);

BOOL PowerShellCreate(mscorlib::_AppDomain* pAppDomain, VARIANT* pvtPowerShellInstance);
BOOL PowerShellDispose(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance);
BOOL PowerShellAddScript(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, LPWSTR pwszScript);
BOOL PowerShellAddCommand(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, LPCWSTR pwszCommand);
BOOL PowerShellInvoke(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, VARIANT* pvtInvokeResult);
BOOL PowerShellGetStream(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, LPCWSTR pwszStreamName, VARIANT* pvtStream);
BOOL PowerShellHadErrors(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, PBOOL pbHadErrors);

void PrintPowerShellInvokeResult(mscorlib::_AppDomain* pAppDomain, VARIANT vtInvokeResult, wchar_t** ppOutput);
void PrintPowerShellInvokeInformation(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, wchar_t** ppOutput);
void PrintPowerShellInvokeErrors(mscorlib::_AppDomain* pAppDomain, VARIANT vtPowerShellInstance, wchar_t** ppOutput);
void PrintInformationRecord(mscorlib::_AppDomain* pAppDomain, VARIANT vtInformationRecord, wchar_t** ppOutput);
void PrintErrorRecord(mscorlib::_AppDomain* pAppDomain, VARIANT vtErrorRecord, wchar_t** ppOutput);
void PrintPowerShellInformationStream(mscorlib::_AppDomain* pAppDomain, VARIANT vtInformationStream, wchar_t** ppOutput);
void PrintPowerShellErrorStream(mscorlib::_AppDomain* pAppDomain, VARIANT vtErrorStream, wchar_t** ppOutput);
void PrintPowerShellInvocationStateInfoReason(mscorlib::_AppDomain* pAppDomain, VARIANT vtReason, wchar_t** ppOutput);
void SetConsoleTextColor(WORD wColor, PWORD pwOldColor);