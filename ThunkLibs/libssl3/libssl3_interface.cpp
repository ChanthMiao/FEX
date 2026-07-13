// SPDX-License-Identifier: MIT
#include <common/GeneratorInterface.h>

#include "libssl3_defs.h"

#ifdef IS_32BIT_THUNK
#error "libssl.so.3 forwarding is 64-bit only!"
#endif

template<auto>
struct fex_gen_config {
  unsigned version = 3;
  const char* library_filename = "libssl";
};

template<typename>
struct fex_gen_type {};

// Function, parameter index, parameter type [optional]
template<auto, int, typename = void>
struct fex_gen_param {};

// Opaque structs
// ...

// C APIs

// openssl/ssl.h
// ...

// TODO: cover more libssl api