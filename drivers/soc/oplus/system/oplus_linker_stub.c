// SPDX-License-Identifier: GPL-2.0
#include <linux/types.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/cpumask.h>
#include <linux/fs.h>
#include <linux/alarmtimer.h>
#include <linux/device.h>
#include <linux/power_supply.h>
#include <linux/skbuff.h>
#include <linux/net.h>
#include <net/sock.h>

struct charger_device;
struct charger_ops;
struct charger_properties;
struct gauge_device;
struct gauge_ops;
struct gauge_properties;
struct mtk_battery;
struct fuel_gauge_custom_data {
	int _stub;
};

struct charger_device *
__weak charger_device_register(const char *name, struct device *dev, void *devdata,
			       const struct charger_ops *ops,
			       const struct charger_properties *props)
{
	return NULL;
}

void __weak charger_device_unregister(struct charger_device *chg_dev)
{
}

int __weak charger_dev_notify(struct charger_device *chg_dev, int event)
{
	return 0;
}

int __weak charger_dev_kick_wdt(struct charger_device *chg_dev)
{
	return 0;
}

struct charger_device *__weak get_charger_by_name(const char *name)
{
	return NULL;
}

int __weak mtk_chr_is_charger_exist(unsigned char *exist)
{
	if (exist)
		*exist = 0;
	return 0;
}

bool __weak upmu_is_chr_det(void)
{
	return false;
}

unsigned int __weak get_eng_version(void)
{
	return 0;
}

unsigned int __weak get_project(void)
{
	return 0;
}

unsigned int __weak is_project(int project)
{
	return 0;
}

int32_t __weak get_Operator_Version(void)
{
	return 0;
}

bool __weak oppo_daily_build(void)
{
	return false;
}

int32_t __weak get_PCB_Version(void)
{
	return 0;
}

void __weak update_user_tasklist(struct task_struct *tsk)
{
}

void __weak sched_assist_target_comm(struct task_struct *task)
{
}

void __weak ohm_schedstats_record(int sched_type, struct task_struct *task, u64 delta_ms)
{
}

bool __weak is_sf(struct task_struct *p)
{
	return false;
}

void __weak drop_ux_task_cpus(struct task_struct *p, struct cpumask *lowest_mask)
{
}

void __weak kick_min_cpu_from_mask(struct cpumask *lowest_mask)
{
}

bool __weak test_task_ux(struct task_struct *task)
{
	return false;
}

bool __weak is_special_entry(struct dentry *dentry, const char *special_proc)
{
	return false;
}

const struct file_operations __weak proc_static_ux_operations;

int __weak wakeup_reasons_statics(const char *irq_name, int choose_flag)
{
	return 0;
}

void __weak alarmtimer_suspend_flag_set(void)
{
}

void __weak alarmtimer_suspend_flag_clear(void)
{
}

void __weak alarmtimer_busy_flag_set(void)
{
}

void __weak alarmtimer_wakeup_count(struct alarm *alarm)
{
}

void __weak wakeup_get_start_time(void)
{
}

void __weak wakeup_get_end_hold_time(void)
{
}

int __weak bat_get_debug_level(void)
{
	return 0;
}

int __weak gauge_enable_interrupt(int intr_number, int en)
{
	return 0;
}

struct fuel_gauge_custom_data __weak fg_cust_data;

struct mtk_battery *__weak get_mtk_battery(void)
{
	return NULL;
}

int __weak battery_get_charger_zcv(void)
{
	return 0;
}

int __weak fg_get_battery_temperature_for_zcv(void)
{
	return 0;
}

bool __weak is_fg_disabled(void)
{
	return true;
}

void __weak set_hw_ocv_unreliable(bool _flag_unreliable)
{
}

bool __weak gauge_get_current(int *bat_current)
{
	if (bat_current)
		*bat_current = 0;
	return false;
}

int __weak gauge_get_average_current(bool *valid)
{
	if (valid)
		*valid = false;
	return 0;
}

int __weak gauge_get_ptim_current(int *ptim_current, bool *is_charging)
{
	if (ptim_current)
		*ptim_current = 0;
	if (is_charging)
		*is_charging = false;
	return 0;
}

int __weak gauge_get_nag_vbat(void)
{
	return 0;
}

bool __weak is_battery_init_done(void)
{
	return false;
}

bool __weak is_kernel_power_off_charging(void)
{
	return false;
}

struct gauge_device *__weak gauge_device_register(const char *name,
		struct device *parent, void *devdata, const struct gauge_ops *ops,
		const struct gauge_properties *props)
{
	return NULL;
}

bool __weak oplus_vooc_get_fastchg_started(void)
{
	return false;
}

int __weak oplus_vooc_get_adapter_update_status(void)
{
	return 0;
}

void __weak oplus_vooc_reset_fastchg_after_usbout(void)
{
}

bool __weak oplus_vooc_get_fastchg_to_normal(void)
{
	return false;
}

bool __weak oplus_vooc_get_fastchg_to_warm(void)
{
	return false;
}

void __weak oplus_chg_set_chargerid_switch_val(int val)
{
}

void __weak oplus_chg_clear_chargerid_info(void)
{
}

bool __weak oplus_chg_wake_update_work(void)
{
	return false;
}

void __weak oplus_chg_set_otg_online(bool online)
{
}

bool __weak oplus_wake_up_usbtemp_thread(void)
{
	return false;
}

void __weak oplus_chg_set_camera_on(bool val)
{
}

void __weak oplus_chg_set_camera_status(bool val)
{
}

bool __weak oplus_check_socket_in_blacklist(int is_input, struct socket *sock)
{
	return false;
}

void __weak oplus_match_ipa_ip_wakeup(int type, struct sk_buff *skb)
{
}

void __weak oplus_match_ipa_tcp_wakeup(int type, struct sock *sk)
{
}

void __weak oplus_ipa_schedule_work(void)
{
}

void __weak oplus_match_tcp_output(struct sock *sk)
{
}

void __weak oplus_match_tcp_input_retrans(struct sock *sk)
{
}

int __weak g_chr_type;
int __weak charger_ic_flag;

void __weak oppo_init_sensor_state(void)
{
}

int __weak set_shutdown_cond(int shutdown_cond)
{
	return 0;
}

int __weak bq24190_otg_enable(void)
{
	return 0;
}

int __weak bq24190_otg_disable(void)
{
	return 0;
}

int __weak bq25890h_otg_enable(void)
{
	return 0;
}

int __weak bq25890h_otg_disable(void)
{
	return 0;
}

int __weak bq25601d_otg_enable(void)
{
	return 0;
}

int __weak bq25601d_otg_disable(void)
{
	return 0;
}

MODULE_LICENSE("GPL v2");
