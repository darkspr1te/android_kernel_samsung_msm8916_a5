/* Copyright (c) 2009-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef _MDNIE_LITE_TUNING_DATA_H_
#define _MDNIE_LITE_TUNING_DATA_H_

/* 2014.09.02 */

#define MDNIE_COLOR_BLINDE_OFFSET	18
#define ADDRESS_SCR_WHITE_RED   	0x24
#define ADDRESS_SCR_WHITE_GREEN 	0x26
#define ADDRESS_SCR_WHITE_BLUE  	0x28

////////////////// SCREEN CURTAIN//////////////////

static char SCREEN_CURTAIN_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //sharpen cc gamma 00 0 0
};

static char SCREEN_CURTAIN_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0x00, //scr Rr Bb
	0x00, //scr Cg Yg
	0x00, //scr Rg Bg
	0x00, //scr Cb Yr
	0x00, //scr Rb Br
	0x00, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0x00, //scr Gg Gg
	0x00, //scr Mb Mr
	0x00, //scr Gb Gr
	0x00, //scr Yr Cb
	0x00, //scr Br Rb
	0x00, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0x00, //scr Bb Rr
	0x00, //scr Wr Wb
	0x00, //scr Kr Kb
	0x00, //scr Wg Wg
	0x00, //scr Kg Kg
	0x00, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// UI /// /////////////////////

static char STANDARD_UI_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

static char STANDARD_UI_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

static char NATURAL_UI_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char NATURAL_UI_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

static char DYNAMIC_UI_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char DYNAMIC_UI_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

static char MOVIE_UI_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

static char MOVIE_UI_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_UI_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char AUTO_UI_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// GALLERY /////////////////////
static char STANDARD_GALLERY_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

static char STANDARD_GALLERY_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

static char NATURAL_GALLERY_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char NATURAL_GALLERY_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

static char DYNAMIC_GALLERY_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char DYNAMIC_GALLERY_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

static char MOVIE_GALLERY_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

static char MOVIE_GALLERY_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_GALLERY_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char AUTO_GALLERY_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1c, //scr Rg Bg
	0xff, //scr Cb Yr
	0x1c, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// VIDEO /////////////////////

static char STANDARD_VIDEO_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

static char STANDARD_VIDEO_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

static char NATURAL_VIDEO_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char NATURAL_VIDEO_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

static char DYNAMIC_VIDEO_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char DYNAMIC_VIDEO_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

static char MOVIE_VIDEO_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

static char MOVIE_VIDEO_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_VIDEO_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char AUTO_VIDEO_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

////////////////// VT /////////////////////

static char STANDARD_VT_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

static char STANDARD_VT_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

static char NATURAL_VT_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char NATURAL_VT_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

static char DYNAMIC_VT_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

static char DYNAMIC_VT_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

static char MOVIE_VT_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

static char MOVIE_VT_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_VT_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char AUTO_VT_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// CAMERA /////////////////////

static char CAMERA_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

static char CAMERA_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char AUTO_CAMERA_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char AUTO_CAMERA_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1c, //scr Rg Bg
	0xff, //scr Cb Yr
	0x1c, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

static char NEGATIVE_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //sharpen cc gamma 00 0 0
};

static char NEGATIVE_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0xff, //scr Cr Yb
	0x00, //scr Rr Bb
	0x00, //scr Cg Yg
	0xff, //scr Rg Bg
	0x00, //scr Cb Yr
	0xff, //scr Rb Br
	0x00, //scr Mr Mb
	0xff, //scr Gr Gb
	0xff, //scr Mg Mg
	0x00, //scr Gg Gg
	0x00, //scr Mb Mr
	0xff, //scr Gb Gr
	0x00, //scr Yr Cb
	0xff, //scr Br Rb
	0x00, //scr Yg Cg
	0xff, //scr Bg Rg
	0xff, //scr Yb Cr
	0x00, //scr Bb Rr
	0x00, //scr Wr Wb
	0xff, //scr Kr Kb
	0x00, //scr Wg Wg
	0xff, //scr Kg Kg
	0x00, //scr Wb Wr
	0xff, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char COLOR_BLIND_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //sharpen cc gamma 00 0 0
};

char COLOR_BLIND_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// BROWSER /////////////////////

char STANDARD_BROWSER_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char STANDARD_BROWSER_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char NATURAL_BROWSER_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char NATURAL_BROWSER_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

char DYNAMIC_BROWSER_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char DYNAMIC_BROWSER_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

char MOVIE_BROWSER_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

char MOVIE_BROWSER_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_BROWSER_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char AUTO_BROWSER_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1c, //scr Rg Bg
	0xff, //scr Cb Yr
	0x1c, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

