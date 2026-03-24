/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_VOOC_H_
#define _OPLUS_VOOC_H_

#define FASTCHG_CHARGER_TYPE_UNKOWN 0
#define NORMAL_CHARGER_MODE 0

static inline bool oplus_vooc_check_chip_is_null(void) { return false; }
static inline bool oplus_vooc_get_fastchg_started(void) { return false; }
static inline bool oplus_vooc_get_fastchg_dummy_started(void) { return false; }
static inline int oplus_vooc_get_fast_chg_type(void) { return FASTCHG_CHARGER_TYPE_UNKOWN; }
static inline void oplus_vooc_switch_mode(int mode) { (void)mode; }
static inline void oplus_vooc_reset_mcu(void) {}
static inline bool oplus_chg_show_vooc_logo_ornot(void) { return false; }
static inline void oplus_chg_set_chargerid_switch_val(int val) { (void)val; }

#endif
