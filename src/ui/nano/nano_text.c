#include <string.h>
#include "iota/addresses.h"
#include "nano_text.h"
#include "nano_types.h"

/* ----------- BUILDING MENU / TEXT ARRAY ------------- */
void get_main_menu(char *msg)
{
    memset(msg, '\0', MENU_MAIN_LEN * TEXT_LEN);

    uint8_t i = 0;

    strncpy(msg + (i++ * TEXT_LEN), "Connect", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "About", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "Exit App", TEXT_LEN);
}

void get_about_menu(char *msg)
{
    memset(msg, '\0', MENU_ABOUT_LEN * TEXT_LEN);

    uint8_t i = 0;

    strncpy(msg + (i++ * TEXT_LEN), "Version", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "More Info", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "Back", TEXT_LEN);
}

void get_more_info_menu(char *msg)
{
    memset(msg, '\0', MENU_MORE_INFO_LEN * TEXT_LEN);

    uint8_t i = 0;

    strncpy(msg + (i++ * TEXT_LEN), "Please visit", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "iota.org/sec", TEXT_LEN);
    strncpy(msg + (i++ * TEXT_LEN), "for more info.", TEXT_LEN);
}

void get_address_menu(char *msg)
{
    // address is 81 characters long + 9 char checksum
    memset(msg, '\0', MENU_ADDR_LEN * TEXT_LEN);

    uint8_t i = 0, j = 0, chunk_sz = 6;

    // 15 chunks of 6 characters
    for (; i < MENU_ADDR_LEN; i++) {
        strncpy(msg + (i * TEXT_LEN), ui_state.addr + (j++ * 6), chunk_sz);
        msg[i * TEXT_LEN + 6] = ' ';

        if (i == MENU_ADDR_LEN - 1)
            break;

        strncpy(msg + (i * TEXT_LEN) + 7, ui_state.addr + (j++ * 6), chunk_sz);
    }
}
