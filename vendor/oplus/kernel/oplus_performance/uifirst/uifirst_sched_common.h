/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_COMMON_H_
#define _UIFIRST_SCHED_COMMON_H_

#include <linux/types.h>

struct rq;
struct task_struct;
struct sched_entity;

static inline bool test_task_ux(struct task_struct *task)
{
return false;
}

static inline bool test_set_dynamic_ux(struct task_struct *task)
{
return false;
}

static inline void enqueue_ux_thread(struct rq *rq, struct task_struct *task)
{
}

static inline void dequeue_ux_thread(struct rq *rq, struct task_struct *task)
{
}

static inline void pick_ux_thread(struct rq *rq, struct task_struct **task,
  struct sched_entity **se)
{
}

static inline bool is_heavy_ux_task(struct task_struct *task)
{
return false;
}

static inline bool test_ux_task_cpu(int cpu)
{
return false;
}

static inline bool test_ux_prefer_cpu(struct task_struct *task, int cpu)
{
return false;
}

static inline void find_ux_task_cpu(struct task_struct *task, int *target_cpu)
{
}

#endif /* _UIFIRST_SCHED_COMMON_H_ */
