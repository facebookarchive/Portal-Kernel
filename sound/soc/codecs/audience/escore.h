/*
 * escore.h  --  Audience earSmart Soc Audio driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ESCORE_H
#define _ESCORE_H

#include <linux/cdev.h>
#include <linux/mutex.h>
#include <linux/time.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/firmware.h>
#include <linux/delay.h>
#include <linux/pm.h>
#include <linux/completion.h>
#include <linux/i2c.h>
#include <linux/gpio.h>
#include <linux/platform_device.h>
#include <linux/regulator/consumer.h>
#include <linux/slab.h>
#include <linux/err.h>
#include <sound/core.h>
#include <sound/pcm.h>
#include <sound/pcm_params.h>
#include <sound/soc.h>
#include <sound/soc-dai.h>
#include <sound/soc-dapm.h>
#include <sound/initval.h>
#include <sound/tlv.h>
#include <sound/jack.h>
#include <linux/kthread.h>
#include <linux/device.h>
#include <linux/pm_runtime.h>
#include <linux/pm_wakeup.h>
#include <linux/mutex.h>
#include <linux/spi/spi.h>
#include <linux/of_gpio.h>
#include <linux/wait.h>
#if defined(CONFIG_SND_SOC_ES_SLIM)
#include <linux/slimbus/slimbus.h>
#endif
#include <linux/version.h>
#include <linux/pm.h>
#include "esxxx.h"
#include "escore-uart.h"

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(3, 8, 0))
#define KERNEL_VERSION_3_8_0
#elif (LINUX_VERSION_CODE >= KERNEL_VERSION(3, 4, 0))
#define KERNEL_VERSION_3_4_0
#elif (LINUX_VERSION_CODE >= KERNEL_VERSION(3, 2, 0))
#define KERNEL_VERSION_3_2_0
#endif

#define ES_READ_VE_OFFSET		0x0804
#define ES_READ_VE_WIDTH		4
#define ES_WRITE_VE_OFFSET		0x0800
#define ES_WRITE_VE_WIDTH		4

#define ES_CMD_ACCESS_WR_MAX 9
#define ES_CMD_ACCESS_RD_MAX 9

#define ES_I2S_PORTA		7
#define ES_I2S_PORTB		8
#define ES_I2S_PORTC		9
#define EABORT			0x5555

/* TODO: condition of kernel version or commit code to specific kernels */
#ifdef CONFIG_SLIMBUS_MSM_NGD
#define ES_DAI_ID_BASE	0
#else
#define ES_DAI_ID_BASE	1
#endif

#if defined(CONFIG_SND_SOC_ES_SLIM)
#define DAI_INDEX(xid)		(xid - ES_DAI_ID_BASE)
#else
#define DAI_INDEX(xid)		(xid - ES_I2S_PORTA)
#endif

/*
 * Increment/decrement disable firmware recovery use count
 * Firmware recovery will be performed when use count is ZERO or
 * forced recovery requested in following function:
 *   int escore_fw_recovery(struct escore_priv *escore, int is_forced)
 */
#define INC_DISABLE_FW_RECOVERY_USE_CNT(escore) \
	do { \
		escore->disable_fw_recovery_cnt++; \
		dev_dbg(escore->dev, "%s(%d): fw_cnt++ = %d\n", \
			__func__, __LINE__, escore->disable_fw_recovery_cnt); \
	} while (0)

#define DEC_DISABLE_FW_RECOVERY_USE_CNT(escore) \
	do { \
		if (escore->disable_fw_recovery_cnt) \
			escore->disable_fw_recovery_cnt--; \
		dev_dbg(escore->dev, "%s(%d): fw_cnt-- = %d\n", \
			__func__, __LINE__, escore->disable_fw_recovery_cnt); \
	} while (0)

#define FORCED_FW_RECOVERY_OFF 0
#define FORCED_FW_RECOVERY_ON  1

#define ESCORE_FW_RECOVERY_FORCED_OFF(escore) \
	do { \
		int ret = escore_fw_recovery(escore, FORCED_FW_RECOVERY_OFF); \
		if (ret < 0) \
			pr_err("%s() Firmware recovery failed %d\n", __func__, \
				ret); \
	} while (0)

