#ifndef X_SCREENS_H
#define X_SCREENS_H

#include "x_elements.h"
#include "x_core.h"
#include "glyphs.h"

// screen for title on top, info on bottom
static const bagl_element_t bagl_ui_title_screen[] = {
    SCREEN_CLEAR, SCREEN_TITLE_TOP, SCREEN_TITLE_BOT, SCREEN_GLYPH_DOWN};

// screen for title on top info on bottom BOLD
static const bagl_element_t bagl_ui_3info_screen[] = {
    SCREEN_CLEAR,    SCREEN_INFO_TOP, SCREEN_INFO_MID,
    SCREEN_INFO_BOT, SCREEN_GLYPH_UP, SCREEN_GLYPH_DOWN};

// screen for info in the middle, and half text elements above and below (menu
// effect)
static const bagl_element_t bagl_ui_menu_screen[] = {
    SCREEN_CLEAR, SCREEN_BOLD_LINE, SCREEN_GLYPH_UP, SCREEN_GLYPH_DOWN};

// screen for displaying IOTA icon
static const bagl_element_t bagl_ui_iota_screen[] = {
    SCREEN_CLEAR, SCREEN_GLYPH_CONFIRM, SCREEN_GLYPH_IOTA};

// screen for displaying back icon
static const bagl_element_t bagl_ui_back_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_ICON, SCREEN_GLYPH_BACK, SCREEN_GLYPH_CONFIRM,
    SCREEN_GLYPH_UP};

// screen for displaying dash icon
static const bagl_element_t bagl_ui_dash_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_ICON, SCREEN_GLYPH_DASH, SCREEN_GLYPH_CONFIRM,
    SCREEN_GLYPH_UP};

// screen for displaying info icon
static const bagl_element_t bagl_ui_info_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_ICON, SCREEN_GLYPH_INFO, SCREEN_GLYPH_CONFIRM,
    SCREEN_GLYPH_UP};

// screen for displaying load icon
static const bagl_element_t bagl_ui_load_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_ICON, SCREEN_GLYPH_LOAD};

// screen for displaying approve icon
static const bagl_element_t bagl_ui_approve_screen[] = {
    SCREEN_CLEAR,         SCREEN_MSG_ICON, SCREEN_GLYPH_CHECK,
    SCREEN_GLYPH_CONFIRM, SCREEN_GLYPH_UP, SCREEN_GLYPH_DOWN};

// screen for displaying deny icon
static const bagl_element_t bagl_ui_deny_screen[] = {
    SCREEN_CLEAR,         SCREEN_MSG_ICON, SCREEN_GLYPH_CROSS,
    SCREEN_GLYPH_CONFIRM, SCREEN_GLYPH_UP, SCREEN_GLYPH_DOWN};

// screen for displaying up icon
static const bagl_element_t bagl_ui_up_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_TOP_HALF, SCREEN_MSG_MID, SCREEN_GLYPH_UP};

// screen for displaying down icon
static const bagl_element_t bagl_ui_dn_screen[] = {
    SCREEN_CLEAR, SCREEN_MSG_TOP_HALF, SCREEN_MSG_MID, SCREEN_MSG_BOT_HALF,
    SCREEN_GLYPH_DOWN};

// screen for displaying confirm icon
static const bagl_element_t bagl_ui_conf_screen[] = {
    SCREEN_CLEAR, SCREEN_TITLE_TOP, SCREEN_TITLE_BOT, SCREEN_GLYPH_CONFIRM};

// screen for displaying up + down icons
static const bagl_element_t bagl_ui_updn_screen[] = {
    SCREEN_CLEAR,        SCREEN_MSG_TOP_HALF, SCREEN_MSG_MID,
    SCREEN_MSG_BOT_HALF, SCREEN_GLYPH_UP,     SCREEN_GLYPH_DOWN};

// screen for displaying up + confirm icons
static const bagl_element_t bagl_ui_upconf_screen[] = {
    SCREEN_CLEAR,     SCREEN_ADDRESS_1, SCREEN_ADDRESS_2,    SCREEN_ADDRESS_3,
    SCREEN_ADDRESS_4, SCREEN_GLYPH_UP,  SCREEN_GLYPH_CONFIRM};

// screen for displaying down + confirm icons
static const bagl_element_t bagl_ui_dnconf_screen[] = {
    SCREEN_CLEAR,     SCREEN_ADDRESS_1,  SCREEN_ADDRESS_2,    SCREEN_ADDRESS_3,
    SCREEN_ADDRESS_4, SCREEN_GLYPH_DOWN, SCREEN_GLYPH_CONFIRM};

// screen for displaying up + down + confirm icons
static const bagl_element_t bagl_ui_updnconf_screen[] = {
    SCREEN_CLEAR,      SCREEN_ADDRESS_1,    SCREEN_ADDRESS_2,
    SCREEN_ADDRESS_3,  SCREEN_ADDRESS_4,    SCREEN_GLYPH_UP,
    SCREEN_GLYPH_DOWN, SCREEN_GLYPH_CONFIRM};

#endif // X_SCREENS_H
