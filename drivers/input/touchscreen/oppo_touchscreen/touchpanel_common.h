/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_TOUCHSCREEN_TOUCHPANEL_COMMON_H_
#define _OPPO_TOUCHSCREEN_TOUCHPANEL_COMMON_H_

#include <linux/types.h>
#include <linux/pinctrl/consumer.h>
#include <soc/oppo/device_info.h>

#define MAX_FW_NAME_LENGTH 128

struct fw_update_info {
	unsigned char *firmware_data;
	unsigned int firmware_size;
};

struct panel_info {
	int project_num;
	int *platform_support_project;
	int *platform_support_project_dir;
	const char **platform_support_commandline;
	int tp_type;
	char chip_name[32];
	char fw_name[MAX_FW_NAME_LENGTH];
	char *test_limit_name;
	char *extra;
	struct manufacture_info manufacture_info;
	struct fw_update_info firmware_headfile;
	struct fw_update_info fw_update_app_support;
};

struct hw_resource {
	int TX_NUM;
	int RX_NUM;
	struct pinctrl *pinctrl;
	struct pinctrl_state *pin_set_high;
	struct pinctrl_state *pin_set_low;
};

#endif