/* Standard commands used by all chips */

#define ES_SR_BIT			28 /* Suppress Response Bit */
#define ES_SC_BIT			29 /* Stage/Commit bit */
#define ES_SYNC_CMD			0x8000
#define ES_SYNC_POLLING			0x0000
#define ES_SYNC_ACK			0x80000000
#define ES_SUPRESS_RESPONSE		0x1000
#define ES_SET_ALGO_PARAM_ID		0x9017
#define ES_SET_ALGO_PARAM		0x9018

#define ES_SET_EVENT_RESP		0x901A

#define ES_GET_POWER_STATE		0x800f
#define ES_SET_POWER_STATE_CMD		0x8010
#define ES_SET_POWER_STATE		0x9010
#define ES_SET_POWER_STATE_SLEEP	0x0001
#define ES_SET_POWER_STATE_MP_SLEEP	0x0002
#define ES_SET_POWER_STATE_MP_CMD	0x0003
#define ES_SET_POWER_STATE_NORMAL	0x0004
#define ES_SET_POWER_STATE_VS_OVERLAY	0x0005
#define ES_SET_POWER_STATE_VS_LOWPWR	0x0006
#ifdef CONFIG_SND_SOC_ES_VS_STREAMING
#define ES_POWER_STATE_VS_STREAMING	0x0007
#endif
#ifdef CONFIG_SND_SOC_ES_AVOID_REPEAT_FW_DOWNLOAD
#define ES_POWER_STATE_VS_OVERLAP	0x0008
#endif
#define ES_POWER_STATE_AF_OVERLAY	0x000A

#define ES_SYNC_MAX_RETRY 5
#define ES_SBL_RESP_TOUT	500 /* 500ms */
#define MAX_RETRY_TO_SWITCH_TO_LOW_POWER_MODE 5

#define ES_NOT_READY		0x00000000
#define ES_ILLEGAL_CMD		0xFFFF0000

#define ES_EVENT_RESPONSE_CMD	0x801a
#define ES_INT_OSC_MEASURE_START	0x9070
#define ES_INT_OSC_MEASURE_STATUS	0x8071

#define ES_INT_OSC_MEASURE_START_VS	0x905d
#define ES_INT_OSC_MEASURE_QUERY_VS	0x805E
#define ES_GET_POWER_LEVEL		0x8012
#define ES_ASR_PRESET			0x1bbc

/*
 * Codec Interrupt event type
 */
#define ES_NO_EVENT			0x0000
#define ES_CODEC_INTR_EVENT		0x0001
#define ES_VS_INTR_EVENT		0x0002
/* Software event, which is not generated by chip */
#define ES_RECONFIG_INTR_EVENT		0x0020
#define ES_MASK_INTR_EVENT		0x0000FFFF
/* PCR_68_Extended event type */
#ifdef CONFIG_SND_SOC_ES817_PCR_68_EXTENDED
#define ES_MASK_KW_END_INTR_EVENT	0x0020
#define ES_MASK_KW_ID_INTR_EVENT	0xFF00
#define ES_KW_ID_ONE_INTR_EVENT		0x0100
#endif

#define ES_SYNC_POLLING                0x0000
#define ES_SYNC_INTR_ACITVE_LOW        0x0001
#define ES_SYNC_INTR_ACITVE_HIGH       0x0002
#define ES_SYNC_INTR_FALLING_EDGE      0x0003
#define ES_SYNC_INTR_RISING_EDGE       0x0004

#define ES_WDB_CMD			0x802f
#define ES_RDB_CMD			0x802e


#define ES_SET_PRESET			0x9031
#define ES_SET_CVS_PRESET		0x906F
#define ES_SET_VS_KW_LENGTH		0x902C
#define ESCORE_GET_KEYWORD_OVERRUN_ERROR		0x802B
#define ES_VS_PROCESSING_MOE		0x5003
#define ES_VS_DETECT_KEYWORD		0x0000
#define ES_SET_SYNC_WORDS		0x8005

