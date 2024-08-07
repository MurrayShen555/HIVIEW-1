/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef DEV_EXT_H
#define DEV_EXT_H

#include "ot_type.h"

#define UMAP_DEV_NUM                64
#define UMAP_NAME_MAXLEN            32

#define UMAP_VI_MINOR_BASE          1
#define UMAP_VO_MINOR_BASE          2
#define UMAP_VENC_MINOR_BASE        3
#define UMAP_VDEC_MINOR_BASE        4
#define UMAP_JPEGD_MINOR_BASE       5
#define UMAP_AI_MINOR_BASE          6
#define UMAP_AO_MINOR_BASE          7
#define UMAP_GRP_MINOR_BASE         8
#define UMAP_SYS_MINOR_BASE         9
#define UMAP_VB_MINOR_BASE          10
#define UMAP_VPSS_MINOR_BASE        11
#define UMAP_AIO_MINOR_BASE         12
#define UMAP_LOG_MINOR_BASE         13
#define UMAP_AENC_MINOR_BASE        14
#define UMAP_ADEC_MINOR_BASE        15
#define UMAP_MST_LOG_MINOR_BASE     16
#define UMAP_RGN_MINOR_BASE         17
#define UMAP_IVE_MINOR_BASE         18
#define UMAP_HDMI_MINOR_BASE        19
#define UMAP_VGS_MINOR_BASE         20
#define UMAP_ISP_MINOR_BASE         21
#define UMAP_RC_MINOR_BASE          22
#define UMAP_H264E_MINOR_BASE       23
#define UMAP_H265E_MINOR_BASE       24
#define UMAP_JPEGE_MINOR_BASE       25
#define UMAP_CHNL_MINOR_BASE        26
#define UMAP_MPEG4E_MINOR_BASE      27
#define UMAP_GDC_MINOR_BASE         28
#define UMAP_PCIV_MINOR_BASE        29
#define UMAP_PCIVFMW_MINOR_BASE     30
#define UMAP_FD_MINOR_BASE          31
#define UMAP_ACODEC_MINOR_BASE      32
#define UMAP_VPU_MINOR_BASE         33
#define UMAP_AVS_MINOR_BASE         34
#define UMAP_DIS_MINOR_BASE         35
#define UMAP_SVP_MINOR_BASE         36
#define UMAP_PRORES_MINOR_BASE      37
#define UMAP_SVP_NNIE_MINOR_BASE    38
#define UMAP_SVP_DSP_MINOR_BASE     39
#define UMAP_DPU_RECT_MINOR_BASE    40
#define UMAP_DPU_MATCH_MINOR_BASE   41
#define UMAP_PM_MINOR_BASE          42
#define UMAP_GYRODIS_MINOR_BASE     43
#define UMAP_SVP_MAU_MINOR_BASE     44
#define UMAP_VDA_MINOR_BASE         45
#define UMAP_VPP_MINOR_BASE         46
#define UMAP_KCF_MINOR_BASE         47
#define UMAP_PQP_MINOR_BASE         48
#define UMAP_NPU_DEV_MINOR_BASE     49
#define UMAP_NPU_AICPU_MINOR_BASE   50
#define UMAP_NPU_DFX_MINOR_BASE     51
#define UMAP_NPU_TSFW_MINOR_BASE    52
#define UMAP_CIPHER_MINOR_BASE      53
#define UMAP_KLAD_MINOR_BASE        54
#define UMAP_OTP_MINOR_BASE         56
#define UMAP_DCC_MINOR_BASE         57
#define UMAP_SVP_NPU_MINOR_BASE     58
#define UMAP_MDC_LOG_MINOR_BASE     59
#define UMAP_VENC_EXT_MINOR_BASE    60
#define UMAP_MIPI_RX_MINOR_BASE     61
#define UMAP_MIPI_TX_MINOR_BASE     62
#define UMAP_MCF_MINOR_BASE         63
#define UMAP_MSENSOR_CHIP_MINOR_BASE 64
#define UMAP_MSENSOR_MNG_MINOR_BASE 65
#define UMAP_MFUSION_MINOR_BASE     66
#define UMAP_PHOTO_MINOR_BASE       67
#define UMAP_TDE_MINOR_BASE         68
#define UMAP_VO_DEV_MINOR_BASE      69
#define UMAP_VCA_MINOR_BASE         70
#define UMAP_AIISP_MINOR_BASE       71
#define UMAP_UVC_MINOR_BASE         72
#define UMAP_VI_RGBW_MINOR_BASE     73
#define UMAP_AB_MINOR_BASE          255
#define umap_get_chn(f) (*((td_u32*)(f)))
#define umap_set_chn(f, chn) (*((td_u32*)(f)) = (chn))

#define UMAP_NAME                   "umap"
#define UMAP_NAME_VIDEO             UMAP_NAME "/video/"
#define UMAP_NAME_AUDIO             UMAP_NAME "/audio/"

#define UMAP_DEVNAME_SYSCTL         OT_MPP_MOD_SYS
#define UMAP_DEVNAME_LOG_BASE       OT_MPP_MOD_LOG
#define UMAP_DEVNAME_LOG_MDC        OT_MPP_MOD_LOG_MDC
#define UMAP_DEVNAME_MST_LOG_BASE   OT_MPP_MOD_MST_LOG

