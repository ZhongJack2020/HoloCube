/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --font /home/kisonhe/Downloads/NotoSansMonoCJKsc-Regular.otf --symbols LanguageFirmware: %s固件版本 %s --lcd --size 16 --bpp 4 --lv-include lvgl.h --format lvgl -o src/gui/fonts/font_ui.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef FONT_UI
#define FONT_UI 1
#endif

#if FONT_UI

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0025 "%" */
    0x0, 0xc2, 0xb3, 0x9b, 0xdb, 0x90, 0x82, 0x1,
    0xf8, 0x8c, 0xc2, 0x1, 0xe3, 0x8b, 0x5b, 0xfe,
    0xe2, 0x2c, 0xb1, 0x0, 0x71, 0xc4, 0xd3, 0x80,
    0x78, 0x55, 0x40, 0xa6, 0x40, 0x7a, 0xe5, 0xae,
    0x1, 0x1b, 0xc0, 0xfc, 0x20, 0x80, 0x70, 0x83,
    0x88, 0x7, 0xfc, 0x51, 0xe, 0xf8, 0x41, 0x0,
    0xfc, 0xa6, 0x49, 0x86, 0x9, 0x88, 0x7a, 0x11,
    0x23, 0xf0, 0x82, 0x1, 0xfe, 0x39, 0x92, 0x9f,
    0x6c, 0x94, 0xd7, 0xf0, 0xfc, 0xa0, 0x80, 0x7f,
    0xf0, 0x45, 0x22, 0xf7, 0x69, 0xfd, 0x1e, 0xd3,
    0xbd, 0xda, 0xe1, 0x4, 0x3, 0xff, 0x82, 0x71,
    0x23, 0xf4, 0x53, 0x47, 0xdb, 0xc6, 0xb3, 0x23,
    0x0, 0xff, 0x1b, 0xc0, 0xfc, 0xa3, 0x61, 0x3e,
    0x18, 0x1e, 0x21, 0x1a, 0x80, 0x7e, 0x28, 0x87,
    0x7c, 0xa0, 0x7, 0xff, 0x24, 0x9e, 0x7, 0xe5,
    0x0, 0x33, 0x99, 0x3e, 0x18, 0x16, 0x21, 0x1a,
    0x80, 0x78, 0x9e, 0xa5, 0x0, 0x3c, 0x53, 0x25,
    0x4e, 0xe7, 0xa2, 0x26, 0x46, 0x1, 0x0,

    /* U+003A ":" */
    0x0, 0x13, 0x5f, 0x72, 0xd8, 0x80, 0x33, 0x7a,
    0x88, 0x97, 0xd8, 0x3, 0x24, 0xfe, 0xeb, 0xe5,
    0x0, 0x3c, 0x24, 0x41, 0x0, 0xff, 0xea, 0x8,
    0xe0, 0xf, 0x1c, 0xff, 0x73, 0xe4, 0xc0, 0x30,
    0xf2, 0x88, 0x97, 0xc4, 0x0,

    /* U+0046 "F" */
    0x6, 0xbf, 0xff, 0xfe, 0x16, 0xb9, 0x0, 0x78,
    0x9a, 0xae, 0xff, 0xb9, 0x48, 0x3, 0xc3, 0xe8,
    0x9f, 0xe3, 0x20, 0xf, 0xfe, 0x88, 0x98, 0x7,
    0xff, 0x18, 0xe3, 0x7f, 0xfe, 0xd8, 0x30, 0xf,
    0xc4, 0xd5, 0x99, 0xf7, 0x51, 0x80, 0x7e, 0x1f,
    0x43, 0x3f, 0xc4, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xe0, 0x80,

    /* U+004C "L" */
    0x16, 0xbf, 0xf5, 0xb0, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xfe, 0xd6, 0xf4, 0x4f,
    0xf8, 0x84, 0x3, 0xc4, 0xd5, 0x77, 0xfd, 0x54,
    0x20,

    /* U+0061 "a" */
    0x0, 0xc2, 0x6d, 0x37, 0x9b, 0xdf, 0xdb, 0x92,
    0xc4, 0x1, 0xf8, 0xe7, 0xec, 0xcd, 0x53, 0x57,
    0x8, 0x2d, 0x3f, 0x4, 0x1, 0xe3, 0x8c, 0xda,
    0x86, 0x44, 0x9a, 0x6d, 0x0, 0x96, 0x88, 0x3,
    0xfe, 0x12, 0x45, 0x67, 0xc7, 0x0, 0x10, 0xb0,
    0x7, 0x85, 0x22, 0xfb, 0xfe, 0xce, 0x2, 0x61,
    0x0, 0xfc, 0x4f, 0xb6, 0xc1, 0x1f, 0xb7, 0x30,
    0xf5, 0xa6, 0x1, 0xf9, 0xf0, 0xc1, 0x75, 0xc4,
    0x3, 0x87, 0xc0, 0x3f, 0x84, 0x84, 0x12, 0xa1,
    0x51, 0xb, 0x17, 0xcc, 0x40, 0x1f, 0x92, 0x29,
    0xcc, 0x9a, 0xa9, 0x3c, 0x1d, 0xf6, 0xc0, 0x1e,

    /* U+0065 "e" */
    0x0, 0xf1, 0x2c, 0x5e, 0xf7, 0xf6, 0xe5, 0x31,
    0x0, 0x7f, 0x24, 0xe5, 0x30, 0xd5, 0x33, 0x61,
    0x5a, 0x72, 0x50, 0x3, 0x89, 0xe5, 0x81, 0x6a,
    0x8e, 0x86, 0x65, 0x98, 0x60, 0x6e, 0x50, 0xc,
    0x98, 0x40, 0x9e, 0x80, 0x1f, 0x2f, 0x90, 0x39,
    0x10, 0x0, 0x42, 0xc0, 0x5, 0xae, 0xef, 0xe9,
    0x30, 0x3f, 0x10, 0x1, 0xb, 0x0, 0x12, 0x73,
    0xff, 0xee, 0xed, 0xf2, 0x60, 0x12, 0x19, 0x2,
    0xfb, 0x8, 0xff, 0xf0, 0x40, 0x31, 0x44, 0xb0,
    0x35, 0x5c, 0x2a, 0x19, 0x91, 0x5d, 0xca, 0x40,
    0x1f, 0x24, 0xfd, 0xb0, 0xa4, 0x56, 0x62, 0xa2,
    0xf4, 0xc4, 0x2,

    /* U+0067 "g" */
    0x0, 0xc2, 0x6f, 0x59, 0xdd, 0x7f, 0xff, 0x74,
    0x18, 0x4, 0xb7, 0x90, 0xe9, 0xbd, 0xcf, 0xc7,
    0x20, 0x26, 0xbd, 0xc9, 0x30, 0x1, 0x6b, 0x80,
    0xa6, 0x18, 0x4, 0x78, 0x82, 0x45, 0x19, 0x8,
    0x4, 0x56, 0xa4, 0x2f, 0xca, 0x42, 0x4b, 0xce,
    0x22, 0x25, 0x10, 0xf, 0x1d, 0x50, 0x81, 0xe3,
    0x3f, 0x2d, 0x92, 0x36, 0x4c, 0x3, 0xe4, 0xb8,
    0x6, 0xed, 0xee, 0xd9, 0x4e, 0x60, 0x1f, 0x84,
    0xd4, 0x7, 0xc4, 0x3, 0xff, 0x8a, 0x24, 0xc0,
    0x75, 0x6a, 0x86, 0x78, 0x88, 0x20, 0x1f, 0xcb,
    0xca, 0x24, 0xd5, 0x79, 0x9b, 0x75, 0xdf, 0xd6,
    0xe6, 0x1, 0x24, 0xd2, 0x3d, 0xff, 0xfd, 0xdb,
    0x8, 0x29, 0x56, 0x60, 0x24, 0xa2, 0x4, 0x68,
    0x42, 0x2, 0x23, 0x54, 0xd6, 0x2, 0x5b, 0x30,
    0x16, 0xea, 0x60, 0xba, 0xce, 0xfe, 0xfd, 0x9d,
    0x3a, 0xbc, 0x83, 0x0,

    /* U+0069 "i" */
    0x0, 0x13, 0x5f, 0x72, 0xd8, 0x80, 0x3e, 0x33,
    0x0, 0x7c, 0x4d, 0x7b, 0xab, 0x62, 0x0, 0xe6,
    0xbf, 0xf5, 0xb0, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0x98,

    /* U+006D "m" */
    0x5, 0xbf, 0xb7, 0x59, 0xce, 0xe6, 0x39, 0x99,
    0xef, 0x7b, 0x69, 0x44, 0x3, 0x92, 0x78, 0x69,
    0x88, 0xe3, 0x63, 0xb6, 0x94, 0xd6, 0x58, 0x80,
    0x30, 0xbf, 0xc3, 0x55, 0x98, 0x2f, 0x4b, 0x3e,
    0xa8, 0x17, 0x88, 0x7, 0xb, 0x80, 0xc, 0x2,
    0x11, 0x0, 0x46, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xf3, 0x0,

    /* U+006E "n" */
    0x0, 0x24, 0xf7, 0xca, 0xa, 0x3d, 0x67, 0x76,
    0xc8, 0x41, 0x0, 0xfe, 0x7a, 0xc8, 0xdd, 0x4d,
    0xc3, 0x99, 0x9e, 0xa4, 0xc0, 0x3f, 0x96, 0x36,
    0x9d, 0x54, 0xd1, 0x46, 0x2, 0x6a, 0x1, 0xf8,
    0xcc, 0xc2, 0x1, 0xc2, 0x4e, 0x0, 0x71, 0x10,
    0x7, 0xff, 0x18, 0x40, 0x3f, 0xff, 0xe0, 0x1f,
    0xfc, 0xf0,

    /* U+0072 "r" */
    0x3, 0x8e, 0xfa, 0x40, 0x13, 0x7a, 0xde, 0xff,
    0x76, 0x39, 0x80, 0x78, 0x71, 0xeb, 0xac, 0xea,
    0xea, 0x91, 0x28, 0x60, 0x1e, 0x47, 0xb3, 0xec,
    0x97, 0x55, 0x99, 0x4c, 0x3, 0xf3, 0x44, 0xc,
    0x3, 0xff, 0x88, 0x22, 0x70, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0x28,

    /* U+0073 "s" */
    0x0, 0xe2, 0x59, 0xbd, 0xef, 0xf7, 0x6e, 0x5c,
    0xb1, 0x88, 0x7, 0x8e, 0x3e, 0x99, 0xd6, 0xed,
    0x9b, 0x34, 0x66, 0xf6, 0x0, 0xf9, 0x4c, 0x81,
    0x2a, 0x15, 0xc, 0xc8, 0xd1, 0x52, 0xa2, 0x1,
    0xe7, 0xd4, 0x14, 0x8c, 0x96, 0x42, 0x0, 0xff,
    0xe0, 0x8b, 0x5f, 0xdc, 0x2a, 0xa2, 0xf7, 0xb2,
    0x9d, 0x4, 0x3, 0xfc, 0x28, 0xd3, 0x9d, 0xcc,
    0x86, 0x78, 0xbc, 0x72, 0x0, 0xff, 0xe1, 0x9,
    0xb5, 0xd9, 0x0, 0xb1, 0x0, 0x32, 0x4e, 0xf5,
    0xc3, 0x21, 0x9c, 0x8d, 0x14, 0x80, 0x78, 0x80,
    0x19, 0x23, 0xa0, 0x8e, 0xa7, 0x73, 0x15, 0x6a,
    0xcf, 0x7c, 0xe4, 0x0,

    /* U+0075 "u" */
    0x2, 0x7d, 0xff, 0x52, 0x0, 0x7c, 0x93, 0xfe,
    0xd8, 0x20, 0xf, 0xff, 0xf8, 0x7, 0xff, 0x48,
    0x40, 0x3f, 0xf8, 0xa6, 0x22, 0x0, 0x9, 0x80,
    0x78, 0x4d, 0x40, 0x3f, 0xa, 0xa8, 0x41, 0x2a,
    0x55, 0x67, 0xac, 0xa2, 0x10, 0xf, 0xc7, 0x16,
    0xc6, 0x4d, 0x71, 0x3b, 0xae, 0xc8, 0x50, 0xf,
    0x0,

    /* U+0077 "w" */
    0x0, 0x1c, 0xf7, 0xdb, 0x0, 0x61, 0x35, 0x51,
    0x88, 0x6, 0x5b, 0xfe, 0x93, 0x0, 0xc5, 0xea,
    0xd, 0xc4, 0x1, 0x3c, 0x55, 0x21, 0xc0, 0x22,
    0x23, 0x1, 0x79, 0x0, 0x61, 0x22, 0x9, 0x11,
    0xc0, 0x7, 0xce, 0x44, 0x7e, 0x30, 0x3, 0x69,
    0xa, 0x90, 0x80, 0x72, 0xf9, 0x3, 0x10, 0x83,
    0x18, 0x22, 0x0, 0xd8, 0x4, 0x98, 0xb, 0x98,
    0x3, 0xc2, 0x4a, 0x5, 0xc4, 0x4d, 0x66, 0x66,
    0x19, 0x9a, 0x44, 0xf2, 0x6, 0x32, 0x0, 0xf9,
    0x78, 0xc4, 0x95, 0xc8, 0x9, 0xdc, 0x40, 0x4e,
    0xc4, 0x25, 0xac, 0x1, 0xf8, 0x4d, 0x81, 0xbf,
    0x19, 0x9a, 0x44, 0xd7, 0x76, 0x61, 0xc1, 0xc8,
    0x80, 0x1f, 0xcd, 0xa6, 0x4e, 0xe0, 0x36, 0x0,
    0x31, 0x3, 0xb8, 0x8a, 0x70, 0xf, 0xf1, 0x11,
    0x80, 0x44, 0xfc, 0x60, 0x3, 0xd6, 0x11, 0x9b,
    0x48, 0x3, 0x80,

    /* U+4EF6 "件" */
    0x0, 0xff, 0xf7, 0xa5, 0x77, 0x20, 0xc0, 0x22,
    0x45, 0x31, 0x0, 0x96, 0xbf, 0x60, 0xc0, 0x3f,
    0xf9, 0x64, 0xf0, 0xa7, 0x34, 0x60, 0x5, 0x8b,
    0xb8, 0x80, 0x3f, 0xfa, 0x67, 0x72, 0x69, 0xc,
    0x40, 0x3, 0xc4, 0x5, 0xe1, 0x22, 0x8c, 0x40,
    0xc5, 0x88, 0xbf, 0x84, 0x3, 0xfc, 0x2d, 0xc,
    0x2b, 0xea, 0x20, 0x3, 0xb4, 0x10, 0x49, 0xdd,
    0xd2, 0x80, 0x2d, 0x5b, 0xbf, 0xbe, 0x4c, 0x3,
    0xe1, 0x5a, 0x94, 0x1, 0x37, 0x0, 0x96, 0x58,
    0xda, 0xff, 0xfd, 0x4a, 0x2, 0xf9, 0xff, 0xfb,
    0x60, 0xc0, 0x38, 0x9f, 0x69, 0x48, 0x80, 0x1c,
    0x4f, 0x2a, 0x53, 0x68, 0x1, 0xfc, 0x60, 0x1f,
    0xfc, 0x53, 0xaa, 0x12, 0xd4, 0xa8, 0x80, 0x62,
    0x59, 0xaf, 0x62, 0x0, 0xff, 0xe8, 0x1c, 0x67,
    0xd2, 0x38, 0x7, 0xe6, 0x60, 0x11, 0x9f, 0xe2,
    0x10, 0x32, 0x53, 0x3f, 0xf8, 0x80, 0x38, 0x44,
    0x1, 0xfc, 0x75, 0xdb, 0xbf, 0xf4, 0x20, 0xa,
    0xce, 0xef, 0xfb, 0xa8, 0xc0, 0x3f, 0xf8, 0x67,
    0x1b, 0xdd, 0xff, 0x52, 0x81, 0x3e, 0x77, 0x7f,
    0xb6, 0xc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff,
    0x0, 0xff, 0xef, 0x80,

    /* U+56FA "固" */
    0x5, 0xaf, 0xff, 0xfe, 0xcf, 0x49, 0x80, 0x78,
    0x9a, 0xfb, 0xbf, 0xfa, 0x52, 0x80, 0x1f, 0xf0,
    0xb0, 0x8f, 0xff, 0x0, 0xde, 0x2d, 0xcc, 0x47,
    0xff, 0x80, 0x62, 0x1, 0xff, 0xcd, 0x6f, 0x74,
    0xf6, 0x0, 0xff, 0xe7, 0x93, 0xe7, 0xff, 0xf5,
    0xb0, 0x89, 0xaf, 0xff, 0xfb, 0x60, 0xc0, 0x3f,
    0xf8, 0x64, 0xf9, 0xff, 0xfd, 0x8e, 0x22, 0x6c,
    0xff, 0xfe, 0xd8, 0x30, 0xf, 0xff, 0x98, 0xb6,
    0x7f, 0xdd, 0xd6, 0xb0, 0x1, 0xf7, 0xba, 0xff,
    0xba, 0x4c, 0x3, 0xff, 0x9a, 0xb7, 0xdd, 0xff,
    0xc0, 0xc7, 0x20, 0xf, 0xff, 0xea, 0xdf, 0x77,
    0xff, 0x3, 0x1c, 0x80, 0x3f, 0xf9, 0x82, 0xd9,
    0xff, 0x77, 0x7f, 0xf0, 0x3f, 0xee, 0x93, 0x0,
    0xff, 0xe1, 0x99, 0x2a, 0xff, 0xf4, 0xf5, 0x80,
    0x3f, 0xc2, 0x95, 0x33, 0xff, 0xd2, 0x52, 0x0,
    0xf0,

    /* U+672C "本" */
    0x0, 0xff, 0xe4, 0xa5, 0x7f, 0xa5, 0x0, 0x3f,
    0xff, 0xe0, 0x1f, 0xfc, 0x31, 0x0, 0x8c, 0x40,
    0x3f, 0xf9, 0x69, 0x3f, 0xff, 0xfc, 0x5a, 0x50,
    0x2, 0xd7, 0xff, 0xff, 0x16, 0x90, 0x3, 0x24,
    0x6e, 0xff, 0xd9, 0x8, 0x2, 0xac, 0x80, 0x4,
    0x54, 0x1, 0x59, 0xdd, 0xff, 0xe0, 0x5a, 0x0,
    0x70, 0x91, 0x7f, 0x81, 0x29, 0xe, 0x63, 0x4,
    0x0, 0x5d, 0xe, 0x6b, 0xa8, 0x64, 0x5f, 0xe1,
    0x0, 0xff, 0xe1, 0x8b, 0x4c, 0x1a, 0xc3, 0x90,
    0x80, 0x71, 0xcc, 0x22, 0x22, 0xd4, 0x40, 0x3f,
    0xf9, 0x44, 0xd5, 0x2a, 0xab, 0xb2, 0x0, 0x7f,
    0xa, 0xd4, 0xaa, 0xae, 0x94, 0x40, 0x3f, 0xf8,
    0xa2, 0x93, 0xf2, 0xaa, 0xbb, 0x28, 0x80, 0x7f,
    0xf0, 0x5, 0xa6, 0x4a, 0xaa, 0xc9, 0x41, 0x0,
    0xff, 0x84, 0xe3, 0x6d, 0x86, 0x36, 0x94, 0x40,
    0x3f, 0xf8, 0x84, 0xd7, 0xae, 0xd, 0x7b, 0x28,
    0x20, 0x1c, 0x4b, 0x5f, 0x8c, 0xf, 0x76, 0xdc,
    0xff, 0xfd, 0x6a, 0x0, 0x6b, 0xff, 0xfd, 0x85,
    0x76, 0x60, 0x6b, 0xfc, 0x62, 0x0, 0x12, 0x7c,
    0x56, 0x62, 0x11, 0xa3, 0x33, 0xfa, 0x10, 0x0,
    0x91, 0x99, 0xfd, 0xe, 0x93, 0x9b, 0x51, 0x7,
    0x20, 0x8, 0x55, 0x94, 0x80, 0x21, 0x23, 0x3f,
    0xf0, 0x80, 0x8, 0xcf, 0xfc, 0x42, 0x1, 0x12,
    0xb2, 0x8, 0x7, 0xff, 0x98,

    /* U+7248 "版" */
    0x0, 0xc5, 0x1b, 0xd0, 0x60, 0x11, 0x3e, 0xf4,
    0x98, 0x6, 0x24, 0x55, 0x33, 0x4e, 0xe8, 0x84,
    0xca, 0xa9, 0x79, 0xba, 0xed, 0x94, 0x10, 0xf,
    0xfe, 0x59, 0x2c, 0x54, 0x6f, 0x70, 0x1, 0xdc,
    0xcc, 0x77, 0x23, 0xb3, 0x7b, 0x65, 0x4, 0x3,
    0xff, 0x9e, 0xfd, 0x10, 0x77, 0x33, 0x15, 0x48,
    0x83, 0x21, 0x0, 0xff, 0xe1, 0x93, 0x11, 0x4f,
    0xc0, 0x3, 0x52, 0x20, 0x80, 0x7f, 0xf5, 0x45,
    0x6f, 0x32, 0xb7, 0x30, 0x48, 0xcf, 0x97, 0x0,
    0x96, 0xbf, 0xff, 0xf8, 0x7d, 0x4a, 0x1, 0xfc,
    0x2f, 0xbd, 0xdf, 0xed, 0x87, 0x0, 0x91, 0xdc,
    0x44, 0x6b, 0xdd, 0xfa, 0x54, 0xb, 0x5c, 0x3,
    0xc2, 0x1, 0xff, 0xc7, 0x10, 0x1c, 0xb5, 0x35,
    0x33, 0x11, 0x70, 0xf3, 0x8a, 0xa1, 0x0, 0x7c,
    0x26, 0x2d, 0xdb, 0xbf, 0xa1, 0x0, 0x3, 0xe0,
    0x26, 0x7, 0x8e, 0x56, 0xe2, 0x1, 0x12, 0x29,
    0x26, 0x18, 0x7, 0xce, 0x2, 0x24, 0xbe, 0xed,
    0x28, 0x24, 0x41, 0x0, 0x84, 0xc0, 0x5c, 0x13,
    0x5c, 0xae, 0x4c, 0x12, 0xe4, 0xdb, 0x94, 0x3,
    0xf0, 0x98, 0x16, 0xb9, 0x9e, 0x5f, 0x70, 0xe,
    0x70, 0x13, 0x1, 0x0, 0x25, 0xc8, 0x34, 0x5c,
    0x31, 0x4d, 0xa0, 0x7, 0xe1, 0x26, 0x6, 0x21,
    0x0, 0xff, 0x84, 0x94, 0x1b, 0x8c, 0x2, 0x26,
    0xb5, 0x44, 0x12, 0xc3, 0x90, 0x7, 0xf2, 0xe9,
    0x91, 0x1c, 0x3, 0xff, 0x80, 0xb8, 0x64, 0x6a,
    0x20, 0x2, 0x6b, 0x84, 0x11, 0x96, 0x1c, 0xc0,
    0x3f, 0x27, 0x21, 0x55, 0x8, 0x3, 0xfc, 0x6b,
    0xca, 0x29, 0x80, 0xb3, 0x98, 0x97, 0x75, 0xff,
    0x63, 0x84, 0x66, 0x25, 0x8c, 0x40, 0x2, 0x20,
    0x4b, 0x62, 0x0, 0xff, 0xb8, 0x99, 0x26, 0x82,
    0xa5, 0x55, 0x19, 0x89, 0x41, 0x3, 0x8c, 0xd9,
    0x55, 0x55, 0x14, 0x40, 0x56, 0xa8, 0xc2, 0x1,
    0xf0, 0xb5, 0xfd, 0x43, 0xe5, 0xb9, 0xa4, 0xe6,
    0x25, 0x8c, 0x40, 0x3e, 0x26, 0x9c, 0xc4, 0xa0,
    0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 6, .box_h = 0, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 128, .box_w = 30, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 128, .box_w = 12, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 128, .box_w = 21, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 128, .box_w = 21, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 128, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 558, .adv_w = 128, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 128, .box_w = 21, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 128, .box_w = 30, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 256, .box_w = 48, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1154, .adv_w = 256, .box_w = 45, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1275, .adv_w = 256, .box_w = 48, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1464, .adv_w = 256, .box_w = 48, .box_h = 15, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x5, 0x1a, 0x26, 0x2c, 0x41, 0x45, 0x47,
    0x49, 0x4d, 0x4e, 0x52, 0x53, 0x55, 0x57, 0x4ed6,
    0x56da, 0x670c, 0x7228
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 29225, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 19, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t font_ui = {
#else
lv_font_t font_ui = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_UI*/