#define ES_READ_DATA_BLOCK				0x802E
#define ES_WRITE_DATA_BLOCK				0x802F

#define ES_SET_SMOOTH_MUTE				0x804E
#define ES_SMOOTH_MUTE_ZERO				0x0000

#define ES_SET_POWER_LEVEL				0x8011

#define DBG_ID       13
#define DBG_BLK_SIZE (3 * 1024)
#if (DBG_BLK_SIZE > PAGE_SIZE)
#error "Making DBG_BLK_SIZE greater than PAGE_SIZE breaks sysfs read support"
#endif

enum {
	ES_POWER_LEVEL_DISABLE = 0,
	ES_POWER_LEVEL_MIN = 1,
	ES_POWER_LEVEL_1 = ES_POWER_LEVEL_MIN,
	ES_POWER_LEVEL_2,
	ES_POWER_LEVEL_3,
	ES_POWER_LEVEL_4,
	ES_POWER_LEVEL_5,
	ES_POWER_LEVEL_6,
	ES_POWER_LEVEL_MAX = ES_POWER_LEVEL_6,
};

#define ES_WAKEUP_TIME				30
#define ES_PM_CLOCK_STABILIZATION		1 /* 1ms */
#define ES_RESP_TOUT_MSEC			20 /* 20ms */
#define ES_RESP_TOUT				20000 /* 20ms */
#define ES_RESP_POLL_TOUT			4000  /*  4ms */
#define ES_FIN_TOUT				10000 /* 10ms */
#define ES_FIN_POLL_TOUT			2000  /* 2ms */
#define ES_API_INTR_TOUT_MSEC			100 /* 100ms */
#define ES_MAX_RETRIES		\
			(ES_RESP_TOUT / ES_RESP_POLL_TOUT)
#define ES_MAX_FIN_RETRIES		\
			(ES_FIN_TOUT / ES_FIN_POLL_TOUT)

#define ES_SPI_RETRY_DELAY	5000	/*  5ms */
#define ES_SPI_MAX_RETRIES	20	/* Number of retries */
#define ES_SPI_CONT_RETRY	5	/* Retry for read without delay */
#define ES_SPI_1MS_DELAY	1000	/*1 ms*/

#define ES_UART_WAKE_CMD	0xa

#define ES_PCM_PORT_SLAVE	0x0
#define ES_PCM_PORT_MASTER	0x1

#define ES_DATA_RIGHT_J		0x0
#define ES_DATA_LEFT_J		0x1

#define ES_PS_NORMAL (ES_GET_POWER_STATE << 16 | ES_SET_POWER_STATE_NORMAL)
#define ES_PS_OVERLAY (ES_GET_POWER_STATE << 16 | ES_SET_POWER_STATE_VS_OVERLAY)

#define ES_DIGITAL_GAIN_MAX_NUM 32 /* Maximum number of digital gain allowed */

struct escore_digital_gain{
	u32 path_id;
	u32 digital_gain;
};


enum {
	SBL,
	STANDARD,
	VOICESENSE_PENDING,
	VOICESENSE,
	AF,
	DOLBY,
};

enum {
	Enable,
	Disable,
	CVQ,
	PB,
	CVQ_PB,
};

enum {
	BARGEIN,
	TRAINING,
	VOIP,
};

struct escore_reg_cache {
	int value;
};

struct escore_api_access {
	u32 read_msg[ES_CMD_ACCESS_RD_MAX];
	unsigned int read_msg_len;
	u32 write_msg[ES_CMD_ACCESS_WR_MAX];
	unsigned int write_msg_len;
	unsigned int val_shift;
	unsigned int val_max;
};

#define ES_INVAL_INTF		(0x1 << 0)
#define ES_SLIM_INTF		(0x1 << 1)
#define ES_I2C_INTF		(0x1 << 2)
#define ES_SPI_INTF		(0x1 << 3)
#define ES_UART_INTF		(0x1 << 4)

