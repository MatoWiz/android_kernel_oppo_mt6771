/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_MULTI_FREEAREA_H_
#define _OPLUS_MULTI_FREEAREA_H_

#include <linux/mmzone.h>

static inline unsigned int page_to_flc(struct page *page)
{
	return 0;
}

static inline unsigned int ajust_flc(unsigned int flc, unsigned int order)
{
	return flc;
}

static inline void list_sort_add(struct page *page, struct zone *zone,
				 unsigned int order, int migratetype)
{
	list_add(&page->lru, &zone->free_area[0][order].free_list[migratetype]);
}

static inline void ajust_zone_label(struct zone *zone)
{
	int flc;

	for (flc = 0; flc < FREE_AREA_COUNTS; flc++) {
		zone->zone_label[flc].label = 0;
		zone->zone_label[flc].segment = 0;
	}
}

#endif /* _OPLUS_MULTI_FREEAREA_H_ */
