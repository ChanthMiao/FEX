// SPDX-License-Identifier: MIT
#include "libssl3_defs.h"
#include "common/Host.h"
#include "thunkgen_host_libssl3.inl"

#define LDR_PTR(fn) fexldr_ptr_libssl3_##fn
#define FEXFN_IMPL(fn) fexfn_impl_libssl3_##fn

// Custom type defines
// ...

// Helpers
// ...

// Handle special functions
// ...

EXPORTS(libssl3)