enum {
	ES_ACC_PLUGGED = 0x00,
	ES_ACC_DETECTED,
	ES_ACC_UNPLUGGED,
	ES_ACC_BUTTON_PRESSED,
	ES_ACC_BUTTON_RELEASED,

	ES_ACC_INVALID = 0xFF,
};

#define ES_ACC_BTN_INVALID 0xFF

enum {
	ES_CONTEXT_THREAD = 0x1,
	ES_CONTEXT_PROBE = 0x2,
};

enum {
	ES_MSG_READ,
	ES_MSG_WRITE,
};

enum {
	ES_SLIM_CH_TX,
	ES_SLIM_CH_RX,
	ES_SLIM_CH_UND,
};

/* Notifier chain priority */
enum {
	ES_LOW,
	ES_NORMAL,
	ES_HIGH,
};

/* Streaming modes */
enum {
	ES_CVQ_STREAMING,
	ES_NORMAL_STREAMING,
};

/* PM status modes */
enum {
	ES_PM_OFF,
	ES_PM_ON,
};

enum {
	ES_PROFILING_OFF,
	ES_PROFILING_ON,
};

struct escore_slim_dai_data {
	unsigned int rate;
	unsigned int *ch_num;
	unsigned int ch_act;
	unsigned int ch_tot;
};

struct escore_i2s_dai_data {
	unsigned int rx_ch_tot;
	unsigned int tx_ch_tot;

	unsigned int rx_ch_act;
	unsigned int tx_ch_act;
	unsigned int port_mode;
};

struct escore_slim_ch {
	u32	sph;
	u32	ch_num;
	u16	ch_h;
	u16	grph;
};

/* Maximum size of keyword parameter block in bytes. */
#define ESCORE_VS_KEYWORD_PARAM_MAX 512

/* Base name used by character devices. */
#define ESCORE_CDEV_NAME "adnc"

/* device ops table for streaming operations */
struct es_stream_device {
	int (*open)(struct escore_priv *escore);
	int (*read)(struct escore_priv *escore, void *buf, int len);
	int (*close)(struct escore_priv *escore);
	int (*wait)(struct escore_priv *escore);
	int (*config)(struct escore_priv *config);
	int intf;
	int no_more_bit;
};

/* device ops table for datablock operations */
struct es_datablock_device {
	int (*open)(struct escore_priv *escore);
	int (*read)(struct escore_priv *escore, void *buf, int len);
	int (*close)(struct escore_priv *escore);
	int (*wait)(struct escore_priv *escore);
	int (*wdb_config)(struct escore_priv *escore);
	int (*wdb_reset_config)(struct escore_priv *escore);
	char *rdb_read_buffer;
	int rdb_read_count;
	struct mutex datablock_read_mutex;
	struct mutex datablock_mutex;
};

struct escore_flags {
	u32 is_codec:1;
	u32 is_fw_ready:1;
	u32 local_slim_ch_cfg:1;
	u32 rx1_route_enable:1;
	u32 tx1_route_enable:1;
	u32 rx2_route_enable:1;
	u32 reset_done:1;
/* 705 */
	u32 vs_enable:1;
	u32 sleep_enable:1;
	u32 sleep_abort:1;
	u32 ns:1;
	u32 af:1;
	u32 af_mode:2;	/* Value can be in range 0-3 */
	u32 profile_enable:1;  /* enable time profiling */
};

/*Generic boot ops*/
struct escore_boot_ops {
	int (*setup)(struct escore_priv *escore);
	int (*finish)(struct escore_priv *escore);
	int (*bootup)(struct escore_priv *escore);
	int (*escore_abort_config)(struct escore_priv *escore);
};