////////////////// eBOOK /////////////////////

char AUTO_EBOOK_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //sharpen cc gamma 00 0 0
};

char AUTO_EBOOK_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf3, //scr Wg Wg
	0x00, //scr Kg Kg
	0xe4, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char STANDARD_EBOOK_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x01, //sharpen cc gamma 00 0 0
};

char STANDARD_EBOOK_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xfb, //scr Rr Bb
	0xef, //scr Cg Yg
	0x10, //scr Rg Bg
	0xe4, //scr Cb Yr
	0x10, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x20, //scr Mg Mg
	0xe2, //scr Gg Gg
	0xec, //scr Mb Mr
	0x00, //scr Gb Gr
	0xed, //scr Yr Cb
	0x1c, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1a, //scr Bg Rg
	0x2a, //scr Yb Cr
	0xf4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char DYNAMIC_EBOOK_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char DYNAMIC_EBOOK_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x20, //scr Rg Bg
	0xff, //scr Cb Yr
	0x20, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x14, //curve 1 a
	0x00, //curve 2 b
	0x14, //curve 2 a
	0x00, //curve 3 b
	0x14, //curve 3 a
	0x00, //curve 4 b
	0x14, //curve 4 a
	0x03, //curve 5 b
	0x9a, //curve 5 a
	0x03, //curve 6 b
	0x9a, //curve 6 a
	0x03, //curve 7 b
	0x9a, //curve 7 a
	0x03, //curve 8 b
	0x9a, //curve 8 a
	0x07, //curve 9 b
	0x9e, //curve 9 a
	0x07, //curve10 b
	0x9e, //curve10 a
	0x07, //curve11 b
	0x9e, //curve11 a
	0x07, //curve12 b
	0x9e, //curve12 a
	0x0a, //curve13 b
	0xa0, //curve13 a
	0x0a, //curve14 b
	0xa0, //curve14 a
	0x0a, //curve15 b
	0xa0, //curve15 a
	0x0a, //curve16 b
	0xa0, //curve16 a
	0x16, //curve17 b
	0xa6, //curve17 a
	0x16, //curve18 b
	0xa6, //curve18 a
	0x16, //curve19 b
	0xa6, //curve19 a
	0x16, //curve20 b
	0xa6, //curve20 a
	0x05, //curve21 b
	0x21, //curve21 a
	0x0b, //curve22 b
	0x20, //curve22 a
	0x87, //curve23 b
	0x0f, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x20,
	//end
};

char NATURAL_EBOOK_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char NATURAL_EBOOK_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x8c, //scr Cr Yb
	0xd5, //scr Rr Bb
	0xf2, //scr Cg Yg
	0x29, //scr Rg Bg
	0xe6, //scr Cb Yr
	0x20, //scr Rb Br
	0xdd, //scr Mr Mb
	0x68, //scr Gr Gb
	0x3a, //scr Mg Mg
	0xed, //scr Gg Gg
	0xed, //scr Mb Mr
	0x38, //scr Gb Gr
	0xef, //scr Yr Cb
	0x2a, //scr Br Rb
	0xf1, //scr Yg Cg
	0x1f, //scr Bg Rg
	0x56, //scr Yb Cr
	0xe4, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf7, //scr Wg Wg
	0x00, //scr Kg Kg
	0xed, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

char MOVIE_EBOOK_1[] = {
	0xEB,
	0x01, //mdnie_en
	0x00, //mask 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //data_width sharpen cs gamma 00 00 0 0
};

