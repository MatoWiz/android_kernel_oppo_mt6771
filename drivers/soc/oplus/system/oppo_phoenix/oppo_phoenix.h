/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_PHOENIX_H_
#define _OPPO_PHOENIX_H_

enum phx_boot_stage {
	KERNEL_MM_INIT_DONE = 0,
	KERNEL_LOCAL_IRQ_ENABLE,
	KERNEL_DELAYACCT_INIT_DONE,
	KERNEL_DRIVER_INIT_DONE,
	KERNEL_DO_INITCALLS_DONE,
	KERNEL_INIT_DONE,
	KERNEL_DO_BASIC_SETUP_DONE,
};

enum phx_boot_error {
	ERROR_KERNEL_PANIC = 1,
	ERROR_HWT,
};

extern void (*phx_set_boot_stage)(enum phx_boot_stage stage);
int phx_is_phoenix_boot_completed(void);
int phx_is_system_boot_completed(void);
void phx_set_boot_error(enum phx_boot_error error);

#endif /* _OPPO_PHOENIX_H_ */