/*Generic Bus ops*/
struct escore_bus_ops {
	int (*read)(struct escore_priv *escore, void *buf, int len);
	int (*write)(struct escore_priv *escore,
			const void *buf, int len);
	int (*high_bw_write)(struct escore_priv *escore,
			const void *buf, int len);
	int (*high_bw_read)(struct escore_priv *escore,
			void *buf, int len);
	int (*cmd)(struct escore_priv *escore, u32 cmd, u32 *resp);
	int (*high_bw_cmd)(struct escore_priv *escore, u32 cmd, u32 *resp);
	int (*high_bw_wait)(struct escore_priv *escore);
	int (*high_bw_open)(struct escore_priv *escore);
	int (*high_bw_close)(struct escore_priv *escore);
	u32 (*cpu_to_bus)(struct escore_priv *escore, u32 resp);
	u32 (*bus_to_cpu)(struct escore_priv *escore, u32 resp);
	u32 (*cpu_to_high_bw_bus)(struct escore_priv *escore, u32 resp);
	u32 (*high_bw_bus_to_cpu)(struct escore_priv *escore, u32 resp);
	int (*rdb)(struct escore_priv *escore, void *buf, size_t len);
	int (*high_bw_calibrate)(struct escore_priv *escore);
};

/*Generic bus function*/
struct escore_bus {
	struct escore_bus_ops ops;
	void (*setup_prim_intf)(struct escore_priv *escore);
	int (*setup_high_bw_intf)(struct escore_priv *escore);
	u32 last_response;
};

/* escore device pm_ops */
struct escore_pm_ops {
	int (*prepare)(struct device *dev);
	void (*complete)(struct device *dev);
	int (*suspend)(struct device *dev);
	int (*resume)(struct device *dev);
	int (*suspend_noirq)(struct device *dev);
	int (*resume_noirq)(struct device *dev);
	int (*runtime_suspend)(struct device *dev);
	int (*runtime_resume)(struct device *dev);
	int (*runtime_idle)(struct device *dev);
};

/* escore voicesense ops */
struct escore_voicesense_ops {
	int (*escore_is_voicesense_sleep_enable)(struct escore_priv *escore);
	int (*escore_voicesense_sleep)(struct escore_priv *escore);
	int (*escore_voicesense_wakeup)(struct escore_priv *escore);
};

struct escore_macro {
	u32 cmd;
	u32 resp;
	struct timespec timestamp;
};

struct escore_pdata {
	int (*probe)(struct platform_device *dev);
	int (*remove)(struct platform_device *dev);
};

/* Delay required before different power transition stage, must be in ms */
struct escore_delay {
	u8 wakeup_to_normal; /* Deep Sleep / Sleep to Normal */
	u8 wakeup_to_vs;
	u8 vs_to_normal;
	u8 mpsleep_to_normal; /* Used for es755 only */
};

#ifdef CONFIG_ARCH_MSM
#define ES705_PRESET_ARRAY_SIZE		10
#endif
#define	ES_MAX_ROUTE_MACRO_CMD		300
/* Max size of cmd_history line */
#define ES_MAX_CMD_HISTORY_LINE_SIZE	100
extern struct escore_macro cmd_hist[ES_MAX_ROUTE_MACRO_CMD];
extern int cmd_hist_index;

struct escore_interface {
	struct device *dev;
	unsigned int curr_intf;
};

struct escore_priv {
	struct device *dev;
	struct snd_soc_codec *codec;
	struct snd_soc_dai_ops i2s_dai_ops;
	struct snd_soc_dai_ops slim_dai_ops;
	struct firmware *standard;
#ifdef CONFIG_SND_SOC_ES814_4M_BAUD_UART
	struct firmware *stnd1st;
#endif
	bool asra_enable;
	bool chip_enable;
	bool enable_4m_baud;
	struct firmware *af;
	struct firmware *dolby;
	const char *fw_af_filename;
	const char *fw_dolby_filename;
	const char *vs_filename;
	const char *bkg_filename;
	int mode;
	int chip_mode;
	int bargein_state;
	struct escore_flags flag;
	u32 intr_recvd;
	unsigned int pri_intf;
	unsigned int high_bw_intf;
	unsigned int wakeup_intf;
	struct completion cmd_compl;
	void *voice_sense;
	struct escore_voicesense_ops vs_ops;

	struct esxxx_platform_data *pdata;
	struct es_stream_device streamdev;
	struct es_datablock_device datablock_dev;

	struct clk *esxxx_ext_clk;