char MOVIE_EBOOK_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi1 y end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 x start
	0x00,
	0x87, //scr Cr Yb
	0xe7, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1e, //scr Rg Bg
	0xf2, //scr Cb Yr
	0x1e, //scr Rb Br
	0xf5, //scr Mr Mb
	0x73, //scr Gr Gb
	0x2a, //scr Mg Mg
	0xf7, //scr Gg Gg
	0xf0, //scr Mb Mr
	0x37, //scr Gb Gr
	0xfa, //scr Yr Cb
	0x2e, //scr Br Rb
	0xf5, //scr Yg Cg
	0x14, //scr Bg Rg
	0x3c, //scr Yb Cr
	0xed, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf6, //scr Wg Wg
	0x00, //scr Kg Kg
	0xee, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x20, //curve_1_a
	0x00, //curve_2_b
	0x20, //curve_2_a
	0x00, //curve_3_b
	0x20, //curve_3_a
	0x00, //curve_4_b
	0x20, //curve_4_a
	0x02, //curve_5_b
	0x1b, //curve_5_a
	0x02, //curve_6_b
	0x1b, //curve_6_a
	0x02, //curve_7_b
	0x1b, //curve_7_a
	0x02, //curve_8_b
	0x1b, //curve_8_a
	0x09, //curve_9_b
	0xa6, //curve_9_a
	0x09, //curve10_b
	0xa6, //curve10_a
	0x09, //curve11_b
	0xa6, //curve11_a
	0x09, //curve12_b
	0xa6, //curve12_a
	0x00, //curve13_b
	0x20, //curve13_a
	0x00, //curve14_b
	0x20, //curve14_a
	0x00, //curve15_b
	0x20, //curve15_a
	0x00, //curve16_b
	0x20, //curve16_a
	0x00, //curve17_b
	0x20, //curve17_a
	0x00, //curve18_b
	0x20, //curve18_a
	0x00, //curve19_b
	0x20, //curve19_a
	0x00, //curve20_b
	0x20, //curve20_a
	0x00, //curve21_b
	0x20, //curve21_a
	0x00, //curve22_b
	0x20, //curve22_a
	0x00, //curve23_b
	0x20, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
};

char AUTO_EMAIL_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x30, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //sharpen cc gamma 00 0 0
};

char AUTO_EMAIL_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xf9, //scr Wg Wg
	0x00, //scr Kg Kg
	0xec, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x00,
	//end
};

