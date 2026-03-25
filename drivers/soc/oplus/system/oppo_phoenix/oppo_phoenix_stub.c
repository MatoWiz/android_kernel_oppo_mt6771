// SPDX-License-Identifier: GPL-2.0
#include <linux/export.h>
#include "oppo_phoenix.h"

void (*phx_set_boot_stage)(enum phx_boot_stage stage);
EXPORT_SYMBOL(phx_set_boot_stage);

int phx_is_phoenix_boot_completed(void)
{
	return 0;
}
EXPORT_SYMBOL(phx_is_phoenix_boot_completed);

int phx_is_system_boot_completed(void)
{
	return 0;
}
EXPORT_SYMBOL(phx_is_system_boot_completed);

void phx_set_boot_error(enum phx_boot_error error)
{
}
EXPORT_SYMBOL(phx_set_boot_error);