	struct escore_boot_ops boot_ops;
	struct escore_bus bus;
	int (*probe)(struct device *dev);

	int (*sleep)(struct escore_priv *escore);
	int (*wakeup)(struct escore_priv *escore);
	int (*escore_uart_wakeup)(struct escore_priv *escore);

	int pm_use_vs;
	int pm_enable; /* enable / disable runtime pm support for device */
	bool pm_status; /* on ES_PM_OFF, call escore_pm_get_sync, increment
			 * pm usage count and keep device into running mode.
			 * on ES_PM_ON, call escore_pm_auto_suspend, decrement
			 * pm usage count and allow device to go into
			 * suspend mode.*/
	struct escore_pm_ops non_vs_pm_ops;
	struct escore_pm_ops vs_pm_ops;
	int es_wdb_max_size;
	u16 es_vs_route_preset;
	u16 es_vs_tuning_route_preset;
	u16 es_cvs_preset;
	u16 es_sync_words;
	u32 default_cvq_mic;
	int es_streaming_mode;
	int cmd_history_size;
	int sleep_abort;

	unsigned long pm_time;

	void (*slim_setup)(struct escore_priv *escore);
	void (*init_slim_slave)(struct escore_priv *escore);
	int (*remote_cfg_slim_rx)(int dai_id);
	int (*remote_cfg_slim_tx)(int dai_id);
	int (*remote_close_slim_rx)(int dai_id);
	int (*remote_close_slim_tx)(int dai_id);
	int (*remote_route_enable)(struct snd_soc_dai *dai);
	int (*channel_dir)(int dir);

	int (*set_streaming)(struct escore_priv *escore, int val);
	int (*set_datalogging)(struct escore_priv *escore, int val);
	int (*config_jack)(struct escore_priv *escore);

	struct escore_slim_dai_data *slim_dai_data;
	struct escore_i2s_dai_data *i2s_dai_data;
	struct escore_slim_ch *slim_rx;
	struct escore_slim_ch *slim_tx;

	u16 codec_slim_dais;
	u16 slim_tx_ports;
	u16 slim_rx_ports;
	unsigned int num_of_tx_ports;
	unsigned int num_of_rx_ports;
	int *slim_tx_port_to_ch_map;
	int *slim_rx_port_to_ch_map;
	int *slim_be_id;

	unsigned int ap_tx1_ch_cnt;

	struct timespec last_resp_time;

	struct slim_device *intf_client;
	struct slim_device *gen0_client;

	struct mutex intf_probed_mutex;
	struct mutex streaming_mutex;
	struct mutex gpio_reset_mutex;
	struct mutex access_lock;
/* if 705 */
	struct mutex abort_mutex;
	struct mutex wake_mutex;
	struct mutex atablock_read_mutex;
	struct delayed_work vs_fw_load;
	struct completion fw_download;
#ifdef CONFIG_SND_SOC_ES_ASYNC_FW_LOAD
	struct completion request_fw;
#endif
	struct delayed_work sleep_work;
	struct mq100_extension_cb *sensor_cb;
#ifdef CONFIG_ARCH_MSM8974
/* MSM8974 */
	struct regulator *vcc_i2c;
#endif
	int sleep_delay;
	int wake_count;
	int fw_requested;
	u16 preset;
	u16 cvs_preset;
	u16 algo_preset;
/* endif 705 */

	struct escore_digital_gain digital_gain[ES_DIGITAL_GAIN_MAX_NUM];
	u32 digital_gain_num;

	struct mutex pm_mutex;

	struct mutex msg_list_mutex;
	struct list_head msg_list;

	long internal_route_num;
	long internal_rate;

	struct cdev cdev_command;
	struct cdev cdev_streaming;
	struct cdev cdev_firmware;
	struct cdev cdev_datablock;
	struct cdev cdev_datalogging;
	struct cdev cdev_cmd_history;

	struct task_struct *stream_thread;
	wait_queue_head_t stream_in_q;
	wait_queue_head_t irq_waitq;