#define UMAP_DEVNAME_VI_BASE        OT_MPP_MOD_VI
#define UMAP_DEVNAME_VO_BASE        OT_MPP_MOD_VO
#define UMAP_DEVNAME_VO_DEV_BASE    OT_MPP_MOD_VO_DEV
#define UMAP_DEVNAME_AVS_BASE       OT_MPP_MOD_AVS
#define UMAP_DEVNAME_VENC_BASE      OT_MPP_MOD_VENC
#define UMAP_DEVNAME_VENC_EXT       OT_MPP_MOD_VENC_MSG
#define UMAP_DEVNAME_VDEC_BASE      OT_MPP_MOD_VDEC
#define UMAP_DEVNAME_JPEGD_BASE     OT_MPP_MOD_JPEGD

#define UMAP_DEVNAME_DSU_BASE       OT_MPP_MOD_DSU
#define UMAP_DEVNAME_VB_BASE        OT_MPP_MOD_VB
#define UMAP_DEVNAME_VPSS_BASE      OT_MPP_MOD_VPSS
#define UMAP_DEVNAME_GRP_BASE       OT_MPP_MOD_GRP
#define UMAP_DEVNAME_RGN_BASE       OT_MPP_MOD_RGN
#define UMAP_DEVNAME_IVE_BASE       OT_MPP_MOD_IVE
#define UMAP_DEVNAME_FD_BASE        OT_MPP_MOD_FD
#define UMAP_DEVNAME_SVP_BASE       OT_MPP_MOD_SVP
#define UMAP_DEVNAME_SVP_NNIE_BASE  OT_MPP_MOD_SVP_NNIE
#define UMAP_DEVNAME_SVP_DSP_BASE   OT_MPP_MOD_SVP_DSP
#define UMAP_DEVNAME_DPU_RECT_BASE  OT_MPP_MOD_DPU_RECT
#define UMAP_DEVNAME_DPU_MATCH_BASE OT_MPP_MOD_DPU_MATCH
#define UMAP_DEVNAME_SVP_MAU_BASE   OT_MPP_MOD_SVP_MAU
#define UMAP_DEVNAME_PQP_BASE       OT_MPP_MOD_PQP
#define UMAP_DEVNAME_SVP_NPU_BASE   OT_MPP_MOD_SVP_NPU

#define UMAP_DEVNAME_ACODEC_BASE    OT_MPP_MOD_ACODEC
#define UMAP_DEVNAME_AB_BASE        OT_MPP_MOD_AB

#define UMAP_DEVNAME_AIO_BASE       OT_MPP_MOD_AIO
#define UMAP_DEVNAME_AI_BASE        OT_MPP_MOD_AI
#define UMAP_DEVNAME_AO_BASE        OT_MPP_MOD_AO
#define UMAP_DEVNAME_AENC_BASE      OT_MPP_MOD_AENC
#define UMAP_DEVNAME_ADEC_BASE      OT_MPP_MOD_ADEC

#define UMAP_DEVNAME_HDMI_BASE      OT_MPP_MOD_HDMI

#define UMAP_DEVNAME_VGS_BASE       OT_MPP_MOD_VGS

#define UMAP_DEVNAME_GDC_BASE       OT_MPP_MOD_GDC
#define UMAP_DEVNAME_VPP_BASE       OT_MPP_MOD_VPP

#define UMAP_DEVNAME_H264E_BASE     OT_MPP_MOD_H264E
#define UMAP_DEVNAME_H265E_BASE     OT_MPP_MOD_H265E
#define UMAP_DEVNAME_JPEGE_BASE     OT_MPP_MOD_JPEGE
#define UMAP_DEVNAME_MPEG4E_BASE    OT_MPP_MOD_MPEG4E
#define UMAP_DEVNAME_CHNL_BASE      OT_MPP_MOD_CHNL
#define UMAP_DEVNAME_RC_BASE        OT_MPP_MOD_RC
#define UMAP_DEVNAME_MPEG4E_BASE    OT_MPP_MOD_MPEG4E
#define UMAP_DEVNAME_PRORES_BASE    OT_MPP_MOD_PRORES

#define UMAP_DEVNAME_PCIV_BASE      OT_MPP_MOD_PCIV
#define UMAP_DEVNAME_PCIVFMW_BASE   OT_MPP_MOD_PCIVFMW
#define UMAP_DEVNAME_VPU_BASE       OT_MPP_MOD_VPU
#define UMAP_DEVNAME_DIS_BASE       OT_MPP_MOD_DIS
#define UMAP_DEVNAME_PM_BASE        OT_MPP_MOD_PM
#define UMAP_DEVNAME_GYRODIS_BASE   OT_MPP_MOD_GYRODIS
#define UMAP_DEVNAME_VDA_BASE       OT_MPP_MOD_VDA

#define UMAP_DEVNAME_KCF_BASE       OT_MPP_MOD_KCF

#define UMAP_DEVNAME_CIPHER_BASE    OT_MPP_MOD_CIPHER
#define UMAP_DEVNAME_KLAD_BASE      OT_MPP_MOD_KLAD
#define UMAP_DEVNAME_OTP_BASE       OT_MPP_MOD_OTP
#define UMAP_DEVNAME_DCC_BASE       OT_MPP_MOD_DCC

#define UMAP_DEVNAME_VCA_BASE       OT_MPP_MOD_VCA
#define UMAP_DEVNAME_UVC_BASE       OT_MPP_MOD_UVC
#define UMAP_DEVNAME_VI_RGBW_BASE   OT_MPP_MOD_VI_RGBW

#endif /* DEV_EXT_H */
