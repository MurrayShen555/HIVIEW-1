/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_MIPI_RX_H
#define HI_MIPI_RX_H

#include "osal_ioctl.h"
#include "ot_mipi_rx.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_MIPI_WDR_MODE_NONE OT_MIPI_WDR_MODE_NONE
#define HI_MIPI_WDR_MODE_VC OT_MIPI_WDR_MODE_VC
#define HI_MIPI_WDR_MODE_DT OT_MIPI_WDR_MODE_DT
#define HI_MIPI_WDR_MODE_DOL OT_MIPI_WDR_MODE_DOL
#define HI_MIPI_WDR_MODE_BUTT OT_MIPI_WDR_MODE_BUTT
#define HI_LVDS_WDR_MODE_NONE OT_LVDS_WDR_MODE_NONE
#define HI_LVDS_WDR_MODE_2F OT_LVDS_WDR_MODE_2F
#define HI_LVDS_WDR_MODE_3F OT_LVDS_WDR_MODE_3F
#define HI_LVDS_WDR_MODE_4F OT_LVDS_WDR_MODE_4F
#define HI_LVDS_WDR_MODE_DOL_2F OT_LVDS_WDR_MODE_DOL_2F
#define HI_LVDS_WDR_MODE_DOL_3F OT_LVDS_WDR_MODE_DOL_3F
#define HI_LVDS_WDR_MODE_DOL_4F OT_LVDS_WDR_MODE_DOL_4F
#define HI_LVDS_WDR_MODE_BUTT OT_LVDS_WDR_MODE_BUTT
#define HI_MIPI_IOC_MAGIC OT_MIPI_IOC_MAGIC
#define HI_MIPI_SET_DEV_ATTR OT_MIPI_SET_DEV_ATTR
#define HI_MIPI_SET_PHY_CMVMODE OT_MIPI_SET_PHY_CMVMODE
#define HI_MIPI_RESET_SENSOR OT_MIPI_RESET_SENSOR
#define HI_MIPI_UNRESET_SENSOR OT_MIPI_UNRESET_SENSOR
#define HI_MIPI_RESET_MIPI OT_MIPI_RESET_MIPI
#define HI_MIPI_UNRESET_MIPI OT_MIPI_UNRESET_MIPI
#define HI_MIPI_SET_HS_MODE OT_MIPI_SET_HS_MODE
#define HI_MIPI_ENABLE_MIPI_CLOCK OT_MIPI_ENABLE_MIPI_CLOCK
#define HI_MIPI_DISABLE_MIPI_CLOCK OT_MIPI_DISABLE_MIPI_CLOCK
#define HI_MIPI_ENABLE_SENSOR_CLOCK OT_MIPI_ENABLE_SENSOR_CLOCK
#define HI_MIPI_DISABLE_SENSOR_CLOCK OT_MIPI_DISABLE_SENSOR_CLOCK
#define HI_MIPI_SET_EXT_DATA_TYPE OT_MIPI_SET_EXT_DATA_TYPE
#define HI_MIPI_SET_PHY_SPEED_MODE OT_MIPI_SET_PHY_SPEED_MODE

#ifdef __cplusplus
}
#endif
#endif /* HI_MIPI_RX_H */
