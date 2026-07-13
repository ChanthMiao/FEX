// SPDX-License-Identifier: MIT
#include "libcrypto3_defs.h"
#include "common/Host.h"
#include "thunkgen_host_libcrypto3.inl"

#define LDR_PTR(fn) fexldr_ptr_libcrypto3_##fn
#define FEXFN_IMPL(fn) fexfn_impl_libcrypto3_##fn

// Custom type defines

typedef struct x64_va_list_s {
  unsigned int gp_offset;
  unsigned int fp_offset;
  void* overflow_arg_area;
  void* reg_save_area;
} x64_va_list[1];

// Helpers

template<typename FuncTypePtr>
static void CryptoFinalizeHostTrampolineForGuestFunc(void (*callback)()) {
  FinalizeHostTrampolineForGuestFunction((FuncTypePtr)callback);
}

// Handle special functions
// ...

EXPORTS(libcrypto3)