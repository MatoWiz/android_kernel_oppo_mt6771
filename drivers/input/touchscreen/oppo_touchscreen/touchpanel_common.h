/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_TOUCHSCREEN_TOUCHPANEL_COMMON_H_
#define _OPPO_TOUCHSCREEN_TOUCHPANEL_COMMON_H_

#include <linux/types.h>

#define MAX_FW_NAME_LENGTH 128

struct manufacture_info {
char *version;
char *manufacture;
};

struct fw_update_info {
char *fw_path;
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
struct fw_update_info fw_update_app_support;
};

struct hw_resource {
int TX_NUM;
int RX_NUM;
};

#endif
