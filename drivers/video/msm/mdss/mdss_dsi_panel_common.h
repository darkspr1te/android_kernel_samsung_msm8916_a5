/* Copyright (c) 2012-2014, The Linux Foundation. All rights reserved. * * This program is free software; you can redistribute it and/or modify * it under the terms of the GNU General Public License version 2 and * only version 2 as published by the Free Software Foundation. * * This program is distributed in the hope that it will be useful, * but WITHOUT ANY WARRANTY; without even the implied warranty of * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the * GNU General Public License for more details. */
#ifndef MDSS_HX8394C_DSI_PANEL_H#define MDSS_HX8394C_DSI_PANEL_H
#include "mdss_panel.h"#include "mdss_fb.h"#include "smart_dimming.h"
#ifdef CONFIG_FB_MSM_MIPI_SAMSUNG_QHD_VIDEO_PT_PANEL
#include "smart_mtp_s6e88a.h"
#endif

enum {
	MIPI_RESUME_STATE,
	MIPI_SUSPEND_STATE,
};
enum mdss_cmd_list {#if defined(CONFIG_CABC_TUNING)
	PANEL_BRIGHT_CTRL,
	PANEL_CABC_DISABLE,	PANEL_CABC_ENABLE,#elif defined(CONFIG_FB_MSM_MIPI_SAMSUNG_QHD_VIDEO_PT_PANEL)
	PANEL_BRIGHT_CTRL,
	PANEL_DISPLAY_ON_SEQ,
	PANEL_DISPLAY_OFF_SEQ,
	PANEL_DISPLAY_ON,
	PANEL_DISPLAY_OFF,
	PANEL_MTP_ENABLE,
	PANEL_MTP_DISABLE,
	PANEL_ACL_OFF,
#endif};
struct cmd_map {
	int *bl_level;
	int *cmd_idx;
	int size;
};

struct candella_lux_map {
	int *lux_tab;
	int *cmd_idx;
	int lux_tab_size;
	int bkl[256];
};
struct panel_hrev {	char *name;	int panel_code;};
enum {
	PANEL_HX8394C_720P_VIDEO,	PANEL_NT35592_720P_VIDEO,	PANEL_SAMSUNG_QHD_VIDEO,
	MAX_PANEL_LIST,};
#endif	/* MDSS_HX8394C_DSI_PANEL_H */