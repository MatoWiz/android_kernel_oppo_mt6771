/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_GAUGE_H_
#define _OPLUS_GAUGE_H_

struct oplus_gauge_operations {
int (*get_batt_mvolts)(void);
int (*get_batt_current)(void);
int (*get_batt_temperature)(void);
int (*is_batt_present)(void);
int (*is_batt_temp_normal)(void);
int (*is_batt_volt_normal)(void);
int (*get_battery_soc)(void);
int (*get_batt_fcc)(void);
int (*get_batt_soh)(void);
int (*get_batt_cc)(void);
int (*get_batt_authenticate)(void);
int (*set_battery_full)(bool full);
int (*get_prev_batt_fcc)(void);
int (*get_prev_battery_mvolts)(void);
int (*get_prev_battery_soc)(void);
int (*get_prev_battery_temperature)(void);
};

struct oplus_gauge_chip {
struct oplus_gauge_operations *gauge_ops;
};

static inline int oplus_gauge_get_batt_current(void) { return 0; }
static inline int oplus_gauge_get_batt_temperature(void) { return 250; }
static inline bool oplus_gauge_check_chip_is_null(void) { return false; }
static inline bool oplus_gauge_ic_chip_is_null(void) { return false; }
static inline int oplus_gauge_get_batt_authenticate(void) { return 1; }
static inline void oplus_gauge_init(struct oplus_gauge_chip *chip) { (void)chip; }

#endif
