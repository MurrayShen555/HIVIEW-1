/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_COMMON_VIDEO_H
#define HI_COMMON_VIDEO_H

#include "hi_type.h"
#include "hi_common.h"
#include "ot_common_video.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_ISP_BAYER_CHN OT_ISP_BAYER_CHN
#define HI_DCF_DESCRIPTION_LENGTH OT_DCF_DESCRIPTION_LENGTH
#define HI_DCF_CAPTURE_TIME_LENGTH OT_DCF_CAPTURE_TIME_LENGTH
#define HI_CFACOLORPLANE OT_CFACOLORPLANE
#define HI_DNG_NP_SIZE OT_DNG_NP_SIZE
#define HI_ISP_WB_GAIN_NUM OT_ISP_WB_GAIN_NUM
#define HI_ISP_CAP_CCM_NUM OT_ISP_CAP_CCM_NUM
#define HI_SRC_LENS_COEF_NUM OT_SRC_LENS_COEF_NUM
#define HI_DST_LENS_COEF_NUM OT_DST_LENS_COEF_NUM
#define HI_ISP_WDR_MAX_FRAME_NUM OT_ISP_WDR_MAX_FRAME_NUM
#define HI_OP_MODE_AUTO OT_OP_MODE_AUTO
#define HI_OP_MODE_MANUAL OT_OP_MODE_MANUAL
#define HI_OP_MODE_BUTT OT_OP_MODE_BUTT
typedef ot_op_mode hi_op_mode;
#define HI_VB_SRC_COMMON OT_VB_SRC_COMMON
#define HI_VB_SRC_MOD OT_VB_SRC_MOD
#define HI_VB_SRC_PRIVATE OT_VB_SRC_PRIVATE
#define HI_VB_SRC_USER OT_VB_SRC_USER
#define HI_VB_SRC_BUTT OT_VB_SRC_BUTT
typedef ot_vb_src hi_vb_src;
#define HI_ASPECT_RATIO_NONE OT_ASPECT_RATIO_NONE
#define HI_ASPECT_RATIO_AUTO OT_ASPECT_RATIO_AUTO
#define HI_ASPECT_RATIO_MANUAL OT_ASPECT_RATIO_MANUAL
#define HI_ASPECT_RATIO_BUTT OT_ASPECT_RATIO_BUTT
typedef ot_aspect_ratio_type hi_aspect_ratio_type;
#define HI_VIDEO_FIELD_TOP OT_VIDEO_FIELD_TOP
#define HI_VIDEO_FIELD_BOTTOM OT_VIDEO_FIELD_BOTTOM
#define HI_VIDEO_FIELD_INTERLACED OT_VIDEO_FIELD_INTERLACED
#define HI_VIDEO_FIELD_FRAME OT_VIDEO_FIELD_FRAME
#define HI_VIDEO_FIELD_BUTT OT_VIDEO_FIELD_BUTT
typedef ot_video_field hi_video_field;
#define HI_VIDEO_FORMAT_LINEAR OT_VIDEO_FORMAT_LINEAR
#define HI_VIDEO_FORMAT_TILE_64x16 OT_VIDEO_FORMAT_TILE_64x16
#define HI_VIDEO_FORMAT_TILE_16x8 OT_VIDEO_FORMAT_TILE_16x8
#define HI_VIDEO_FORMAT_TILE_32x4 OT_VIDEO_FORMAT_TILE_32x4
#define HI_VIDEO_FORMAT_BUTT OT_VIDEO_FORMAT_BUTT
typedef ot_video_format hi_video_format;
#define HI_COMPRESS_MODE_NONE OT_COMPRESS_MODE_NONE
#define HI_COMPRESS_MODE_SEG OT_COMPRESS_MODE_SEG
#define HI_COMPRESS_MODE_SEG_COMPACT OT_COMPRESS_MODE_SEG_COMPACT
#define HI_COMPRESS_MODE_TILE OT_COMPRESS_MODE_TILE
#define HI_COMPRESS_MODE_LINE OT_COMPRESS_MODE_LINE
#define HI_COMPRESS_MODE_FRAME OT_COMPRESS_MODE_FRAME
#define HI_COMPRESS_MODE_FMAP OT_COMPRESS_MODE_FMAP
#define HI_COMPRESS_MODE_BUTT OT_COMPRESS_MODE_BUTT
typedef ot_compress_mode hi_compress_mode;
#define HI_VIDEO_DISPLAY_MODE_PREVIEW OT_VIDEO_DISPLAY_MODE_PREVIEW
#define HI_VIDEO_DISPLAY_MODE_PLAYBACK OT_VIDEO_DISPLAY_MODE_PLAYBACK
#define HI_VIDEO_DISPLAY_MODE_BUTT OT_VIDEO_DISPLAY_MODE_BUTT
typedef ot_video_display_mode hi_video_display_mode;
#define HI_FRAME_FLAG_SNAP_FLASH OT_FRAME_FLAG_SNAP_FLASH
#define HI_FRAME_FLAG_SNAP_CUR OT_FRAME_FLAG_SNAP_CUR
#define HI_FRAME_FLAG_SNAP_REF OT_FRAME_FLAG_SNAP_REF
#define HI_FRAME_FLAG_SNAP_END OT_FRAME_FLAG_SNAP_END
#define HI_FRAME_FLAG_MIRROR OT_FRAME_FLAG_MIRROR
#define HI_FRAME_FLAG_FLIP OT_FRAME_FLAG_FLIP
#define HI_FRAME_FLAG_DGAIN_BYPASS OT_FRAME_FLAG_DGAIN_BYPASS
#define HI_FRAME_FLAG_OUTPUT_NONE OT_FRAME_FLAG_OUTPUT_NONE
#define HI_FRAME_FLAG_USER_SEND_DISCARD OT_FRAME_FLAG_USER_SEND_DISCARD
#define HI_FRAME_FLAG_BUTT OT_FRAME_FLAG_BUTT
typedef ot_frame_flag hi_frame_flag;
#define HI_COLOR_GAMUT_BT601 OT_COLOR_GAMUT_BT601
#define HI_COLOR_GAMUT_BT709 OT_COLOR_GAMUT_BT709
#define HI_COLOR_GAMUT_BT2020 OT_COLOR_GAMUT_BT2020
#define HI_COLOR_GAMUT_USER OT_COLOR_GAMUT_USER
#define HI_COLOR_GAMUT_BUTT OT_COLOR_GAMUT_BUTT
typedef ot_color_gamut hi_color_gamut;
#define HI_PIXEL_FORMAT_RGB_444 OT_PIXEL_FORMAT_RGB_444
#define HI_PIXEL_FORMAT_RGB_555 OT_PIXEL_FORMAT_RGB_555
#define HI_PIXEL_FORMAT_RGB_565 OT_PIXEL_FORMAT_RGB_565
#define HI_PIXEL_FORMAT_RGB_888 OT_PIXEL_FORMAT_RGB_888
#define HI_PIXEL_FORMAT_BGR_444 OT_PIXEL_FORMAT_BGR_444
#define HI_PIXEL_FORMAT_BGR_555 OT_PIXEL_FORMAT_BGR_555
#define HI_PIXEL_FORMAT_BGR_565 OT_PIXEL_FORMAT_BGR_565
#define HI_PIXEL_FORMAT_BGR_888 OT_PIXEL_FORMAT_BGR_888
#define HI_PIXEL_FORMAT_ARGB_1555 OT_PIXEL_FORMAT_ARGB_1555
#define HI_PIXEL_FORMAT_ARGB_4444 OT_PIXEL_FORMAT_ARGB_4444
#define HI_PIXEL_FORMAT_ARGB_8565 OT_PIXEL_FORMAT_ARGB_8565
#define HI_PIXEL_FORMAT_ARGB_8888 OT_PIXEL_FORMAT_ARGB_8888
#define HI_PIXEL_FORMAT_ARGB_2BPP OT_PIXEL_FORMAT_ARGB_2BPP
#define HI_PIXEL_FORMAT_ARGB_CLUT2 OT_PIXEL_FORMAT_ARGB_CLUT2
#define HI_PIXEL_FORMAT_ARGB_CLUT4 OT_PIXEL_FORMAT_ARGB_CLUT4
#define HI_PIXEL_FORMAT_ABGR_1555 OT_PIXEL_FORMAT_ABGR_1555
#define HI_PIXEL_FORMAT_ABGR_4444 OT_PIXEL_FORMAT_ABGR_4444
#define HI_PIXEL_FORMAT_ABGR_8565 OT_PIXEL_FORMAT_ABGR_8565
#define HI_PIXEL_FORMAT_ABGR_8888 OT_PIXEL_FORMAT_ABGR_8888
#define HI_PIXEL_FORMAT_RGB_BAYER_8BPP OT_PIXEL_FORMAT_RGB_BAYER_8BPP
#define HI_PIXEL_FORMAT_RGB_BAYER_10BPP OT_PIXEL_FORMAT_RGB_BAYER_10BPP
#define HI_PIXEL_FORMAT_RGB_BAYER_12BPP OT_PIXEL_FORMAT_RGB_BAYER_12BPP
#define HI_PIXEL_FORMAT_RGB_BAYER_14BPP OT_PIXEL_FORMAT_RGB_BAYER_14BPP
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP OT_PIXEL_FORMAT_RGB_BAYER_16BPP
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_L10 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_L10
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_L12 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_L12
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_L14 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_L14
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_H10 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_H10
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_H12 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_H12
#define HI_PIXEL_FORMAT_RGB_BAYER_16BPP_H14 OT_PIXEL_FORMAT_RGB_BAYER_16BPP_H14
#define HI_PIXEL_FORMAT_YVU_PLANAR_422 OT_PIXEL_FORMAT_YVU_PLANAR_422
#define HI_PIXEL_FORMAT_YVU_PLANAR_420 OT_PIXEL_FORMAT_YVU_PLANAR_420
#define HI_PIXEL_FORMAT_YVU_PLANAR_444 OT_PIXEL_FORMAT_YVU_PLANAR_444
#define HI_PIXEL_FORMAT_YVU_SEMIPLANAR_422 OT_PIXEL_FORMAT_YVU_SEMIPLANAR_422
#define HI_PIXEL_FORMAT_YVU_SEMIPLANAR_420 OT_PIXEL_FORMAT_YVU_SEMIPLANAR_420
#define HI_PIXEL_FORMAT_YVU_SEMIPLANAR_444 OT_PIXEL_FORMAT_YVU_SEMIPLANAR_444
#define HI_PIXEL_FORMAT_YUV_SEMIPLANAR_422 OT_PIXEL_FORMAT_YUV_SEMIPLANAR_422
#define HI_PIXEL_FORMAT_YUV_SEMIPLANAR_420 OT_PIXEL_FORMAT_YUV_SEMIPLANAR_420
#define HI_PIXEL_FORMAT_YUV_SEMIPLANAR_444 OT_PIXEL_FORMAT_YUV_SEMIPLANAR_444
#define HI_PIXEL_FORMAT_YUYV_PACKAGE_422 OT_PIXEL_FORMAT_YUYV_PACKAGE_422
#define HI_PIXEL_FORMAT_YVYU_PACKAGE_422 OT_PIXEL_FORMAT_YVYU_PACKAGE_422
#define HI_PIXEL_FORMAT_UYVY_PACKAGE_422 OT_PIXEL_FORMAT_UYVY_PACKAGE_422
#define HI_PIXEL_FORMAT_VYUY_PACKAGE_422 OT_PIXEL_FORMAT_VYUY_PACKAGE_422
#define HI_PIXEL_FORMAT_YYUV_PACKAGE_422 OT_PIXEL_FORMAT_YYUV_PACKAGE_422
#define HI_PIXEL_FORMAT_YYVU_PACKAGE_422 OT_PIXEL_FORMAT_YYVU_PACKAGE_422
#define HI_PIXEL_FORMAT_UVYY_PACKAGE_422 OT_PIXEL_FORMAT_UVYY_PACKAGE_422
#define HI_PIXEL_FORMAT_VUYY_PACKAGE_422 OT_PIXEL_FORMAT_VUYY_PACKAGE_422
#define HI_PIXEL_FORMAT_VY1UY0_PACKAGE_422 OT_PIXEL_FORMAT_VY1UY0_PACKAGE_422
#define HI_PIXEL_FORMAT_YUV_400 OT_PIXEL_FORMAT_YUV_400
#define HI_PIXEL_FORMAT_UV_420 OT_PIXEL_FORMAT_UV_420
#define HI_PIXEL_FORMAT_BGR_888_PLANAR OT_PIXEL_FORMAT_BGR_888_PLANAR
#define HI_PIXEL_FORMAT_HSV_888_PACKAGE OT_PIXEL_FORMAT_HSV_888_PACKAGE
#define HI_PIXEL_FORMAT_HSV_888_PLANAR OT_PIXEL_FORMAT_HSV_888_PLANAR
#define HI_PIXEL_FORMAT_LAB_888_PACKAGE OT_PIXEL_FORMAT_LAB_888_PACKAGE
#define HI_PIXEL_FORMAT_LAB_888_PLANAR OT_PIXEL_FORMAT_LAB_888_PLANAR
#define HI_PIXEL_FORMAT_S8C1 OT_PIXEL_FORMAT_S8C1
#define HI_PIXEL_FORMAT_S8C2_PACKAGE OT_PIXEL_FORMAT_S8C2_PACKAGE
#define HI_PIXEL_FORMAT_S8C2_PLANAR OT_PIXEL_FORMAT_S8C2_PLANAR
#define HI_PIXEL_FORMAT_S8C3_PLANAR OT_PIXEL_FORMAT_S8C3_PLANAR
#define HI_PIXEL_FORMAT_S16C1 OT_PIXEL_FORMAT_S16C1
#define HI_PIXEL_FORMAT_U8C1 OT_PIXEL_FORMAT_U8C1
#define HI_PIXEL_FORMAT_U16C1 OT_PIXEL_FORMAT_U16C1
#define HI_PIXEL_FORMAT_S32C1 OT_PIXEL_FORMAT_S32C1
#define HI_PIXEL_FORMAT_U32C1 OT_PIXEL_FORMAT_U32C1
#define HI_PIXEL_FORMAT_U64C1 OT_PIXEL_FORMAT_U64C1
#define HI_PIXEL_FORMAT_S64C1 OT_PIXEL_FORMAT_S64C1
#define HI_PIXEL_FORMAT_BUTT OT_PIXEL_FORMAT_BUTT
typedef ot_pixel_format hi_pixel_format;
#define HI_DYNAMIC_RANGE_SDR8 OT_DYNAMIC_RANGE_SDR8
#define HI_DYNAMIC_RANGE_SDR10 OT_DYNAMIC_RANGE_SDR10
#define HI_DYNAMIC_RANGE_HDR10 OT_DYNAMIC_RANGE_HDR10
#define HI_DYNAMIC_RANGE_HLG OT_DYNAMIC_RANGE_HLG
#define HI_DYNAMIC_RANGE_SLF OT_DYNAMIC_RANGE_SLF
#define HI_DYNAMIC_RANGE_XDR OT_DYNAMIC_RANGE_XDR
#define HI_DYNAMIC_RANGE_BUTT OT_DYNAMIC_RANGE_BUTT
typedef ot_dynamic_range hi_dynamic_range;
#define HI_DATA_BIT_WIDTH_8 OT_DATA_BIT_WIDTH_8
#define HI_DATA_BIT_WIDTH_10 OT_DATA_BIT_WIDTH_10
#define HI_DATA_BIT_WIDTH_12 OT_DATA_BIT_WIDTH_12
#define HI_DATA_BIT_WIDTH_14 OT_DATA_BIT_WIDTH_14
#define HI_DATA_BIT_WIDTH_16 OT_DATA_BIT_WIDTH_16
#define HI_DATA_BIT_WIDTH_32 OT_DATA_BIT_WIDTH_32
#define HI_DATA_BIT_WIDTH_64 OT_DATA_BIT_WIDTH_64
#define HI_DATA_BIT_WIDTH_BUTT OT_DATA_BIT_WIDTH_BUTT
typedef ot_data_bit_width hi_data_bit_width;
typedef ot_border hi_border;
typedef ot_point hi_point;
typedef ot_size hi_size;
typedef ot_rect hi_rect;
#define HI_COORD_ABS OT_COORD_ABS
#define HI_COORD_RATIO OT_COORD_RATIO
#define HI_COORD_BUTT OT_COORD_BUTT
typedef ot_coord hi_coord;
#define HI_COVER_RECT OT_COVER_RECT
#define HI_COVER_QUAD OT_COVER_QUAD
#define HI_COVER_BUTT OT_COVER_BUTT
typedef ot_cover_type hi_cover_type;
typedef ot_quad_cover hi_quad_cover;
typedef ot_rect_cover hi_rect_cover;
typedef ot_cover hi_cover;
#define HI_MOSAIC_BLK_SIZE_4 OT_MOSAIC_BLK_SIZE_4
#define HI_MOSAIC_BLK_SIZE_8 OT_MOSAIC_BLK_SIZE_8
#define HI_MOSAIC_BLK_SIZE_16 OT_MOSAIC_BLK_SIZE_16
#define HI_MOSAIC_BLK_SIZE_32 OT_MOSAIC_BLK_SIZE_32
#define HI_MOSAIC_BLK_SIZE_64 OT_MOSAIC_BLK_SIZE_64
#define HI_MOSAIC_BLK_SIZE_128 OT_MOSAIC_BLK_SIZE_128
#define HI_MOSAIC_BLK_SIZE_BUTT OT_MOSAIC_BLK_SIZE_BUTT
typedef ot_mosaic_blk_size hi_mosaic_blk_size;
typedef ot_mosaic hi_mosaic;
typedef ot_crop_info hi_crop_info;
typedef ot_frame_rate_ctrl hi_frame_rate_ctrl;
typedef ot_aspect_ratio hi_aspect_ratio;
typedef ot_video_supplement_misc hi_video_supplement_misc;
typedef ot_video_supplement hi_video_supplement;
typedef ot_video_frame hi_video_frame;
typedef ot_video_frame_info hi_video_frame_info;
typedef ot_vb_calc_cfg hi_vb_calc_cfg;
typedef ot_bmp hi_bmp;
typedef ot_dis_motion_data hi_dis_motion_data;
typedef ot_dis_motion_info hi_dis_motion_info;
typedef ot_dst_point_info hi_dst_point_info;
typedef ot_dis_motion_data_info hi_dis_motion_data_info;
typedef ot_ldc_v1_attr hi_ldc_v1_attr;
typedef ot_dis_ldc_attr hi_dis_ldc_attr;
typedef ot_ldc_v2_attr hi_ldc_v2_attr;
#define HI_DIS_PRIVATE_NUM OT_DIS_PRIVATE_NUM
#define HI_DIS_MOTIONDATA_NUM OT_DIS_MOTIONDATA_NUM
#define HI_DIS_POINT_NUM OT_DIS_POINT_NUM
#define HI_LDC_V1 OT_LDC_V1
#define HI_LDC_V2 OT_LDC_V2
#define HI_LDC_VERSION_BUTT OT_LDC_VERSION_BUTT
typedef ot_ldc_version hi_ldc_version;
typedef ot_ldc_attr hi_ldc_attr;
#define HI_ROTATION_0 OT_ROTATION_0
#define HI_ROTATION_90 OT_ROTATION_90
#define HI_ROTATION_180 OT_ROTATION_180
#define HI_ROTATION_270 OT_ROTATION_270
#define HI_ROTATION_BUTT OT_ROTATION_BUTT
typedef ot_rotation hi_rotation;
#define HI_ROTATION_VIEW_TYPE_ALL OT_ROTATION_VIEW_TYPE_ALL
#define HI_ROTATION_VIEW_TYPE_TYPICAL OT_ROTATION_VIEW_TYPE_TYPICAL
#define HI_ROTATION_VIEW_TYPE_INSIDE OT_ROTATION_VIEW_TYPE_INSIDE
#define HI_ROTATION_VIEW_TYPE_BUTT OT_ROTATION_VIEW_TYPE_BUTT
typedef ot_rotation_view_type hi_rotation_view_type;
typedef ot_free_rotation_attr hi_free_rotation_attr;
#define HI_ROTATION_ANG_FIXED OT_ROTATION_ANG_FIXED
#define HI_ROTATION_ANG_FREE OT_ROTATION_ANG_FREE
#define HI_ROTATION_ANG_FREE_HP OT_ROTATION_ANG_FREE_HP
#define HI_ROTATION_ANG_BUTT OT_ROTATION_ANG_BUTT
typedef ot_rotation_type hi_rotation_type;
#define HI_LUT_CELL_SIZE_16 OT_LUT_CELL_SIZE_16
#define HI_LUT_CELL_SIZE_32 OT_LUT_CELL_SIZE_32
#define HI_LUT_CELL_SIZE_64 OT_LUT_CELL_SIZE_64
#define HI_LUT_CELL_SIZE_128 OT_LUT_CELL_SIZE_128
#define HI_LUT_CELL_SIZE_256 OT_LUT_CELL_SIZE_256
#define HI_LUT_CELL_SIZE_BUTT OT_LUT_CELL_SIZE_BUTT
typedef ot_lut_cell_size hi_lut_cell_size;
typedef ot_gdc_param hi_gdc_param;
typedef ot_lut hi_lut;
typedef ot_blend_param hi_blend_param;
#define HI_STITCH_BLEND OT_STITCH_BLEND
#define HI_STITCH_NOBLEND_HOR OT_STITCH_NOBLEND_HOR
#define HI_STITCH_NOBLEND_VER OT_STITCH_NOBLEND_VER
#define HI_STITCH_NOBLEND_QR OT_STITCH_NOBLEND_QR
#define HI_STITCH_BUTT OT_STITCH_BUTT
typedef ot_stitch_mode hi_stitch_mode;
#define HI_STITCH_CORRECTION_CYLINDRICAL OT_STITCH_CORRECTION_CYLINDRICAL
#define HI_STITCH_CORRECTION_LUT OT_STITCH_CORRECTION_LUT
#define HI_STITCH_CORRECTION_BUTT OT_STITCH_CORRECTION_BUTT
typedef ot_stitch_correction_mode hi_stitch_correction_mode;
typedef ot_cylindrical_attr hi_cylindrical_attr;
typedef ot_stitch_correction_attr hi_stitch_correction_attr;
typedef ot_ldc_attr hi_ldc_attr;
typedef ot_spread_attr hi_spread_attr;
typedef ot_rotation_attr hi_rotation_attr;
typedef ot_pmf_attr hi_pmf_attr;
typedef ot_fov_attr hi_fov_attr;
#define HI_LUT_CONNECT_MODE OT_LUT_CONNECT_MODE
#define HI_LUT_FUSION_MODE OT_LUT_FUSION_MODE
#define HI_LUT_MODE_BUTT OT_LUT_MODE_BUTT
typedef ot_lut_mode hi_lut_mode;
typedef ot_lut_attr hi_lut_attr;
typedef ot_stitch_attr hi_stitch_attr;
typedef ot_stitch_blend_param hi_stitch_blend_param;
typedef ot_stitch_luma_sync_param hi_stitch_luma_sync_param;
typedef ot_zoom_attr hi_zoom_attr;

