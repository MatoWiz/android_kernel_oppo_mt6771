/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_PROCESS_MM_RECLAIM_H_
#define _OPLUS_PROCESS_MM_RECLAIM_H_

struct mm_walk;

static inline int is_reclaim_should_cancel(struct mm_walk *walk)
{
	return 0;
}

#endif /* _OPLUS_PROCESS_MM_RECLAIM_H_ */
