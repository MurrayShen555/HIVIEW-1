/*
 * Automatically generated C config: don't edit
 * Busybox version: 
 */
#define AUTOCONF_TIMESTAMP "2020-09-24 13:03:53 CST"


/*
 * General Setup
 */
#define CONFIG_HI3531DV200 1
#define CONFIG_HI_CHIP_TYPE 0x3531d200
#define CONFIG_HI_ARCH "hi3531dv200"
#define CONFIG_SUBCHIP_HI3531DV200 1
#define CONFIG_HI_SUBARCH "hi3531dv200"
#define CONFIG_HI_SUBCHIP_TYPE 0x3531d200
#define CONFIG_SMP 1
#define CONFIG_ARM_ARCH_TYPE "smp"
#define CONFIG_A53 1
#define CONFIG_CPU_TYPE "a53"
#define CONFIG_VERSION_ASIC 1
#define CONFIG_HI_FPGA "n"
#define CONFIG_LINUX_OS 1
#define CONFIG_OS_TYPE "linux"
#define CONFIG_LINUX_4_19_y 1
#define CONFIG_KERNEL_VERSION "linux-4.19.y"
#define CONFIG_KERNEL_AARCH64_HIMIX200 1
#define CONFIG_HI_CROSS "aarch64-himix200-linux-"
#define CONFIG_LIBC_TYPE "glibc"
#define CONFIG_KERNEL_BIT "KERNEL_BIT_64"
#define CONFIG_USER_AARCH64_HIMIX200 1
#define CONFIG_HI_CROSS_LIB "aarch64-himix200-linux-"
#define CONFIG_USER_BIT "USER_BIT_64"
#define CONFIG_LINUX_STYLE 1
#define CONFIG_CODE_SYTLE "USE_LINUX_STYLE"
#define CONFIG_RELEASE_TYPE_RELEASE 1
#define CONFIG_HI_RLS_MODE "HI_RELEASE"
#define CONFIG_HI_PLATFORM_H8 1

/*
 * Media Modules Setup
 */

/*
 * media audio config
 */
#define CONFIG_HI_AUDIO_SUPPORT 1
#define CONFIG_HI_ACODEC_VERSION ""
#define CONFIG_HI_ACODEC_MAX_GAIN 0
#define CONFIG_HI_ACODEC_MIN_GAIN 0
#define CONFIG_HI_ACODEC_GAIN_STEP 0
#define CONFIG_HI_DOWNVQE_SUPPORT 1
#define CONFIG_HI_TALKVQE_SUPPORT 1
#define CONFIG_HI_RECORDVQE_SUPPORT 1
#define CONFIG_HI_AUDIO_STATIC_REGISTER_SUPPORT 1

/*
 * media base config
 */

/*
 * media chnl config
 */
#define CONFIG_HI_CHNL_SUPPORT 1

/*
 * media hdmi config
 */
#define CONFIG_HI_HDMI_SUPPORT 1

/*
 * media region config
 */
#define CONFIG_HI_REGION_SUPPORT 1
#define CONFIG_HI_RGN_VGS_QUICKCOPY_SUPPORT 1

/*
 * media sys config
 */
#define CONFIG_HI_SYS_SUPPORT 1
#define CONFIG_HI_SYS_SCALE_COEF_SUPPORT 1

/*
 * media tde config
 */
#define CONFIG_HI_TDE_SUPPORT 1

/*
 * media vda config
 */
#define CONFIG_HI_VDA_SUPPORT 1

/*
 * media vdec config
 */
#define CONFIG_HI_VDEC_SUPPORT 1
#define CONFIG_HI_H265D_SUPPORT 1
#define CONFIG_HI_H264D_SUPPORT 1
#define CONFIG_HI_DEC_SHVC_SUPPORT 1
#define CONFIG_VDEC_IP "VDEC_IP_VDH"
#define CONFIG_HI_JPEGD_SUPPORT 1
#define CONFIG_HI_JPEGD_PROGRESSIVE 1
#define CONFIG_VDEC_ROTATION_SUPPORT 1
#define CONFIG_VDEC_USERPIC_SUPPORT 1
#define CONFIG_VDEC_USERDATA_SUPPORT 1
#define CONFIG_HI_VDEC_QUICK_SCHEDULE_SUPPORT 1

/*
 * media venc config
 */
#define CONFIG_HI_VENC_SUPPORT 1
#define CONFIG_HI_H265E_SUPPORT 1
#define CONFIG_HI_H265E_USERDATA_SUPPORT 1
#define CONFIG_HI_H265E_INTRA_REFRESH_SUPPORT 1
#define CONFIG_HI_H264E_SUPPORT 1
#define CONFIG_HI_H264E_SVC_SUPPORT 1
#define CONFIG_HI_H264E_USERDATA_SUPPORT 1
#define CONFIG_HI_H264E_INTRA_REFRESH_SUPPORT 1
#define CONFIG_HI_JPEGE_SUPPORT 1
#define CONFIG_HI_JPEGE_ROI_SUPPORT 1
#define CONFIG_HI_MJPEGE_SUPPORT 1
#define CONFIG_HI_JPEGE_USERDATA_SUPPORT 1
#define CONFIG_HI_VENC_VPSSAUTO_SUPPORT 1
#define CONFIG_HI_VENC_FRAMEBUF_RECYCLE_SUPPORT 1
#define CONFIG_HI_VENC_VGS_SUPPORT 1
#define CONFIG_HI_VENC_SVC_SUPPORT 1
#define CONFIG_HI_VENC_SMARTP_SUPPORT 1
#define CONFIG_HI_VENC_DUALP_SUPPORT 1
#define CONFIG_HI_VENC_RCNREF_SHARE_SUPPORT 1
#define CONFIG_HI_VENC_DEBREATH_SUPPORT 1
#define CONFIG_HI_VENC_SKIPREF_SUPPORT 1
#define CONFIG_HI_VENC_SCENE0_SUPPORT 1
#define CONFIG_HI_VENC_SCENE1_SUPPORT 1
#define CONFIG_HI_VENC_SCENE2_SUPPORT 1
#define CONFIG_HI_RC_AVBR_SUPPORT 1
#define CONFIG_HI_RC_QPMAP_SUPPORT 1
#define CONFIG_HI_RC_QVBR_SUPPORT 1
#define CONFIG_HI_RC_CVBR_SUPPORT 1

