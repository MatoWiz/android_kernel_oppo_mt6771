// SPDX-License-Identifier: GPL-2.0
#include <linux/export.h>
#include <linux/errno.h>
#include <linux/netlink.h>
#include <linux/skbuff.h>
#include <linux/oplus_kevent.h>

int oplus_mount_block(const char __user *dir_name, unsigned long flags)
{
return 0;
}
EXPORT_SYMBOL(oplus_mount_block);

int oplus_exec_block(struct file *file)
{
return 0;
}
EXPORT_SYMBOL(oplus_exec_block);

int kevent_send_to_user(struct kernel_packet_info *userinfo)
{
return -EOPNOTSUPP;
}
EXPORT_SYMBOL(kevent_send_to_user);

void kernel_kevent_receive(struct sk_buff *__skbbr)
{
}
EXPORT_SYMBOL(kernel_kevent_receive);
