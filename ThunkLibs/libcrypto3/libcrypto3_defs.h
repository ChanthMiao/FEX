// SPDX-License-Identifier: MIT
#pragma once

#include <openssl/ssl.h>
#include <openssl/aes.h>
#include <openssl/kdf.h>
#include <openssl/ec.h>
#include <openssl/ecdsa.h>
#include <openssl/engine.h>
#include <openssl/encoder.h>
#include <openssl/decoder.h>
#include <openssl/store.h>
#include <openssl/ocsp.h>
#include <openssl/cmp.h>
#include <openssl/pkcs7.h>
#include <openssl/pkcs12.h>
#include <openssl/blowfish.h>
#include <openssl/cast.h>
#include <openssl/cmac.h>
#include <openssl/ess.h>
#include <openssl/idea.h>
#include <openssl/thread.h>

#ifdef __cplusplus
extern "C" {
#endif

// FEX does not allow more than one callback in function params.
// Use customed arrary to handle it.
// ...

#ifdef __cplusplus
}
#endif