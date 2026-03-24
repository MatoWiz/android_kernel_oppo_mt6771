/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_MUTEX_H_
#define _UIFIRST_SCHED_MUTEX_H_

#include <linux/list.h>

struct mutex;
struct task_struct;

static inline void mutex_list_add(struct task_struct *task, struct list_head *entry,
  struct list_head *head, struct mutex *lock)
{
list_add_tail(entry, head);
}

static inline void mutex_set_inherit_ux(struct mutex *lock, struct task_struct *task)
{
}

static inline void mutex_unset_inherit_ux(struct mutex *lock, struct task_struct *task)
{
}

#endif /* _UIFIRST_SCHED_MUTEX_H_ */
