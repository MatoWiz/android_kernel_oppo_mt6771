/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OUFS_UFS_MTK_H
#define _OUFS_UFS_MTK_H

static inline int ufs_mtk_deepidle_hibern8_check(void)
{
	return 1;
}

static inline void ufs_mtk_deepidle_leave(void)
{
}

#endif /* _OUFS_UFS_MTK_H */
