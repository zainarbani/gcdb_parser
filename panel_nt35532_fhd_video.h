/* Copyright (c) 2013-2021, The Linux Foundation. All rights reserved.
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

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT35532_FHD_VIDEO_H_
#define _PANEL_NT35532_FHD_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config nt35532_fhd_video_panel_data = {
	"qcom,mdss_dsi_nt35532_fhd_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 2, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35532_fhd_video_panel_res = {
	1080, 1920, 124, 64, 16, 0, 7, 12, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35532_fhd_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char nt35532_fhd_video_on_cmd0[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFF, 0x01, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd1[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFB, 0x01, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd2[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x08, 0x05, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd3[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFF, 0x05, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd4[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFB, 0x01, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd5[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xD6, 0x22, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd6[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFF, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd7[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFB, 0x01, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd8[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x35, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd9[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x51, 0xFF, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd10[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x53, 0x2C, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd11[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x55, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd12[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xD3, 0x0E, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd13[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xD4, 0x07, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd14[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x11, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_video_on_cmd15[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x29, 0x00, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd nt35532_fhd_video_on_command[] = {
	{0x8, nt35532_fhd_video_on_cmd0, 0x01},
	{0x8, nt35532_fhd_video_on_cmd1, 0x00},
	{0x8, nt35532_fhd_video_on_cmd2, 0x00},
	{0x8, nt35532_fhd_video_on_cmd3, 0x01},
	{0x8, nt35532_fhd_video_on_cmd4, 0x00},
	{0x8, nt35532_fhd_video_on_cmd5, 0x00},
	{0x8, nt35532_fhd_video_on_cmd6, 0x00},
	{0x8, nt35532_fhd_video_on_cmd7, 0x00},
	{0x8, nt35532_fhd_video_on_cmd8, 0x00},
	{0x8, nt35532_fhd_video_on_cmd9, 0x00},
	{0x8, nt35532_fhd_video_on_cmd10, 0x00},
	{0x8, nt35532_fhd_video_on_cmd11, 0x00},
	{0x8, nt35532_fhd_video_on_cmd12, 0x00},
	{0x8, nt35532_fhd_video_on_cmd13, 0x00},
	{0x8, nt35532_fhd_video_on_cmd14, 0x78},
	{0x8, nt35532_fhd_video_on_cmd15, 0x14}
};

#define NT35532_FHD_VIDEO_ON_COMMAND 16


static char nt35532_fhd_videooff_cmd0[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFF, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_videooff_cmd1[] = {
	0x28, 0x00, 0x05, 0x80
};

static char nt35532_fhd_videooff_cmd2[] = {
	0x10, 0x00, 0x05, 0x80
};

static char nt35532_fhd_videooff_cmd3[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFF, 0x00, 0xFF, 0xFF,
};

static char nt35532_fhd_videooff_cmd4[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x4F, 0x01, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd nt35532_fhd_video_off_command[] = {
	{0x8, nt35532_fhd_videooff_cmd0, 0x00},
	{0x4, nt35532_fhd_videooff_cmd1, 0x14},
	{0x4, nt35532_fhd_videooff_cmd2, 0x3C},
	{0x8, nt35532_fhd_videooff_cmd3, 0x00},
	{0x8, nt35532_fhd_videooff_cmd4, 0x14}
};

#define NT35532_FHD_VIDEO_OFF_COMMAND 5


static struct command_state nt35532_fhd_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info nt35532_fhd_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info nt35532_fhd_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration nt35532_fhd_video_lane_config = {
	4, 0, 1, 1, 1, 1
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t nt35532_fhd_video_timings[] = {
	0x7d, 0x25, 0x1d, 0x00, 0x37, 0x33, 0x22, 0x27, 0x1e, 0x03, 0x04, 0x00
};

static struct panel_timing nt35532_fhd_video_timing_info = {
	0, 4, 0x0d, 0x30
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence nt35532_fhd_video_reset_seq = {
	{1, 0, 1, }, {10, 10, 10, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight nt35532_fhd_video_backlight = {
	1, 1, 4095, 1, 1, "PMIC_8941"
};

#endif /*_PANEL_NT35532_FHD_VIDEO_H_*/