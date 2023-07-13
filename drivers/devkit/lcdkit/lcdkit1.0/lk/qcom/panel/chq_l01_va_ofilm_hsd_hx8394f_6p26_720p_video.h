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

#ifndef _PANEL_CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_H_

#define _PANEL_CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_panel_data = {
        "lcdkit_chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video", "dsi:0:", 
        "ofilm-hsd-hx8394f-6p26-720p-video", 10, 0, "DISPLAY_1", 
        0, 608110000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_panel_res = {
        720, 1520, 48, 44, 8, 0, 8, 13, 4, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd0[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd1[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x53, 0x2C, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd2[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x55, 0x00, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd3[] = {
    0x11, 0x00, 0x05, 0x80};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd4[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0xFF, 0x83, 0x94,
   };


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd5[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xC6, 0xCD, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd6[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd7[] = {
    0x06, 0x00, 0x39, 0xC0,
    0xB1, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd8[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd9[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBA, 0x62, 0xFF, 0xFF};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd10[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xC9, 0x03, 0x00, 0x25,
   };


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd11[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_command[] = {
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd0, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd1, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd2, 0x00},
{0x4, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd3, 0x78},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd4, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd5, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd6, 0x00},
{0xc, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd7, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd8, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd9, 0x00},
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd10, 0x00},
{0x4, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_on_cmd11, 0x00}
};
#define CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_ON_COMMAND 12


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_off_command[] = {
{0x4, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_off_cmd0, 0x14},
{0x4, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_off_cmd1, 0x50}
};
#define CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_OFF_COMMAND 2


static struct command_state chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_lane_config = {
        3, 0, 1, 1, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_timings[]= {
        0x20, 0x1C, 0x06, 0x07, 0x03, 0x03, 0x04, 0xA0,
                        0x20, 0x1C, 0x06, 0x07, 0x03, 0x03, 0x04, 0xA0,
                        0x20, 0x1C, 0x06, 0x07, 0x03, 0x03, 0x04, 0xA0,
                        0x20, 0x1C, 0x06, 0x07, 0x03, 0x03, 0x04, 0xA0,
                        0x20, 0x13, 0x05, 0x06, 0x03, 0x03, 0x04, 0xA0 
};

static struct panel_timing chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_timing_info = {
        0, 4, 0x0B, 0x24 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_reset_seq = {
    { 1, 0, 1, }, { 1, 1, 5, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_backlight = {
        2, 31, 2047, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 1, 0, 2, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_mipi_signature  = 0xffff;

static const uint32_t chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 0, 0, 61, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5500000, 5500000, 100, 20, 0, 0, 
        0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x01, 0x01, 0x01, 0, 1, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_panel_delay_ctrl = {
        0, 10, 0, 1, 1, 0, 2, 5, 0, 0, 0, 0, 20, 0, 50 
};

static char chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_backlight_cmd0[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};




static struct mipi_dsi_cmd chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_backlight_command[] = {
{0x8, chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_backlight_cmd0, 0x00}
};
#define CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_bias_ic_array[0];
 
#define CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * chq_l01_va_ofilm_hsd_hx8394f_6p26_720p_video_backlight_ic_array[0];
 
#define CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_CHQ_L01_VA_OFILM_HSD_HX8394F_6P26_720P_VIDEO_H_*/
