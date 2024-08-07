/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_COMMON_MOTIONFUSION_H
#define HI_COMMON_MOTIONFUSION_H

#include "hi_type.h"
#include "hi_errno.h"
#include "ot_common_motionfusion.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_ERR_GYRO_NOTWORK OT_ERR_GYRO_NOTWORK
#define HI_ERR_ACC_NOTWORK OT_ERR_ACC_NOTWORK
#define HI_ERR_MODE OT_ERR_MODE
#define HI_ERR_USECASE OT_ERR_USECASE
#define HI_ERR_MOTIONFUSION_NOT_CONFIG OT_ERR_MOTIONFUSION_NOT_CONFIG
#define HI_ERR_MOTIONFUSION_NOBUF OT_ERR_MOTIONFUSION_NOBUF
#define HI_ERR_MOTIONFUSION_BUF_EMPTY OT_ERR_MOTIONFUSION_BUF_EMPTY
#define HI_ERR_MOTIONFUSION_NULL_PTR OT_ERR_MOTIONFUSION_NULL_PTR
#define HI_ERR_MOTIONFUSION_ILLEGAL_PARAM OT_ERR_MOTIONFUSION_ILLEGAL_PARAM
#define HI_ERR_MOTIONFUSION_BUF_FULL OT_ERR_MOTIONFUSION_BUF_FULL
#define HI_ERR_MOTIONFUSION_SYS_NOTREADY OT_ERR_MOTIONFUSION_SYS_NOTREADY
#define HI_ERR_MOTIONFUSION_NOT_SUPPORT OT_ERR_MOTIONFUSION_NOT_SUPPORT
#define HI_ERR_MOTIONFUSION_NOT_PERMITTED OT_ERR_MOTIONFUSION_NOT_PERMITTED
#define HI_ERR_MOTIONFUSION_BUSY OT_ERR_MOTIONFUSION_BUSY
#define HI_ERR_MOTIONFUSION_INVALID_CHNID OT_ERR_MOTIONFUSION_INVALID_CHNID
#define HI_ERR_MOTIONFUSION_CHN_UNEXIST OT_ERR_MOTIONFUSION_CHN_UNEXIST
#define HI_ERR_MOTIONFUSION_GYRO_NOTWORK OT_ERR_MOTIONFUSION_GYRO_NOTWORK
#define HI_ERR_MOTIONFUSION_ACC_NOTWORK OT_ERR_MOTIONFUSION_ACC_NOTWORK
#define HI_ERR_MOTIONFUSION_INVALID_MODE OT_ERR_MOTIONFUSION_INVALID_MODE
#define HI_ERR_MOTIONFUSION_INVALID_USECASE OT_ERR_MOTIONFUSION_INVALID_USECASE
#define HI_MFUSION_MAX_CHN_NUM OT_MFUSION_MAX_CHN_NUM
#define HI_MFUSION_AXIS_NUM OT_MFUSION_AXIS_NUM
#define HI_MFUSION_MATRIX_NUM OT_MFUSION_MATRIX_NUM
#define HI_MFUSION_MATRIX_TEMPERATURE_NUM OT_MFUSION_MATRIX_TEMPERATURE_NUM
#define HI_MFUSION_TEMPERATURE_LUT_SAMPLES OT_MFUSION_TEMPERATURE_LUT_SAMPLES
#define HI_MFUSION_TEMPERATURE_GYRO OT_MFUSION_TEMPERATURE_GYRO
#define HI_MFUSION_TEMPERATURE_ACC OT_MFUSION_TEMPERATURE_ACC
#define HI_MFUSION_TEMPERATURE_MAGN OT_MFUSION_TEMPERATURE_MAGN
#define HI_MFUSION_TEMPERATURE_ALL OT_MFUSION_TEMPERATURE_ALL
#define HI_MFUSION_DEVICE_GYRO OT_MFUSION_DEVICE_GYRO
#define HI_MFUSION_DEVICE_ACC OT_MFUSION_DEVICE_ACC
#define HI_MFUSION_DEVICE_MAGN OT_MFUSION_DEVICE_MAGN
#define HI_MFUSION_DEVICE_ALL OT_MFUSION_DEVICE_ALL
#define HI_MFUSION_SIXSIDE_MATRIX_GRADINT OT_MFUSION_SIXSIDE_MATRIX_GRADINT
#define HI_MFUSION_ZERO_OFFSET_GRADINT OT_MFUSION_ZERO_OFFSET_GRADINT
#define HI_MFUSION_TEMPERATURE_OFFSET_GRADINT OT_MFUSION_TEMPERATURE_OFFSET_GRADINT
#define HI_MFUSION_COMMON_BUF_SIZE OT_MFUSION_COMMON_BUF_SIZE
#define HI_MFUSION_LUT_STATUS_NUM OT_MFUSION_LUT_STATUS_NUM
typedef ot_mfusion_steady_detect_attr hi_mfusion_steady_detect_attr;
typedef ot_mfusion_attr hi_mfusion_attr;
typedef ot_mfusion_sample_data hi_mfusion_sample_data;
typedef ot_mfusion_gyro_buf hi_mfusion_gyro_buf;
typedef ot_mfusion_acc_buf hi_mfusion_acc_buf;
#define HI_IMU_TEMPERATURE_DRIFT_CURV OT_IMU_TEMPERATURE_DRIFT_CURV
#define HI_IMU_TEMPERATURE_DRIFT_LUT OT_IMU_TEMPERATURE_DRIFT_LUT
#define HI_IMU_TEMPERATURE_DRIFT_BUTT OT_IMU_TEMPERATURE_DRIFT_BUTT
typedef ot_mfusion_temperature_drift_mode hi_mfusion_temperature_drift_mode;
typedef ot_mfusion_temperature_drift_lut hi_mfusion_temperature_drift_lut;
typedef ot_mfusion_temperature_drift hi_mfusion_temperature_drift;
typedef ot_mfusion_drift hi_mfusion_drift;
typedef ot_mfusion_six_side_calibration hi_mfusion_six_side_calibration;
#define HI_MFUSION_QUATERNION_MAX_NUM OT_MFUSION_QUATERNION_MAX_NUM
typedef ot_mfusion_rotation_compensation hi_mfusion_rotation_compensation;
typedef ot_mfusion_rotation_cfg hi_mfusion_rotation_cfg;
typedef ot_mfusion_quaternion_data hi_mfusion_quaternion_data;
typedef ot_mfusion_quaternion_buf hi_mfusion_quaternion_buf;

#ifdef __cplusplus
}
#endif
#endif /* HI_COMMON_MOTIONFUSION_H */
