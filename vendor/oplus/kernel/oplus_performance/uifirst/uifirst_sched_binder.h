/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_BINDER_H_
#define _UIFIRST_SCHED_BINDER_H_

struct task_struct;

static inline void binder_set_inherit_ux(struct task_struct *task, struct task_struct *from)
{
}

static inline void binder_unset_inherit_ux(struct task_struct *task)
{
}

#endif /* _UIFIRST_SCHED_BINDER_H_ */
