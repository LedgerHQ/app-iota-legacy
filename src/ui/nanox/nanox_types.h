#ifndef NANOX_TYPES_H
#define NANOX_TYPES_H

#include <stdint.h>
#include "iota/bundle.h"

#define TEXT_LEN 21

#define TX_TYPE_TEXT_LEN 23
#define ABBRV_VAL_TEXT_LEN 9
#define FULL_VAL_TEXT_LEN 24
#define BIP_TEXT_LEN 34

// Address chunks after being broken up
#define CHUNK1 0
#define CHUNK2 31
#define CHUNK3 62
#define CHUNK_CHK 84

#define TX_TYPE_SPLIT 8

// UI STATES
typedef enum {
    STATE_MAIN,
    STATE_SETTINGS,
    STATE_TX,
    STATE_RECV,
    STATE_SIGN,
    STATE_GETTING_ADDR
} UI_STATES_NANOX;

typedef struct UI_TEXT_CTX_NANOX {

    char top_str[TEXT_LEN];
    char mid_str[TEXT_LEN];
    char bot_str[TEXT_LEN];

} UI_TEXT_CTX_NANOX;

typedef struct UI_STATE_CTX_NANOX {

    // tx information
    int64_t val;

    char tx_type[TX_TYPE_TEXT_LEN]; // Output/Input[]/Change[]:

    char abbrv_val[ABBRV_VAL_TEXT_LEN]; // 1.566 Ki
    char full_val[FULL_VAL_TEXT_LEN];   // 1,566,091 i

    char addr[94];

    char bip32_path[BIP_TEXT_LEN];

    uint8_t state;
    uint8_t menu_idx;

} UI_STATE_CTX_NANOX;

extern UI_STATE_CTX_NANOX nanox_ui_state;
extern UI_TEXT_CTX_NANOX nanox_ui_text;

#endif // NANOX_TYPES_H
