#pragma once

#include <switch.h>

void edznchtInitialize();
void edznchtExit();

Result edznchtAddMemoryFreeze(u64 freezeAddr, u64 freezeValue, u64 valueType);
Result edznchtRemoveMemoryFreeze(u64 freezeAddr);
Result edznchtUpdateMemoryFreeze(u64 freezeAddr, u64 newValue);
Result edznchtGetFrozenMemoryAddresses(u64 *buffer, size_t bufferSize, size_t *addrsRead);
Result edznchtGetFrozenMemoryAddressCount(size_t *frozenAddrCnt);

Result edznchtLoadCheat(char *fileName, char *cheatName);
Result edznchtUnloadCheat(char *fileName, char *cheatName);
Result edznchtActivateCheat(char *fileName, char *cheatName, bool activated);
Result edznchtGetLoadedCheats(bool *buffer, size_t bufferSize, size_t *cheatsRead);
Result edznchtGetLoadedCheatCount(size_t *loadedCheatCnt);

Result pmdmntAtmosphereGetProcessHandle (Handle *out_processHandle);