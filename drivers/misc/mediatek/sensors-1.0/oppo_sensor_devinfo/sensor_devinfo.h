/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_SENSOR_DEVINFO_H
#define _OPPO_SENSOR_DEVINFO_H

struct cali_data {
	int acc_data[3];
	int gyro_data[3];
	int ps_cali_data[6];
	int als_factor;
};

enum {
	UNDER_SCREEN_LIGHT_TYPE = 1,
};

static inline int get_sensor_parameter(struct cali_data *data)
{
	if (!data)
		return -1;
	return 0;
}

static inline void update_sensor_parameter(void)
{
}

static inline int get_light_sensor_type(void)
{
	return 0;
}

static inline int oppo_send_factory_mode_cmd_to_hub(int sensor_type,
		int enable, int *result)
{
	if (result)
		*result = 0;
	return 0;
}

#endif /* _OPPO_SENSOR_DEVINFO_H */