/*
 * media vgs config
 */
#define CONFIG_HI_VGS_SUPPORT 1
#define CONFIG_HI_VGS_LUMA_STAT_SUPPORT 1
#define CONFIG_HI_VGS_ARGB_ROTATE_SUPPORT 1

/*
 * media vi config
 */
#define CONFIG_HI_VI_SUPPORT 1
#define CONFIG_HI_VI_MINOR_CHN_SUPPORT 1
#define CONFIG_HI_VI_CASCADE_CHN_SUPPORT 1
#define CONFIG_HI_VI_BT1120_SUPPORT 1

/*
 * media vo config
 */
#define CONFIG_HI_VO_SUPPORT 1
#define CONFIG_HI_VO_HD 1
#define CONFIG_HI_VO_PLAY_CTL 1
#define CONFIG_HI_VO_LUMA 1
#define CONFIG_HI_VO_COVER_OSD_SUPPORT 1
#define CONFIG_HI_VO_VIRTDEV_SUPPORT 1
#define CONFIG_HI_VO_VGS 1
#define CONFIG_HI_VO_GRAPH 1
#define CONFIG_HI_VO_BATCH 1
#define CONFIG_HI_VO_QUICK_SCHEDULE_SUPPORT 1
#define CONFIG_HI_VO_WBC 1
#define CONFIG_HI_VO_CASCADE 1

/*
 * media vpss config
 */
#define CONFIG_HI_VPSS_SUPPORT 1
#define CONFIG_HI_VPSS_SHARPEN 1
#define CONFIG_HI_VPSS_3DNR 1
#define CONFIG_HI_VPSS_AUTO_SUPPORT 1
#define CONFIG_HI_VPSS_BACKUP_SUPPORT 1
#define CONFIG_HI_VPSS_LUMA_STAT_SUPPORT 1
#define CONFIG_HI_VPSS_VGS_ROTATION_SUPPORT 1
#define CONFIG_HI_VPSS_COVER_SUPPORT 1
#define CONFIG_HI_VPSS_MOSAIC_SUPPORT 1
#define CONFIG_HI_VPSS_DELAY_SUPPORT 1
#define CONFIG_HI_VPSS_2SCALE_SUPPORT 1
#define CONFIG_HI_VPSS_VGS_GRP_SUPPORT 1
#define CONFIG_HI_VPSS_BUFFER_REUSE_SUPPORT 1
#define CONFIG_HI_VPSS_H8_ADAPT 1
#define CONFIG_HI_VPSS_QUICK_SCHEDULE_SUPPORT 1

/*
 * Device Driver Setup
 */

/*
 * drv config
 */
#define CONFIG_DRV 1
#define CONFIG_EXTDRV 1
#define CONFIG_INTERDRV 1
#define CONFIG_HIUSER 1
#define CONFIG_MIPI_TX 1
#define CONFIG_MIPI_RX 1
#define CONFIG_HI_IR 1
#define CONFIG_HI_WDG 1
#define CONFIG_HI_OTP 1
#define CONFIG_HI_SYSCFG 1

/*
 * Component Setup
 */

/*
 * Component cipher Config
 */
#define CONFIG_HI_CIPHER_SUPPORT 1

/*
 * Component hifb Config
 */
#define CONFIG_HI_HIFB_SUPPORT 1

/*
 * Component hisyslink Config
 */

/*
 * Component pciv Config
 */
#define CONFIG_HI_PCIV_SUPPORT 1

/*
 * Component photo Config
 */

/*
 * Component svp Config
 */
#define CONFIG_HI_SVP_SUPPORT 1
#define CONFIG_HI_SVP_CNN 1
#define CONFIG_HI_SVP_RUNTIME 1
#define CONFIG_HI_SVP_IVE 1
#define CONFIG_HI_SVP_IVE_CSC 1
#define CONFIG_HI_SVP_IVE_FILTER_AND_CSC 1
#define CONFIG_HI_SVP_IVE_NCC 1
#define CONFIG_HI_SVP_IVE_LBP 1
#define CONFIG_HI_SVP_IVE_NORM_GRAD 1
#define CONFIG_HI_SVP_IVE_ST_CANDI_CORNER 1
#define CONFIG_HI_SVP_IVE_RESIZE 1
#define CONFIG_HI_SVP_IVE_PERSP_TRANS 1
#define CONFIG_HI_SVP_IVE_KCF 1
#define CONFIG_HI_SVP_IVE_HOG 1
#define CONFIG_HI_SVP_MD 1
#define CONFIG_HI_SVP_MAU 1

/*
 * Debug Config
 */
#define CONFIG_HI_GDB_NO 1
#define CONFIG_HI_GDB "n"
#define CONFIG_HI_LOG_TRACE_SUPPORT 1
#define CONFIG_HI_LOG_TRACE_ALL 1
#define CONFIG_HI_LOG_TRACE_LEVEL 7

/*
 * Test Config
 */
