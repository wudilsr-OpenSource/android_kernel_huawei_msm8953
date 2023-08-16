/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_H_

#define _PANEL_CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_panel_data = {
        "lcdkit_chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video", "dsi:0:", 
        "ofilm-inx-hx8399c-6p26-720p-video", 10, 0, "DISPLAY_1", 
        0, 669970000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_panel_res = {
        720, 1520, 132, 44, 8, 0, 8, 12, 4, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd0[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0xFF, 0x83, 0x99,
   };


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd1[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xBA, 0x62, 0x23, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd2[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xD2, 0x88, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd3[] = {
    0x0d, 0x00, 0x39, 0xC0,
    0xB1, 0x00, 0x04, 0x72,
    0x92, 0x01, 0x32, 0x33,
    0x11, 0x11, 0x4D, 0x58,
    0x06, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd4[] = {
    0x0c, 0x00, 0x39, 0xC0,
    0xB2, 0x00, 0x80, 0xD0,
    0x7C, 0x05, 0x07, 0x5A,
    0x11, 0x10, 0x00, 0x00,
   };


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd5[] = {
    0x2d, 0x00, 0x39, 0xC0,
    0xB4, 0x00, 0xFF, 0x02,
    0xD7, 0x02, 0xD7, 0x02,
    0xD7, 0x02, 0x00, 0x03,
    0x05, 0x00, 0x3F, 0x03,
    0x06, 0x08, 0x21, 0x03,
    0x00, 0x00, 0x00, 0xAC,
    0x87, 0x02, 0xA7, 0x02,
    0xA7, 0x02, 0xA7, 0x02,
    0x00, 0x03, 0x05, 0x00,
    0x2D, 0x03, 0x06, 0x08,
    0x00, 0x00, 0x00, 0xAC,
    0x01, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd6[] = {
    0x28, 0x00, 0x39, 0xC0,
    0xD3, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04,
    0x04, 0x32, 0x10, 0x09,
    0x00, 0x09, 0x32, 0x10,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x0A, 0x0A,
    0x03, 0x00, 0x00, 0x00,
    0x08, 0x60, 0x00, 0x40,
    0x00, 0x09, 0x20, 0x01,
   };


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd7[] = {
    0x21, 0x00, 0x39, 0xC0,
    0xD5, 0x18, 0x18, 0x31,
    0x31, 0x30, 0x30, 0x2F,
    0x2F, 0x18, 0x18, 0x19,
    0x19, 0x03, 0x03, 0x02,
    0x02, 0x01, 0x01, 0x00,
    0x00, 0x20, 0x20, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd8[] = {
    0x21, 0x00, 0x39, 0xC0,
    0xD6, 0x18, 0x18, 0x31,
    0x31, 0x30, 0x30, 0x2F,
    0x2F, 0x18, 0x18, 0x19,
    0x19, 0x00, 0x00, 0x01,
    0x01, 0x02, 0x02, 0x03,
    0x03, 0x20, 0x20, 0x40,
    0x40, 0x40, 0x40, 0x40,
    0x40, 0x40, 0x40, 0x40,
    0x40, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd9[] = {
    0x11, 0x00, 0x39, 0xC0,
    0xD8, 0xAA, 0xBF, 0xF8,
    0x00, 0xAA, 0xBF, 0xF8,
    0x00, 0xAA, 0xBA, 0xA8,
    0x00, 0xAA, 0xBA, 0xA8,
    0x00, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd10[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd11[] = {
    0x11, 0x00, 0x39, 0xC0,
    0xD8, 0xBF, 0xEF, 0xF8,
    0x00, 0xBF, 0xEF, 0xF8,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd12[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd13[] = {
    0x09, 0x00, 0x39, 0xC0,
    0xD8, 0xBF, 0xEF, 0xF8,
    0x00, 0xBF, 0xEF, 0xF8,
    0x00, 0xFF, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd15[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xB6, 0x78, 0x78, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd16[] = {
    0x37, 0x00, 0x39, 0xC0,
    0xE0, 0x00, 0x1A, 0x29,
    0x25, 0x55, 0x60, 0x6C,
    0x66, 0x6C, 0x73, 0x79,
    0x7D, 0x81, 0x87, 0x8D,
    0x90, 0x92, 0x9A, 0x9B,
    0xA3, 0x97, 0xA5, 0xA8,
    0x58, 0x54, 0x60, 0x6C,
    0x00, 0x1A, 0x29, 0x25,
    0x55, 0x60, 0x6C, 0x66,
    0x6C, 0x73, 0x79, 0x7D,
    0x81, 0x87, 0x8D, 0x90,
    0x92, 0x9A, 0x9B, 0xA3,
    0x97, 0xA5, 0xA8, 0x58,
    0x54, 0x60, 0x6C, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd17[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xCC, 0x08, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd18[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd19[] = {
    0x53, 0x2C, 0x15, 0x80};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd20[] = {
    0x55, 0x00, 0x15, 0x80};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd21[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x35, 0x00, 0xFF, 0xFF};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd22[] = {
    0x11, 0x00, 0x15, 0x80};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd23[] = {
    0x29, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_command[] = {
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd0, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd1, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd2, 0x00},
{0x14, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd3, 0x00},
{0x10, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd4, 0x00},
{0x34, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd5, 0x00},
{0x2c, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd6, 0x00},
{0x28, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd7, 0x00},
{0x28, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd8, 0x00},
{0x18, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd9, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd10, 0x00},
{0x18, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd11, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd12, 0x00},
{0x10, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd13, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd14, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd15, 0x00},
{0x3c, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd16, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd17, 0x00},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd18, 0x00},
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd19, 0x00},
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd20, 0x05},
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd21, 0x00},
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd22, 0x78},
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_on_cmd23, 0x00}
};
#define CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_ON_COMMAND 24


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_off_command[] = {
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_off_cmd0, 0x14},
{0x4, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_off_cmd1, 0x64}
};
#define CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_OFF_COMMAND 2


static struct command_state chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_lane_config = {
        3, 0, 1, 1, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_timings[]= {
        0x21, 0x1E, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x14, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0 
};

static struct panel_timing chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_timing_info = {
        0, 4, 0x0C, 0x27 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_reset_seq = {
    { 1, 0, 1, }, { 2, 1, 5, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_backlight = {
        2, 31, 2047, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 1, 0, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_mipi_signature  = 0xffff;

static const uint32_t chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 64, 0, 0, 61, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5500000, 5500000, 100, 20, 0, 
        0, 0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x01, 0x01, 0x01, 0, 1, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_panel_delay_ctrl = {
        0, 2, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 20, 0, 50 
};

static char chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_backlight_cmd0[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};




static struct mipi_dsi_cmd chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_backlight_command[] = {
{0x8, chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_backlight_cmd0, 0x00}
};
#define CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_bias_ic_array[0];
 
#define CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * chq_l21a_va_ofilm_inx_hx8399c_6p26_720p_video_backlight_ic_array[0];
 
#define CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_CHQ_L21A_VA_OFILM_INX_HX8399C_6P26_720P_VIDEO_H_*/
