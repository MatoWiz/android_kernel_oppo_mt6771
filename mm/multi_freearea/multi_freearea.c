// SPDX-License-Identifier: GPL-2.0
#include <linux/mm.h>

bool is_multi_freearea(struct zone *zone)
{
	return false;
}

void set_migratetype_isolate(struct page *page, int migratetype)
{
}

int del_page_from_free_list(struct page *page, struct zone *zone,
    unsigned int order)
{
	return 0;
}

void add_page_to_free_list(struct page *page, struct zone *zone,
   unsigned int order, int migratetype)
{
}

void move_freepages(struct zone *zone,
    struct free_area *from_area,
    struct free_area *to_area)
{
}
