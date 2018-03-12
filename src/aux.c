#include "aux.h"
#include <stdint.h>
#include "main.h"

#include "iota/iota_types.h"
#include "iota/kerl.h"
#include "iota/conversion.h"


bool validate_chars(char *chars, unsigned int num_chars, bool zero_padding)
{
    const size_t len = strnlen(chars, num_chars);
    for (unsigned int i = 0; i < len; i++) {
        const char c = chars[i];
        if (c != '9' && (c < 'A' || c > 'Z')) {
            return false;
        }
    }

    if (zero_padding) {
        for (unsigned int i = len; i < num_chars; i++) {
            chars[i] = '9';
        }
    }

    return true;
}

void get_seed(const unsigned char *entropy, unsigned int n,
              unsigned char *seed_bytes)
{
#ifndef DEBUG_SEED
    // at least one chunk of entropy required
    if (n < 48) {
        THROW(INVALID_PARAMETER);
    }

    cx_sha3_t sha;
    kerl_initialize(&sha);

    for (unsigned int i = 0; i < n / 48; i++) {
        kerl_absorb_chunk(&sha, entropy + i * 48);
    }
    // TODO: should we use standard padding rules?
    if (n % 48 != 0) {
        kerl_absorb_chunk(&sha, entropy + (n - 48));
    }

    kerl_squeeze_final_chunk(&sha, seed_bytes);
#else  // DEBUG_SEED
    UNUSED(entropy);
    UNUSED(n);

    chars_to_bytes(DEBUG_SEED, seed_bytes, 81);
#endif // DEBUG_SEED
}