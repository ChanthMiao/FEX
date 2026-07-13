// SPDX-License-Identifier: MIT
#include <common/GeneratorInterface.h>

#include "libcrypto3_defs.h"

#ifdef IS_32BIT_THUNK
#error "libcrypto.so.3 forwarding is 64-bit only!"
#endif

template<auto>
struct fex_gen_config {
  unsigned version = 3;
  const char* library_filename = "libcrypto";
};

template<typename>
struct fex_gen_type {};

// Function, parameter index, parameter type [optional]
template<auto, int, typename = void>
struct fex_gen_param {};

// Opaque structs
// ...

// C APIs

// openssl/crypto.h
// ...

// TODO: cover more libcrypto api