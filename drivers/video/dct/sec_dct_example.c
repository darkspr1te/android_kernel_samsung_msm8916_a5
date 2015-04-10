/*
 * Samsung Mobile VE Group.
 *
 * drivers/video/dct/sec_dct_example.c
 *
 * Copyright (C) 2014, Samsung Electronics.
 *
 * This program is free software. You can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation
 */


/*============ Fixed Code Area !===============*/
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/platform_device.h>
#include <linux/string.h>
#include <linux/sec_dct.h>
/*========================================*/

/****************************************************************/
/* Define this data in accordance with the specification of each BB platform		*/
struct sec_dct_data_t {
	u8 variable1;		// u8 = unsigned char (32bit arm)
	u32 variable2;		// u32 = unsigned int (32bit arm)
	u16 variable3;		// u16 = unsigned short (32bit arm)

	u8 array[3];
	u64 array2[2];		// u64 = unsigned long long (32bit arm)
};
/****************************************************************/


/*============ Fixed Code Area !===============*/
struct sec_dct_data_t dct_data;
struct sec_dct_data_t dct_data_org;
static bool bdct_data_backup = false;

static int dct_setAllData(char *recv_data);
void dct_applyData(struct fb_info *info);
void dct_finish_applyData(void);

struct sec_dct_info_t dct_info = {
	.data = &dct_data,
	.state = DCT_STATE_NODATA,
	.tunned = false,
	.enabled = false,
	.log = NULL,
	.set_allData = dct_setAllData,
	.applyData = dct_applyData,
	.finish_applyData = dct_finish_applyData,
};

#define DCT_SETDATA(name, type, data_addr, data_size)				\
	if((ret = dct_setData(name, type, data_addr, data_size))) {		\
		goto error;											\
	}
/*========================================*/


/****************************************************************/
/* Define this function in accordance with the specification of each BB platform      */
static int dct_setAllData(char *recv_data)
{
	int ret = 0;

	pr_info("[DCT][%s] ++\n", __func__);

	/****************************************************************/
	/* Define this area! Order is very important!!							*/
	/* ex) DCT_SETDATA(variable name string, variable type, variable address, variable data size) */

	DCT_SETDATA("variable1", DCT_TYPE_U8, &dct_data.variable1, sizeof(dct_data.variable1));
	DCT_SETDATA("variable2", DCT_TYPE_U32, &dct_data.variable2, sizeof(dct_data.variable2));
	DCT_SETDATA("variable3", DCT_TYPE_U16, &dct_data.variable3, sizeof(dct_data.variable3));

	DCT_SETDATA("array_0", DCT_TYPE_U8, &dct_data.array[0], sizeof(dct_data.array[0]));
	DCT_SETDATA("array_1", DCT_TYPE_U8, &dct_data.array[1], sizeof(dct_data.array[1]));
	DCT_SETDATA("array_2", DCT_TYPE_U8, &dct_data.array[2], sizeof(dct_data.array[2]));
	DCT_SETDATA("array2[0]", DCT_TYPE_U64, &dct_data.array2[0], sizeof(dct_data.array2[0]));
	DCT_SETDATA("array2[1]", DCT_TYPE_U64, &dct_data.array2[1], sizeof(dct_data.array2[1]));
	/****************************************************************/

error:
	pr_info("[DCT][%s] --(%d)\n", __func__, ret);

	return ret;
}
/****************************************************************/



/****************************************************************/
/* Define this function in accordance with the specification of each BB platform      */
void dct_applyData(struct fb_info *info)
{
	bool bsetting = false;

	struct user_info *uinfo = info->par;		// example

	DCT_LOG("[DCT][%s] ++\n", __func__);

	if (!bdct_data_backup) {
		/************************************************/
		/* Original Data Backup								*/
		/* This routine must be implemeted					*/
		/************************************************/
		dct_data_org.variable1 = uinfo->variable1;
		dct_data_org.variable2 = uinfo->variable2;
		dct_data_org.variable3 = uinfo->variable3;
		dct_data_org.array[0] = uinfo->lcdc.array[0];
		dct_data_org.array[1] = uinfo->lcdc.array[1];
		dct_data_org.array[2] = uinfo->lcdc.array[2];
		dct_data_org.array2[0] = uinfo->lcdc.array2[0];
		dct_data_org.array2[1] = uinfo->lcdc.array2[1];
		/************************************************/

		bdct_data_backup = true;		// important !
	}
	if (dct_info.state == DCT_STATE_DATA) {
		/************************************************/
		/* Apply The App data (User Customizing Data)			*/
		/* This routine must be implemeted					*/
		/************************************************/
		uinfo->variable1 = dct_data.variable1;
		uinfo->variable2 = dct_data.variable2;
		uinfo->variable3 = dct_data.variable3;
		uinfo->lcdc.array[0] = dct_data.array[0];
		uinfo->lcdc.array[1] = dct_data.array[1];
		uinfo->lcdc.array[2] = dct_data.array[2];
		uinfo->lcdc.array2[0] = dct_data.array2[0];
		uinfo->lcdc.array2[1] = dct_data.array2[1];
		/************************************************/

		dct_info.tunned = true;
		bsetting = true;
		pr_info("[DCT][%s] set data of dct application!\n", __func__);
	}
	else if (dct_info.state == DCT_STATE_NODATA && dct_info.tunned) {
		/************************************************/
		/* Apply Backuped Original Kernel data					*/
		/* This routine must be implemeted					*/
		/************************************************/
		uinfo->variable1 = dct_data_org.variable1;
		uinfo->variable2 = dct_data_org.variable2;
		uinfo->variable3 = dct_data_org.variable3;
		uinfo->lcdc.array[0] = dct_data_org.array[0];
		uinfo->lcdc.array[1] = dct_data_org.array[1];
		uinfo->lcdc.array[2] = dct_data_org.array[2];
		uinfo->lcdc.array2[0] = dct_data_org.array2[0];
		uinfo->lcdc.array2[1] = dct_data_org.array2[1];		
		/************************************************/

		dct_info.tunned = false;
		bsetting = true;
		pr_info("[DCT][%s] set original data!\n", __func__);
	}
	else { 	// nothing
		;
	}
	/************************************************/

	if (bsetting) {
		/************************************************/
		/* Print Set Kernel data (Optional)					*/
		/************************************************/		
		pr_info("[DCT] variable1 = %hhu, variable2 = %u,  variable3 = %hu\n",
			dct_data.variable1, dct_data.variable2, dct_data.variable3);
		/************************************************/
	}

	return;
}
/****************************************************************/


/*============ Fixed Code Area !===============*/
void dct_finish_applyData(void)
{
	pr_info("[DCT][%s] +-\n", __func__);

	if (dct_info.state == DCT_STATE_DATA)
		dct_info.state = DCT_STATE_APPLYED;
	return;
}

static struct platform_device sec_dct_device = {
	.name	= "sec_dct",
	.id		= -1,
	.dev.platform_data = &dct_info,
};

static struct platform_device *sec_dct_devices[] __initdata = {
	&sec_dct_device,
};

static int __init sec_dct_device_init(void)
{
	return platform_add_devices(
		sec_dct_devices, ARRAY_SIZE(sec_dct_devices));
}
arch_initcall(sec_dct_device_init);
/*========================================*/