char LOCAL_CE_1[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char LOCAL_CE_2[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1c, //scr Rg Bg
	0xff, //scr Cb Yr
	0x1c, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve_1_b
	0x7f, //curve_1_a
	0x05, //curve_2_b
	0x58, //curve_2_a
	0x0f, //curve_3_b
	0x30, //curve_3_a
	0x0f, //curve_4_b
	0x30, //curve_4_a
	0x0f, //curve_5_b
	0x30, //curve_5_a
	0x0f, //curve_6_b
	0x30, //curve_6_a
	0x0f, //curve_7_b
	0x30, //curve_7_a
	0x0f, //curve_8_b
	0x30, //curve_8_a
	0x0f, //curve_9_b
	0x30, //curve_9_a
	0x0f, //curve10_b
	0x30, //curve10_a
	0x0f, //curve11_b
	0x30, //curve11_a
	0x32, //curve12_b
	0xe0, //curve12_a
	0x32, //curve13_b
	0xe0, //curve13_a
	0x32, //curve14_b
	0xe0, //curve14_a
	0x32, //curve15_b
	0xe0, //curve15_a
	0x32, //curve16_b
	0xe0, //curve16_a
	0x22, //curve17_b
	0xd8, //curve17_a
	0x7e, //curve18_b
	0x12, //curve18_a
	0x7e, //curve19_b
	0x12, //curve19_a
	0x95, //curve20_b
	0x0c, //curve20_a
	0x95, //curve21_b
	0x0c, //curve21_a
	0x95, //curve22_b
	0x0c, //curve22_a
	0x95, //curve23_b
	0x0c, //curve23_a
	0x00, //curve24_b
	0xFF, //curve24_a
	0x01, //cs gain
	0x20,
	//end
};

char LOCAL_CE_1_TEXT[] = {
	//start
	0xEB,
	0x01, //mdnie_en
	0x00, //data_width mask 00 000
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x03, //sharpen cc gamma 00 0 0
};

char LOCAL_CE_2_TEXT[] = {
	0xEC,
	0x00, //roi ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x1c, //scr Rg Bg
	0xff, //scr Cb Yr
	0x1c, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xff, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x02, //curve 5 b
	0x1b, //curve 5 a
	0x02, //curve 6 b
	0x1b, //curve 6 a
	0x02, //curve 7 b
	0x1b, //curve 7 a
	0x02, //curve 8 b
	0x1b, //curve 8 a
	0x09, //curve 9 b
	0xa6, //curve 9 a
	0x09, //curve10 b
	0xa6, //curve10 a
	0x09, //curve11 b
	0xa6, //curve11 a
	0x09, //curve12 b
	0xa6, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x01, //cs gain
	0x40,
	//end
};

char *blind_tune_value[ACCESSIBILITY_MAX][2] = {
		/*
			ACCESSIBILITY_OFF,
			NEGATIVE,
			COLOR_BLIND,
			SCREEN_CURTAIN,
		*/
		{NULL, NULL},
		{NEGATIVE_1, NEGATIVE_2},
		{COLOR_BLIND_1, COLOR_BLIND_2},
		{SCREEN_CURTAIN_1, SCREEN_CURTAIN_2},
};

char *mdnie_tune_value[MAX_mDNIe_MODE][MAX_BACKGROUND_MODE][MAX_OUTDOOR_MODE][2] = {
		/*
			DYNAMIC_MODE (outdoor off/on)
			STANDARD_MODE (outdoor off/on)
			NATURAL_MODE (outdoor off/on)
			MOVIE_MODE (outdoor off/on)
			AUTO_MODE (outdoor off/on)
		*/
		// UI_APP
		{
			{{DYNAMIC_UI_1, DYNAMIC_UI_2}, {NULL, NULL}},
			{{STANDARD_UI_1, STANDARD_UI_2}, {NULL, NULL}},
			{{NATURAL_UI_1, NATURAL_UI_2}, {NULL, NULL}},
			{{MOVIE_UI_1, MOVIE_UI_2}, {NULL, NULL}},
			{{AUTO_UI_1, AUTO_UI_2}, {NULL, NULL}},
		},
		// VIDEO_APP
		{
			{{DYNAMIC_VIDEO_1, DYNAMIC_VIDEO_2}, {NULL, NULL}},
			{{STANDARD_VIDEO_1, STANDARD_VIDEO_2}, {NULL, NULL}},
			{{NATURAL_VIDEO_1, NATURAL_VIDEO_2}, {NULL, NULL}},
			{{MOVIE_VIDEO_1, MOVIE_VIDEO_2}, {NULL, NULL}},
			{{AUTO_VIDEO_1, AUTO_VIDEO_2}, {NULL, NULL}},
		},
		// VIDEO_WARM_APP
		{
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
		},
		// VIDEO_COLD_APP
		{
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},

		},
		// CAMERA_APP
		{
			{{CAMERA_1, CAMERA_2}, {NULL, NULL}},
			{{CAMERA_1, CAMERA_2}, {NULL, NULL}},
			{{CAMERA_1, CAMERA_2}, {NULL, NULL}},
			{{CAMERA_1, CAMERA_2}, {NULL, NULL}},
			{{AUTO_CAMERA_1, AUTO_CAMERA_2}, {NULL, NULL}},
		},
		// NAVI_APP
		{
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
			{{NULL, NULL}, {NULL, NULL}},
		},
		// GALLERY_APP
		{
			{{DYNAMIC_GALLERY_1, DYNAMIC_GALLERY_2}, {NULL,NULL}},
			{{STANDARD_GALLERY_1, STANDARD_GALLERY_2}, {NULL,NULL}},
			{{NATURAL_GALLERY_1, NATURAL_GALLERY_2}, {NULL,NULL}},
			{{MOVIE_GALLERY_1, MOVIE_GALLERY_2}, {NULL,NULL}},
			{{AUTO_GALLERY_1, AUTO_GALLERY_2}, {NULL,NULL}},
		},
		// VT_APP
		{
			{{DYNAMIC_VT_1, DYNAMIC_VT_2}, {NULL, NULL}},
			{{STANDARD_VT_1, STANDARD_VT_2}, {NULL, NULL}},
			{{NATURAL_VT_1, NATURAL_VT_2}, {NULL, NULL}},
			{{MOVIE_VT_1, MOVIE_VT_2}, {NULL, NULL}},
			{{AUTO_VT_1, AUTO_VT_2}, {NULL, NULL}},
		},
		// BROWSER_APP
		{
			{{DYNAMIC_BROWSER_1, DYNAMIC_BROWSER_2}, {NULL, NULL}},
			{{STANDARD_BROWSER_1, STANDARD_BROWSER_2}, {NULL, NULL}},
			{{NATURAL_BROWSER_1, NATURAL_BROWSER_2}, {NULL, NULL}},
			{{MOVIE_BROWSER_1, MOVIE_BROWSER_2}, {NULL, NULL}},
			{{AUTO_BROWSER_1, AUTO_BROWSER_2}, {NULL, NULL}},
		},
		// eBOOK_APP
		{
			{{DYNAMIC_EBOOK_1, DYNAMIC_EBOOK_2}, {NULL, NULL}},
			{{STANDARD_EBOOK_1, STANDARD_EBOOK_2}, {NULL, NULL}},
			{{NATURAL_EBOOK_1, NATURAL_EBOOK_2}, {NULL, NULL}},
			{{MOVIE_EBOOK_1, MOVIE_EBOOK_2}, {NULL, NULL}},
			{{AUTO_EBOOK_1, AUTO_EBOOK_2}, {NULL, NULL}},
		},
		// EMAIL_APP
		{
			{{AUTO_EMAIL_1, AUTO_EMAIL_2}, {NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2}, {NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2}, {NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2}, {NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2}, {NULL, NULL}},
		},
};

#endif
