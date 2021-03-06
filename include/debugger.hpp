#pragma once

#include <switch.h>

class Debugger {
  
public:
  Debugger(bool dmntPresent);
  ~Debugger();

  Result attachToProcess();
  Result detachFromProcess();
  Result continueProcess();
  Result breakProcess();

  u64 getRunningApplicationTID();
  u64 getRunningApplicationPID();

  u64 peekMemory(u64 address);
  void pokeMemory(size_t varSize, u64 address, u64 value);
  MemoryInfo queryMemory(u64 address);
  void readMemory(void *buffer, size_t bufferSize, u64 address);
  void writeMemory(void *buffer, size_t bufferSize, u64 address);

private:
  Handle m_debugHandle;
  u64 m_tid = 0, m_pid = 0;
  bool m_dmntPresent;
};