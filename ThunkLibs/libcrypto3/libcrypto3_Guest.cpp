// SPDX-License-Identifier: MIT

#include "libcrypto3_defs.h"
#include "common/Guest.h"
#include "thunkgen_guest_libcrypto3.inl"

template<typename FuncTypePtr>
static uint64_t CryptoAllocateHostTrampolineForGuestFunc(FuncTypePtr callback) {
  return (uint64_t)(uintptr_t)(void*)AllocateHostTrampolineForGuestFunction(callback);
}

extern "C" {
    // Handle special functions.
    // ...
}

LOAD_LIB(libcrypto3)