#define HI_FRAME_INTERRUPT_START OT_FRAME_INTERRUPT_START
#define HI_FRAME_INTERRUPT_EARLY OT_FRAME_INTERRUPT_EARLY
#define HI_FRAME_INTERRUPT_EARLY_END OT_FRAME_INTERRUPT_EARLY_END
#define HI_FRAME_INTERRUPT_EARLY_EARLY OT_FRAME_INTERRUPT_EARLY_EARLY
#define HI_FRAME_INTERRUPT_BUTT OT_FRAME_INTERRUPT_BUTT
typedef ot_frame_interrupt_type hi_frame_interrupt_type;
typedef ot_frame_interrupt_attr hi_frame_interrupt_attr;
#define HI_DATA_RATE_X1 OT_DATA_RATE_X1
#define HI_DATA_RATE_X2 OT_DATA_RATE_X2
#define HI_DATA_RATE_BUTT OT_DATA_RATE_BUTT
typedef ot_data_rate hi_data_rate;
#define HI_WDR_MODE_NONE OT_WDR_MODE_NONE
#define HI_WDR_MODE_BUILT_IN OT_WDR_MODE_BUILT_IN
#define HI_WDR_MODE_QUADRA OT_WDR_MODE_QUADRA
#define HI_WDR_MODE_2To1_LINE OT_WDR_MODE_2To1_LINE
#define HI_WDR_MODE_2To1_FRAME OT_WDR_MODE_2To1_FRAME
#define HI_WDR_MODE_3To1_LINE OT_WDR_MODE_3To1_LINE
#define HI_WDR_MODE_3To1_FRAME OT_WDR_MODE_3To1_FRAME
#define HI_WDR_MODE_4To1_LINE OT_WDR_MODE_4To1_LINE
#define HI_WDR_MODE_4To1_FRAME OT_WDR_MODE_4To1_FRAME
#define HI_WDR_MODE_BUTT OT_WDR_MODE_BUTT
typedef ot_wdr_mode hi_wdr_mode;
#define HI_CORNER_RECT_TYPE_CORNER OT_CORNER_RECT_TYPE_CORNER
#define HI_CORNER_RECT_TYPE_FULL_LINE OT_CORNER_RECT_TYPE_FULL_LINE
#define HI_CORNER_RECT_TYPE_BUTT OT_CORNER_RECT_TYPE_BUTT
typedef ot_corner_rect_type hi_corner_rect_type;
typedef ot_corner_rect hi_corner_rect;
typedef ot_corner_rect_attr hi_corner_rect_attr;
typedef ot_isp_dcf_const_info hi_isp_dcf_const_info;
typedef ot_isp_dcf_update_info hi_isp_dcf_update_info;
typedef ot_isp_dcf_info hi_isp_dcf_info;
typedef ot_jpeg_dcf hi_jpeg_dcf;
#define HI_ISP_FSWDR_NORMAL_MODE OT_ISP_FSWDR_NORMAL_MODE
#define HI_ISP_FSWDR_LONG_FRAME_MODE OT_ISP_FSWDR_LONG_FRAME_MODE
#define HI_ISP_FSWDR_AUTO_LONG_FRAME_MODE OT_ISP_FSWDR_AUTO_LONG_FRAME_MODE
#define HI_ISP_FSWDR_MODE_BUTT OT_ISP_FSWDR_MODE_BUTT
typedef ot_isp_fswdr_mode hi_isp_fswdr_mode;
typedef ot_isp_frame_info hi_isp_frame_info;
typedef ot_isp_hdr_info hi_isp_hdr_info;
typedef ot_isp_attach_info hi_isp_attach_info;
typedef ot_isp_colorgammut_info hi_isp_colorgammut_info;
typedef ot_dng_rational hi_dng_rational;
typedef ot_dng_image_dynamic_info hi_dng_image_dynamic_info;
typedef ot_isp_config_info hi_isp_config_info;
typedef ot_low_delay_info hi_low_delay_info;
#define HI_SCHEDULE_NORMAL OT_SCHEDULE_NORMAL
#define HI_SCHEDULE_QUICK OT_SCHEDULE_QUICK
#define HI_SCHEDULE_BUTT OT_SCHEDULE_BUTT
typedef ot_schedule_mode hi_schedule_mode;
#define HI_NR_S_IDX_LEN OT_NR_S_IDX_LEN
#define HI_NR_TYPE_VIDEO_NORM OT_NR_TYPE_VIDEO_NORM
#define HI_NR_TYPE_SNAP_NORM OT_NR_TYPE_SNAP_NORM
#define HI_NR_TYPE_VIDEO_SPATIAL OT_NR_TYPE_VIDEO_SPATIAL
#define HI_NR_TYPE_VIDEO_ENHANCED OT_NR_TYPE_VIDEO_ENHANCED
#define HI_NR_TYPE_BUTT OT_NR_TYPE_BUTT
typedef ot_ai3dnr_adv_param hi_ai3dnr_adv_param;
typedef ot_ai3dnr_adv_param_v1 hi_ai3dnr_adv_param_v1;
typedef ot_ai3dnr_auto_adv_param hi_ai3dnr_auto_adv_param;
typedef ot_ai3dnr_manual_adv_param hi_ai3dnr_manual_adv_param;
typedef ot_ai3dnr_adv_v1 hi_ai3dnr_adv_v1;
typedef ot_nr_type hi_nr_type;
#define HI_NR_MOTION_MODE_NORM OT_NR_MOTION_MODE_NORM
#define HI_NR_MOTION_MODE_COMPENSATION OT_NR_MOTION_MODE_COMPENSATION
#define HI_NR_MOTION_MODE_BUTT OT_NR_MOTION_MODE_BUTT
typedef ot_nr_motion_mode hi_nr_motion_mode;
typedef ot_nr_v1_iey hi_nr_v1_iey;
typedef ot_nr_v1_sfy hi_nr_v1_sfy;
typedef ot_nr_v1_adv_iey hi_nr_v1_adv_iey;
typedef ot_nr_v1_adv_sfy hi_nr_v1_adv_sfy;
typedef ot_nr_v1_tfy hi_nr_v1_tfy;
typedef ot_nr_v1_mdy hi_nr_v1_mdy;
typedef ot_nr_v1_nrc0 hi_nr_v1_nrc0;
typedef ot_nr_v1_nrc1 hi_nr_v1_nrc1;
typedef ot_nr_v1 hi_nr_v1;
typedef ot_nr_param_manual_v1 hi_nr_param_manual_v1;
typedef ot_nr_param_auto_v1 hi_nr_param_auto_v1;
typedef ot_nr_norm_param_v1 hi_nr_norm_param_v1;
typedef ot_nr_adv_param hi_nr_adv_param;
typedef ot_nr_version hi_nr_version;
typedef ot_3dnr_param hi_3dnr_param;
typedef ot_3dnr_attr hi_3dnr_attr;
typedef ot_3dnr_pos_type hi_3dnr_pos_type;
#define HI_GDC_MAX_STITCH_NUM OT_GDC_MAX_STITCH_NUM
#define HI_GDC_COMMON_COEF_NUM OT_GDC_COMMON_COEF_NUM
#define HI_FMU_MIN_PAGE_NUM OT_FMU_MIN_PAGE_NUM
#define HI_FMU_MAX_Y_PAGE_NUM OT_FMU_MAX_Y_PAGE_NUM
#define HI_FMU_MAX_C_PAGE_NUM OT_FMU_MAX_C_PAGE_NUM
#define HI_3DNR_POS_VI OT_3DNR_POS_VI
#define HI_3DNR_POS_VPSS OT_3DNR_POS_VPSS
#define HI_3DNR_POS_BUTT OT_3DNR_POS_BUTT
#define HI_NR_V1 OT_NR_V1
#define HI_NR_BUTT OT_NR_BUTT
typedef ot_fmu_mode hi_fmu_mode;
#define HI_FMU_MODE_OFF OT_FMU_MODE_OFF
#define HI_FMU_MODE_WRAP OT_FMU_MODE_WRAP
#define HI_FMU_MODE_DIRECT OT_FMU_MODE_DIRECT
#define HI_FMU_MODE_BUTT OT_FMU_MODE_BUTT
typedef ot_fmu_id hi_fmu_id;
#define HI_FMU_ID_VI OT_FMU_ID_VI
#define HI_FMU_ID_VPSS OT_FMU_ID_VPSS
#define HI_FMU_ID_BUTT OT_FMU_ID_BUTT
typedef ot_pic_buf_attr hi_pic_buf_attr;
typedef ot_venc_buf_attr hi_venc_buf_attr;
typedef ot_fmu_attr hi_fmu_attr;
#define HI_SCALE_COEF_TYPE_NORMAL OT_SCALE_COEF_TYPE_NORMAL
#define HI_SCALE_COEF_TYPE_BILINEAR OT_SCALE_COEF_TYPE_BILINEAR
#define HI_SCALE_COEF_TYPE_BUTT OT_SCALE_COEF_TYPE_BUTT
typedef ot_scale_coef_type hi_scale_coef_type;

#ifdef __cplusplus
}
#endif
#endif /* HI_COMMON_VIDEO_H */
