/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_RWSEM_H_
#define _UIFIRST_SCHED_RWSEM_H_

#include <linux/list.h>

struct rw_semaphore;
struct task_struct;

static inline void rwsem_list_add(struct task_struct *task, struct list_head *entry,
  struct list_head *head)
{
list_add_tail(entry, head);
}

static inline void rwsem_set_inherit_ux(struct task_struct *owner,
 struct task_struct *task,
 struct task_struct *waiter,
 struct rw_semaphore *sem)
{
}

static inline void rwsem_unset_inherit_ux(struct rw_semaphore *sem, struct task_struct *task)
{
}

#endif /* _UIFIRST_SCHED_RWSEM_H_ */
