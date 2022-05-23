/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: --font /home/kisonhe/Downloads/NotoSansMonoCJKsc-Regular.otf --symbols Language --lcd --size 16 --bpp 4 --lv-include lvgl.h --format lvgl -o src/gui/fonts/font_ui.c
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

    /* U+006E "n" */
    0x0, 0x24, 0xf7, 0xca, 0xa, 0x3d, 0x67, 0x76,
    0xc8, 0x41, 0x0, 0xfe, 0x7a, 0xc8, 0xdd, 0x4d,
    0xc3, 0x99, 0x9e, 0xa4, 0xc0, 0x3f, 0x96, 0x36,
    0x9d, 0x54, 0xd1, 0x46, 0x2, 0x6a, 0x1, 0xf8,
    0xcc, 0xc2, 0x1, 0xc2, 0x4e, 0x0, 0x71, 0x10,
    0x7, 0xff, 0x18, 0x40, 0x3f, 0xff, 0xe0, 0x1f,
    0xfc, 0xf0,

    /* U+0075 "u" */
    0x2, 0x7d, 0xff, 0x52, 0x0, 0x7c, 0x93, 0xfe,
    0xd8, 0x20, 0xf, 0xff, 0xf8, 0x7, 0xff, 0x48,
    0x40, 0x3f, 0xf8, 0xa6, 0x22, 0x0, 0x9, 0x80,
    0x78, 0x4d, 0x40, 0x3f, 0xa, 0xa8, 0x41, 0x2a,
    0x55, 0x67, 0xac, 0xa2, 0x10, 0xf, 0xc7, 0x16,
    0xc6, 0x4d, 0x71, 0x3b, 0xae, 0xc8, 0x50, 0xf,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 21, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 128, .box_w = 24, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 328, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 24, .box_h = 9, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x15, 0x19, 0x1b, 0x22, 0x29
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 76, .range_length = 42, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .line_height = 15,          /*The maximum line height required by the font*/
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

