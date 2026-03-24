/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_RESMAP_ACCOUNT_H_
#define _OPLUS_RESMAP_ACCOUNT_H_

enum {
	RESMAP_ACTION,
	RESMAP_SUCCESS,
	RESMAP_FAIL,
	RESMAP_EVENT_MAX,
};

void count_resmap_event(int item);

#endif /* _OPLUS_RESMAP_ACCOUNT_H_ */
