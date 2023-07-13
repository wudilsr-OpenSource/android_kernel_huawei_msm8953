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

#ifndef _PANEL_BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_H_

#define _PANEL_BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_panel_data = {
        "lcdkit_bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video", 
        "dsi:0:", "ofilm-csot-hx83112a-6p26-720p-video", 10, 0, "DISPLAY_1", 
        0, 684270000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_panel_res = {
        720, 1520, 120, 40, 28, 0, 40, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd0[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0x83, 0x11, 0x2A,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd1[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBA, 0x72, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd2[] = {
    0x09, 0x00, 0x39, 0xC0,
    0xB1, 0x08, 0x2D, 0x2D,
    0x82, 0x82, 0x4F, 0x4A,
    0xAA, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd3[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd4[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xCB, 0x25, 0x11, 0x01,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd5[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd6[] = {
    0x0C, 0x00, 0x39, 0xC0,
    0xB2, 0x00, 0x02, 0x00,
    0x52, 0xF0, 0x00, 0x08,
    0x26, 0x23, 0x12, 0x14,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd7[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xD2, 0x2D, 0x2D, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd8[] = {
    0x1C, 0x00, 0x39, 0xC0,
    0xB4, 0x08, 0xE0, 0x08,
    0xEF, 0x08, 0xEF, 0x0A,
    0xEF, 0x08, 0xE0, 0x08,
    0xE0, 0x00, 0xFF, 0x00,
    0xFF, 0x06, 0x00, 0x17,
    0x16, 0x00, 0x3A, 0x08,
    0x0A, 0x0D, 0x00, 0x88,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd9[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB6, 0x8B, 0x8B, 0xE3,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd10[] = {
    0x05, 0x00, 0x39, 0xC0,
    0xC0, 0x23, 0x23, 0x00,
    0x44, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd11[] = {
    0x2C, 0x00, 0x39, 0xC0,
    0xD3, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00,
    0x08, 0x08, 0x03, 0x03,
    0x00, 0x08, 0x07, 0x07,
    0x07, 0x07, 0x32, 0x10,
    0x06, 0x00, 0x06, 0x32,
    0x10, 0x07, 0x00, 0x07,
    0x32, 0x10, 0x07, 0x00,
    0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x09, 0x05, 0xFC, 0x00,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd12[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd13[] = {
    0x09, 0x00, 0x39, 0xC0,
    0xD3, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x0A, 0x04,
    0x81, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd15[] = {
    0x31, 0x00, 0x39, 0xC0,
    0xD5, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0xC0, 0xC0, 0xC0,
    0x18, 0x2F, 0x2F, 0x30,
    0x30, 0x31, 0x31, 0x40,
    0x40, 0x18, 0x18, 0x40,
    0x40, 0x25, 0x24, 0x02,
    0x01, 0x00, 0x03, 0x01,
    0x00, 0x03, 0x02, 0x19,
    0x19, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd16[] = {
    0x31, 0x00, 0x39, 0xC0,
    0xD6, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,
    0x18, 0x40, 0x40, 0x18,
    0x40, 0x2F, 0x2F, 0x30,
    0x30, 0x31, 0x31, 0x40,
    0x40, 0x18, 0x18, 0x19,
    0x19, 0x24, 0x25, 0x01,
    0x02, 0x03, 0x00, 0x02,
    0x03, 0x00, 0x01, 0x40,
    0x40, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd17[] = {
    0x19, 0x00, 0x39, 0xC0,
    0xD8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd18[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd19[] = {
    0x19, 0x00, 0x39, 0xC0,
    0xD8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd20[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd21[] = {
    0x0D, 0x00, 0x39, 0xC0,
    0xD8, 0xAA, 0xAA, 0xAA,
    0xFE, 0xEE, 0xAA, 0xAA,
    0xAA, 0xAA, 0xFE, 0xEE,
    0xAA, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd22[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x03, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd23[] = {
    0x19, 0x00, 0x39, 0xC0,
    0xD8, 0xAA, 0xAA, 0xAA,
    0xFF, 0xAE, 0xAA, 0xAA,
    0xAA, 0xAA, 0xFF, 0xAE,
    0xAA, 0xAA, 0xAA, 0xAA,
    0xFE, 0xEE, 0xAA, 0xAA,
    0xAA, 0xAA, 0xFE, 0xEE,
    0xAA, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd24[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd25[] = {
    0x18, 0x00, 0x39, 0xC0,
    0xE7, 0x0E, 0x0E, 0x1E,
    0x7B, 0x1D, 0x7B, 0x00,
    0x32, 0x02, 0x02, 0x00,
    0x00, 0x02, 0x02, 0x02,
    0x05, 0x14, 0x14, 0x32,
    0xB9, 0x23, 0xB9, 0x08,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd26[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd27[] = {
    0x09, 0x00, 0x39, 0xC0,
    0xE7, 0x02, 0x00, 0x6C,
    0x01, 0x6D, 0x0D, 0x6C,
    0x0E, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd28[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd29[] = {
    0x1D, 0x00, 0x39, 0xC0,
    0xE7, 0x00, 0x00, 0x08,
    0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd30[] = {
    0x0A, 0x00, 0x39, 0xC0,
    0xB4, 0x00, 0x92, 0x12,
    0x11, 0x88, 0x12, 0x12,
    0x00, 0x53, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd31[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd32[] = {
    0x07, 0x00, 0x39, 0xC0,
    0xC7, 0x70, 0x00, 0x04,
    0xE0, 0x33, 0x00, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd33[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xE9, 0xC3, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd34[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xCB, 0xD2, 0x47, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd35[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xE9, 0x3F, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd36[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xCC, 0x08, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd37[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xC1, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd38[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x01, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd39[] = {
    0x3A, 0x00, 0x39, 0xC0,
    0xC1, 0xFF, 0xFC, 0xF9,
    0xF4, 0xF0, 0xEC, 0xE7,
    0xDE, 0xD9, 0xD4, 0xD0,
    0xCA, 0xC4, 0xBF, 0xBA,
    0xB5, 0xAF, 0xAA, 0xA4,
    0x9A, 0x90, 0x86, 0x7D,
    0x74, 0x6B, 0x62, 0x5B,
    0x53, 0x4B, 0x44, 0x3E,
    0x37, 0x30, 0x29, 0x22,
    0x1C, 0x16, 0x11, 0x0B,
    0x06, 0x04, 0x02, 0x02,
    0x01, 0x00, 0x37, 0x5D,
    0xA1, 0xFC, 0x8C, 0x15,
    0xB0, 0x34, 0x1E, 0xDA,
    0x71, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd40[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x02, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd41[] = {
    0x3A, 0x00, 0x39, 0xC0,
    0xC1, 0xFF, 0xFC, 0xF9,
    0xF4, 0xF0, 0xEC, 0xE7,
    0xDE, 0xD9, 0xD4, 0xD0,
    0xCA, 0xC4, 0xBF, 0xBA,
    0xB5, 0xAF, 0xAA, 0xA4,
    0x9A, 0x90, 0x86, 0x7D,
    0x74, 0x6B, 0x62, 0x5B,
    0x53, 0x4B, 0x44, 0x3E,
    0x37, 0x30, 0x29, 0x22,
    0x1C, 0x16, 0x11, 0x0B,
    0x06, 0x04, 0x02, 0x02,
    0x01, 0x00, 0x37, 0x5D,
    0xA1, 0xFC, 0x8C, 0x15,
    0xB0, 0x34, 0x1E, 0xDA,
    0x71, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd42[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x03, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd43[] = {
    0x3A, 0x00, 0x39, 0xC0,
    0xC1, 0xFF, 0xFC, 0xF9,
    0xF4, 0xF0, 0xEC, 0xE7,
    0xDE, 0xD9, 0xD4, 0xD0,
    0xCA, 0xC4, 0xBF, 0xBA,
    0xB5, 0xAF, 0xAA, 0xA4,
    0x9A, 0x90, 0x86, 0x7D,
    0x74, 0x6B, 0x62, 0x5B,
    0x53, 0x4B, 0x44, 0x3E,
    0x37, 0x30, 0x29, 0x22,
    0x1C, 0x16, 0x11, 0x0B,
    0x06, 0x04, 0x02, 0x02,
    0x01, 0x00, 0x37, 0x5D,
    0xA1, 0xFC, 0x8C, 0x15,
    0xB0, 0x34, 0x1E, 0xDA,
    0x71, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd44[] = {
    0x02, 0x00, 0x39, 0xC0,
    0xBD, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd45[] = {
    0x05, 0x00, 0x39, 0xC0,
    0xC9, 0x04, 0x06, 0xE0,
    0x01, 0xFF, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd46[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd47[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x5E, 0x00, 0x04, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd48[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x53, 0x2c, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd49[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x55, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd50[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x11, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd51[] = {
    0x02, 0x00, 0x39, 0xC0,
    0x29, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_command[] = {
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd0, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd1, 0x00},
{0x10, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd2, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd3, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd4, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd5, 0x00},
{0x10, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd6, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd7, 0x00},
{0x20, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd8, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd9, 0x00},
{0xc, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd10, 0x00},
{0x30, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd11, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd12, 0x00},
{0x10, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd13, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd14, 0x00},
{0x38, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd15, 0x00},
{0x38, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd16, 0x00},
{0x20, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd17, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd18, 0x00},
{0x20, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd19, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd20, 0x00},
{0x14, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd21, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd22, 0x00},
{0x20, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd23, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd24, 0x00},
{0x1c, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd25, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd26, 0x00},
{0x10, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd27, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd28, 0x00},
{0x24, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd29, 0x00},
{0x10, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd30, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd31, 0x00},
{0xc, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd32, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd33, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd34, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd35, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd36, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd37, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd38, 0x00},
{0x40, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd39, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd40, 0x00},
{0x40, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd41, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd42, 0x00},
{0x40, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd43, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd44, 0x00},
{0xc, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd45, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd46, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd47, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd48, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd49, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd50, 0x50},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_on_cmd51, 0x00}
};
#define BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_ON_COMMAND 52


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd1[] = {
    0x04, 0x00, 0x39, 0xC0,
    0xB9, 0x83, 0x11, 0x2A,
   };


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd2[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xD9, 0x00, 0xFF, 0xFF};


static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd3[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_command[] = {
{0x4, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd0, 0x32},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd1, 0x00},
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd2, 0x00},
{0x4, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_off_cmd3, 0x96}
};
#define BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_OFF_COMMAND 4


static struct command_state bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_lane_config = {
        3, 0, 1, 1, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_timings[]= {
        0x21, 0x1E, 0x06, 0x08, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x08, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x08, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x1E, 0x06, 0x08, 0x04, 0x03, 0x04, 0xA0,
			0x21, 0x15, 0x06, 0x07, 0x04, 0x03, 0x04, 0xA0 
};

static struct panel_timing bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_timing_info = {
        0, 4, 0x0C, 0x26 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_reset_seq = {
    { 1, 0, 1, }, { 2, 2, 50, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_backlight = {
        2, 11, 2047, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 2, 0, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_dsi_pll_type  = DSI_PLL_TYPE_THULIUM;

int bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_mipi_signature  = 0xffff;

static const uint32_t bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_regulator_setting[]= {
        0x1d, 0x1d, 0x1d, 0x1d, 0x1d 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 64, 0, 0, 61, 0, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5500000, 5500000, 100, 20, 0, 
        0, 0, 0, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_panel_misc_info = {
        0, 0, 2, 0x01, 0x01, 0x01, 0x01, 0, 1, 0, 1, 0, 1 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_panel_delay_ctrl = {
        0, 5, 0, 2, 3, 0, 1, 5, 0, 0, 0, 0, 20, 0, 50 
};

static char bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_backlight_cmd0[] = {
    0x03, 0x00, 0x39, 0xC0,
    0x51, 0x00, 0x00, 0xFF};




static struct mipi_dsi_cmd bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_backlight_command[] = {
{0x8, bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_backlight_cmd0, 0x00}
};
#define BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_bias_ic_array[0];
 
#define BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * bkk_l23hn_vb_ofilm_csot_hx83112a_6p26_720p_video_backlight_ic_array[0];
 
#define BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_BKK_L23HN_VB_OFILM_CSOT_HX83112A_6P26_720P_VIDEO_H_*/