	struct snd_soc_codec_driver *soc_codec_dev_escore;
	struct snd_soc_dai_driver *dai;
	u32 dai_nr;
	u32 api_addr_max;
	atomic_t active_streams;

	struct escore_api_access *api_access;
	struct escore_reg_cache *reg_cache;
	void *priv;

	struct blocking_notifier_head *irq_notifier_list;
	struct snd_soc_jack *jack;
	u8 algo_type, algo_type_off;
	u8 vp_asr;
	u8 vp_aec;
	u8 pcm_port;
	u8 cmd_compl_mode;
	u8 wait_api_intr;
	u8 uart_ready;
	atomic_t uart_users;
	u8 non_vs_sleep_state;
	u16 current_preset;
	u8 button_config_required;
	u8 defer_intr_config;
	u8 can_mpsleep;
	u8 capture_mode;
	u8 pri_pb_mode;
	u8 sec_pb_mode;
	u8 hpf_mode;
	u32 dhwpt_cmd;
	u32 dhwpt_enabled;
	int intf_probed;
	char *device_name;
	char *interface_device_name;
	char *interface_device_elem_addr_name;

	int escore_power_state;
	u32 escore_event_type;
	struct mutex escore_event_type_mutex;
	u8 device_up_called;

#ifdef CONFIG_ARCH_MSM
	u16 preset_uplink_array[ES705_PRESET_ARRAY_SIZE];
	u16 preset_downlink_array[ES705_PRESET_ARRAY_SIZE];
#endif

#ifdef CONFIG_ARCH_MSM8974
	bool i2c_pull_up;
#endif
	bool codec_clk_en;

	int acc_det_status;
	int acc_btn_pressed;
	u32 power_saving_mode;
	u32 disable_fw_recovery_cnt;
	unsigned char *debug_buff;
	struct escore_delay delay;
};

#define escore_resp(obj) ((obj)->bus.last_response)
extern struct escore_priv escore_priv;

extern void escore_gpio_reset(struct escore_priv *escore);

extern int escore_cmd(struct escore_priv *escore, u32 cmd, u32 *resp);
int escore_cmd_nopm(struct escore_priv *escore, u32 cmd, u32 *resp);
int escore_cmd_locked(struct escore_priv *escore, u32 cmd, u32 *resp);
extern int escore_write_block(struct escore_priv *escore,
		const u32 *cmd_block);
int escore_read_locked(struct snd_soc_codec *codec,
			       unsigned int reg);
extern int escore_read(struct snd_soc_codec *codec,
			       unsigned int reg);
int escore_write_locked(struct snd_soc_codec *codec, unsigned int reg,
		       unsigned int value);
extern int escore_write(struct snd_soc_codec *codec, unsigned int reg,
		       unsigned int value);
extern int escore_prepare_msg(struct escore_priv *escore, unsigned int reg,
		unsigned int value, char *msg, int *len, int msg_type);
extern int escore_put_control_enum(struct snd_kcontrol *kcontrol,
				  struct snd_ctl_elem_value *ucontrol);
extern int escore_get_control_enum(struct snd_kcontrol *kcontrol,
				  struct snd_ctl_elem_value *ucontrol);
extern int escore_put_control_value(struct snd_kcontrol *kcontrol,
				   struct snd_ctl_elem_value *ucontrol);
extern int escore_get_control_value(struct snd_kcontrol *kcontrol,
				   struct snd_ctl_elem_value *ucontrol);
int escore_put_runtime_pm_enum(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol);
int escore_get_runtime_pm_enum(struct snd_kcontrol *kcontrol,
					struct snd_ctl_elem_value *ucontrol);
int escore_pm_status_update(bool value);
int escore_put_streaming_mode(struct snd_kcontrol *kcontrol,
				  struct snd_ctl_elem_value *ucontrol);
int escore_get_streaming_mode(struct snd_kcontrol *kcontrol,
				  struct snd_ctl_elem_value *ucontrol);
void escore_register_notify(struct blocking_notifier_head *list,
		struct notifier_block *nb);
int escore_probe(struct escore_priv *escore, struct device *dev, int curr_intf,
		int context);
