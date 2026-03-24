/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_OPPO_HEALTHINFO_OPPO_JANK_MONITOR_H_
#define _LINUX_OPPO_HEALTHINFO_OPPO_JANK_MONITOR_H_

#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/types.h>
#include <linux/seq_file.h>

struct oppo_jank_monitor_info {
u64 reserved;
};

static inline int proc_jank_info_init(struct proc_dir_entry *pde)
{
return 0;
}

static inline int proc_jank_info_open(struct inode *inode, struct file *file)
{
return -ENODEV;
}

#endif
