/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_FUTEX_H_
#define _UIFIRST_SCHED_FUTEX_H_

struct task_struct;

static inline void futex_set_inherit_ux_refs(struct task_struct *owner,
     struct task_struct *task)
{
}

static inline void futex_unset_inherit_ux_refs(struct task_struct *task, int refs)
{
}

#endif /* _UIFIRST_SCHED_FUTEX_H_ */
