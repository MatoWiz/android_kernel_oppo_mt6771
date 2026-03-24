// SPDX-License-Identifier: GPL-2.0
#include <linux/export.h>

void oplus_root_reboot(int code)
{
}
EXPORT_SYMBOL(oplus_root_reboot);

#ifdef CONFIG_OPLUS_KEVENT_UPLOAD
void oplus_root_check_succ(unsigned long uid, unsigned long euid,
			   unsigned long fsuid, unsigned long syscall_nr)
{
}
EXPORT_SYMBOL(oplus_root_check_succ);

int is_unlocked(void)
{
	return 0;
}
EXPORT_SYMBOL(is_unlocked);
#endif
