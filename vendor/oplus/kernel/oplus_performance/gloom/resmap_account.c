// SPDX-License-Identifier: GPL-2.0

#include <linux/resmap_account.h>

static unsigned long resmap_event[RESMAP_EVENT_MAX];

void count_resmap_event(int item)
{
	if (item >= 0 && item < RESMAP_EVENT_MAX)
		resmap_event[item]++;
}
