/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_FOREGROUND_IO_OPT_H_
#define _OPPO_FOREGROUND_IO_OPT_H_

#include <linux/blkdev.h>

static inline struct request *smart_peek_request(struct request_queue *q)
{
if (!q || list_empty(&q->queue_head))
return NULL;
return list_entry_rq(q->queue_head.next);
}

static inline void fg_bg_max_count_init(struct request_queue *q)
{
if (!q)
return;

q->fg_count = 0;
q->both_count = 0;
q->fg_count_max = 8;
q->both_count_max = 16;
}

static inline ssize_t queue_fg_count_max_show(struct request_queue *q, char *page)
{
if (!q || !page)
return -EINVAL;
return scnprintf(page, PAGE_SIZE, "%d\n", q->fg_count_max);
}

static inline ssize_t queue_fg_count_max_store(struct request_queue *q, const char *page, size_t count)
{
int v = 0;

if (!q || !page)
return -EINVAL;
if (kstrtoint(page, 10, &v) < 0)
return -EINVAL;
if (v < 1)
v = 1;
if (v > 1024)
v = 1024;
q->fg_count_max = v;
if (q->both_count_max < q->fg_count_max)
q->both_count_max = q->fg_count_max;
return count;
}

static inline ssize_t queue_both_count_max_show(struct request_queue *q, char *page)
{
if (!q || !page)
return -EINVAL;
return scnprintf(page, PAGE_SIZE, "%d\n", q->both_count_max);
}

static inline ssize_t queue_both_count_max_store(struct request_queue *q, const char *page, size_t count)
{
int v = 0;

if (!q || !page)
return -EINVAL;
if (kstrtoint(page, 10, &v) < 0)
return -EINVAL;
if (v < 1)
v = 1;
if (v > 1024)
v = 1024;
q->both_count_max = v;
if (q->fg_count_max > q->both_count_max)
q->fg_count_max = q->both_count_max;
return count;
}

#endif