int escore_get_rdb_size(struct escore_priv *escore, int id);
extern int escore_datablock_read(struct escore_priv *escore, void *buf,
					size_t len);
extern int escore_datablock_write(struct escore_priv *escore, const void *buf,
					size_t len);
extern int escore_datablock_open(struct escore_priv *escore);
extern int escore_datablock_close(struct escore_priv *escore);
extern int escore_datablock_wait(struct escore_priv *escore);
int escore_start_int_osc(struct escore_priv *escore);
int escore_switch_ext_osc(struct escore_priv *escore);
void escore_pm_enable(void);
void escore_pm_vs_enable(struct escore_priv *escore, bool value);
int escore_suspend(struct device *dev);
int escore_resume(struct device *dev);
int escore_api_intr_wait_completion(struct escore_priv *escore);
int escore_reconfig_api_intr(struct escore_priv *escore);
int escore_wakeup(struct escore_priv *escore);
void escore_pm_put_autosuspend(void);
int escore_pm_get_sync(void);
int escore_platform_init(void);
int escore_retrigger_probe(void);
int escore_ns_to_af(struct escore_priv *escore);
int escore_af_to_ns(struct escore_priv *escore);
int escore_put_af_status(struct snd_kcontrol *kcontrol,
		struct snd_ctl_elem_value *ucontrol);
int escore_get_af_status(struct snd_kcontrol *kcontrol,
		struct snd_ctl_elem_value *ucontrol);
int escore_fw_recovery(struct escore_priv *escore, int is_forced);
int read_debug_data(void *buf);
extern int escore_reconfig_intr(struct escore_priv *escore);
extern const struct dev_pm_ops escore_pm_ops;
#ifdef CONFIG_SND_SOC_ES_ASYNC_FW_LOAD
void escore_load_std_fw(const struct firmware *fw, void *context);
int escore_create_probe_thread(struct escore_interface *interface);
#endif

#define ESCORE_STREAM_DISABLE	0
#define ESCORE_STREAM_ENABLE	1
#define ESCORE_DATALOGGING_CMD_ENABLE    0x803f0001
#define ESCORE_DATALOGGING_CMD_DISABLE   0x803f0000

static inline int escore_is_sleep_aborted(struct escore_priv *escore)
{
	if (unlikely(escore->sleep_abort))
		return -EABORT;
	else
		return 0;
}

/* Take api_mutex before calling this function */
static inline void update_cmd_history(u32 cmd, u32 resp)
{
	cmd_hist[cmd_hist_index].cmd = cmd;
	cmd_hist[cmd_hist_index].resp = resp;
	get_monotonic_boottime(&cmd_hist[cmd_hist_index].timestamp);
	cmd_hist_index = (cmd_hist_index + 1) % ES_MAX_ROUTE_MACRO_CMD;
}

/* Set flag to wait for API Interrupt */
static inline void escore_set_api_intr_wait(struct escore_priv *escore)
{
	/*  GPIO_A is not configured, set flag is not required */
	if (escore->pdata->gpioa_gpio == -1)
		return;

	pr_debug("%s(): Called", __func__);
	if (!escore->wait_api_intr)
		escore->wait_api_intr = 1;
	else
		pr_debug("%s(): wait_api_intr is already set\n", __func__);
	return;
}

#define es_profiling_var(name)		struct timespec name##_start, name##_end

#define es_profiling_start(name) \
{if (escore_priv.flag.profile_enable == ES_PROFILING_ON) \
	getnstimeofday(name##_start); \
}


#define es_profiling_end(name)	\
{if (escore_priv.flag.profile_enable == ES_PROFILING_ON) \
		getnstimeofday(name##_end); \
}


#define print_profiling_time(name, msg) \
{if (escore_priv.flag.profile_enable == ES_PROFILING_ON) { \
	dev_info(escore_priv.dev, "Total %s time = %lu.%03lu sec\n", \
		msg, timespec_sub(name##_end, name##_start).tv_sec, \
		(timespec_sub(name##_end, name##_start).tv_nsec)/1000000); \
} }

#endif /* _ESCORE_H */
