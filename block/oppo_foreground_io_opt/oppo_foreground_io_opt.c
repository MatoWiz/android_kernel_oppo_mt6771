// SPDX-License-Identifier: GPL-2.0
#include <linux/blkdev.h>

struct request *smart_peek_request(struct request_queue *q)
{
	if (!q || list_empty(&q->queue_head))
		return NULL;

	return list_entry_rq(q->queue_head.next);
}
