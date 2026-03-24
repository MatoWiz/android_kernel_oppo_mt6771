/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _UIFIRST_SCHED_COMMON_H_
#define _UIFIRST_SCHED_COMMON_H_

#include <linux/types.h>

struct rq;
struct task_struct;
struct sched_entity;
struct cfs_rq;

static inline void ux_init_cpu_data(void)
{
}

static inline void ux_init_rq_data(struct rq *rq)
{
}

static inline void place_entity_adjust_ux_task(struct cfs_rq *cfs_rq,
					       struct sched_entity *se,
					       int initial)
{
}

static inline bool is_heavy_load_task(struct task_struct *task)
{
	return false;
}

static inline bool should_ux_preempt_wakeup(struct task_struct *p,
					    struct task_struct *curr)
{
	return false;
}

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
