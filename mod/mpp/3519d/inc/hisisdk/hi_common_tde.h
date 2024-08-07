/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_COMMON_TDE_H
#define HI_COMMON_TDE_H

#include "hi_type.h"
#include "ot_common_tde.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_ERR_TDE_BASE OT_ERR_TDE_BASE
#define HI_ERR_TDE_DEV_NOT_OPEN OT_ERR_TDE_DEV_NOT_OPEN
#define HI_ERR_TDE_DEV_OPEN_FAILED OT_ERR_TDE_DEV_OPEN_FAILED
#define HI_ERR_TDE_NULL_PTR OT_ERR_TDE_NULL_PTR
#define HI_ERR_TDE_NO_MEM OT_ERR_TDE_NO_MEM
#define HI_ERR_TDE_INVALID_HANDLE OT_ERR_TDE_INVALID_HANDLE
#define HI_ERR_TDE_INVALID_PARAM OT_ERR_TDE_INVALID_PARAM
#define HI_ERR_TDE_NOT_ALIGNED OT_ERR_TDE_NOT_ALIGNED
#define HI_ERR_TDE_MINIFICATION OT_ERR_TDE_MINIFICATION
#define HI_ERR_TDE_CLIP_AREA OT_ERR_TDE_CLIP_AREA
#define HI_ERR_TDE_JOB_TIMEOUT OT_ERR_TDE_JOB_TIMEOUT
#define HI_ERR_TDE_UNSUPPORTED_OPERATION OT_ERR_TDE_UNSUPPORTED_OPERATION
#define HI_ERR_TDE_QUERY_TIMEOUT OT_ERR_TDE_QUERY_TIMEOUT
#define HI_ERR_TDE_INTERRUPT OT_ERR_TDE_INTERRUPT
#define HI_ERR_TDE_BUTT OT_ERR_TDE_BUTT
typedef ot_tde_err_code hi_tde_err_code;
#define HI_TDE_COLOR_FORMAT_RGB444 OT_TDE_COLOR_FORMAT_RGB444
#define HI_TDE_COLOR_FORMAT_BGR444 OT_TDE_COLOR_FORMAT_BGR444
#define HI_TDE_COLOR_FORMAT_RGB555 OT_TDE_COLOR_FORMAT_RGB555
#define HI_TDE_COLOR_FORMAT_BGR555 OT_TDE_COLOR_FORMAT_BGR555
#define HI_TDE_COLOR_FORMAT_RGB565 OT_TDE_COLOR_FORMAT_RGB565
#define HI_TDE_COLOR_FORMAT_BGR565 OT_TDE_COLOR_FORMAT_BGR565
#define HI_TDE_COLOR_FORMAT_RGB888 OT_TDE_COLOR_FORMAT_RGB888
#define HI_TDE_COLOR_FORMAT_BGR888 OT_TDE_COLOR_FORMAT_BGR888
#define HI_TDE_COLOR_FORMAT_ARGB4444 OT_TDE_COLOR_FORMAT_ARGB4444
#define HI_TDE_COLOR_FORMAT_ABGR4444 OT_TDE_COLOR_FORMAT_ABGR4444
#define HI_TDE_COLOR_FORMAT_RGBA4444 OT_TDE_COLOR_FORMAT_RGBA4444
#define HI_TDE_COLOR_FORMAT_BGRA4444 OT_TDE_COLOR_FORMAT_BGRA4444
#define HI_TDE_COLOR_FORMAT_ARGB1555 OT_TDE_COLOR_FORMAT_ARGB1555
#define HI_TDE_COLOR_FORMAT_ABGR1555 OT_TDE_COLOR_FORMAT_ABGR1555
#define HI_TDE_COLOR_FORMAT_RGBA1555 OT_TDE_COLOR_FORMAT_RGBA1555
#define HI_TDE_COLOR_FORMAT_BGRA1555 OT_TDE_COLOR_FORMAT_BGRA1555
#define HI_TDE_COLOR_FORMAT_ARGB8565 OT_TDE_COLOR_FORMAT_ARGB8565
#define HI_TDE_COLOR_FORMAT_ABGR8565 OT_TDE_COLOR_FORMAT_ABGR8565
#define HI_TDE_COLOR_FORMAT_RGBA8565 OT_TDE_COLOR_FORMAT_RGBA8565
#define HI_TDE_COLOR_FORMAT_BGRA8565 OT_TDE_COLOR_FORMAT_BGRA8565
#define HI_TDE_COLOR_FORMAT_ARGB8888 OT_TDE_COLOR_FORMAT_ARGB8888
#define HI_TDE_COLOR_FORMAT_ABGR8888 OT_TDE_COLOR_FORMAT_ABGR8888
#define HI_TDE_COLOR_FORMAT_RGBA8888 OT_TDE_COLOR_FORMAT_RGBA8888
#define HI_TDE_COLOR_FORMAT_BGRA8888 OT_TDE_COLOR_FORMAT_BGRA8888
#define HI_TDE_COLOR_FORMAT_RABG8888 OT_TDE_COLOR_FORMAT_RABG8888
#define HI_TDE_COLOR_FORMAT_CLUT1 OT_TDE_COLOR_FORMAT_CLUT1
#define HI_TDE_COLOR_FORMAT_CLUT2 OT_TDE_COLOR_FORMAT_CLUT2
#define HI_TDE_COLOR_FORMAT_CLUT4 OT_TDE_COLOR_FORMAT_CLUT4
#define HI_TDE_COLOR_FORMAT_CLUT8 OT_TDE_COLOR_FORMAT_CLUT8
#define HI_TDE_COLOR_FORMAT_ACLUT44 OT_TDE_COLOR_FORMAT_ACLUT44
#define HI_TDE_COLOR_FORMAT_ACLUT88 OT_TDE_COLOR_FORMAT_ACLUT88
#define HI_TDE_COLOR_FORMAT_A1 OT_TDE_COLOR_FORMAT_A1
#define HI_TDE_COLOR_FORMAT_A8 OT_TDE_COLOR_FORMAT_A8
#define HI_TDE_COLOR_FORMAT_YCbCr888 OT_TDE_COLOR_FORMAT_YCbCr888
#define HI_TDE_COLOR_FORMAT_AYCbCr8888 OT_TDE_COLOR_FORMAT_AYCbCr8888
#define HI_TDE_COLOR_FORMAT_YCbCr422 OT_TDE_COLOR_FORMAT_YCbCr422
#define HI_TDE_COLOR_FORMAT_PKGYVYU OT_TDE_COLOR_FORMAT_PKGYVYU
#define HI_TDE_COLOR_FORMAT_PKGUYVY OT_TDE_COLOR_FORMAT_PKGUYVY
#define HI_TDE_COLOR_FORMAT_PKGVYUY OT_TDE_COLOR_FORMAT_PKGVYUY
#define HI_TDE_COLOR_FORMAT_PKGVUYY OT_TDE_COLOR_FORMAT_PKGVUYY
#define HI_TDE_COLOR_FORMAT_PKGYYUV OT_TDE_COLOR_FORMAT_PKGYYUV
#define HI_TDE_COLOR_FORMAT_PKGUVYY OT_TDE_COLOR_FORMAT_PKGUVYY
#define HI_TDE_COLOR_FORMAT_PKGYYVU OT_TDE_COLOR_FORMAT_PKGYYVU
#define HI_TDE_COLOR_FORMAT_JPG_YCbCr400MBP OT_TDE_COLOR_FORMAT_JPG_YCbCr400MBP
#define HI_TDE_COLOR_FORMAT_JPG_YCbCr422MBHP OT_TDE_COLOR_FORMAT_JPG_YCbCr422MBHP
#define HI_TDE_COLOR_FORMAT_JPG_YCbCr422MBVP OT_TDE_COLOR_FORMAT_JPG_YCbCr422MBVP
#define HI_TDE_COLOR_FORMAT_MP1_YCbCr420MBP OT_TDE_COLOR_FORMAT_MP1_YCbCr420MBP
#define HI_TDE_COLOR_FORMAT_MP2_YCbCr420MBP OT_TDE_COLOR_FORMAT_MP2_YCbCr420MBP
#define HI_TDE_COLOR_FORMAT_MP2_YCbCr420MBI OT_TDE_COLOR_FORMAT_MP2_YCbCr420MBI
#define HI_TDE_COLOR_FORMAT_JPG_YCbCr420MBP OT_TDE_COLOR_FORMAT_JPG_YCbCr420MBP
#define HI_TDE_COLOR_FORMAT_JPG_YCbCr444MBP OT_TDE_COLOR_FORMAT_JPG_YCbCr444MBP
#define HI_TDE_COLOR_FORMAT_MAX OT_TDE_COLOR_FORMAT_MAX
typedef ot_tde_color_format hi_tde_color_format;
#define HI_TDE_MB_COLOR_FORMAT_JPG_YCbCr400MBP OT_TDE_MB_COLOR_FORMAT_JPG_YCbCr400MBP
#define HI_TDE_MB_COLOR_FORMAT_JPG_YCbCr422MBHP OT_TDE_MB_COLOR_FORMAT_JPG_YCbCr422MBHP
#define HI_TDE_MB_COLOR_FORMAT_JPG_YCbCr422MBVP OT_TDE_MB_COLOR_FORMAT_JPG_YCbCr422MBVP
#define HI_TDE_MB_COLOR_FORMAT_MP1_YCbCr420MBP OT_TDE_MB_COLOR_FORMAT_MP1_YCbCr420MBP
#define HI_TDE_MB_COLOR_FORMAT_MP2_YCbCr420MBP OT_TDE_MB_COLOR_FORMAT_MP2_YCbCr420MBP
#define HI_TDE_MB_COLOR_FORMAT_MP2_YCbCr420MBI OT_TDE_MB_COLOR_FORMAT_MP2_YCbCr420MBI
#define HI_TDE_MB_COLOR_FORMAT_JPG_YCbCr420MBP OT_TDE_MB_COLOR_FORMAT_JPG_YCbCr420MBP
#define HI_TDE_MB_COLOR_FORMAT_JPG_YCbCr444MBP OT_TDE_MB_COLOR_FORMAT_JPG_YCbCr444MBP
#define HI_TDE_MB_COLOR_FORMAT_MAX OT_TDE_MB_COLOR_FORMAT_MAX
typedef ot_tde_mb_color_format hi_tde_mb_color_format;
typedef ot_tde_surface hi_tde_surface;
typedef ot_tde_mb_surface hi_tde_mb_surface;
typedef ot_tde_rect hi_tde_rect;
typedef ot_tde_none_src hi_tde_none_src;
typedef ot_tde_single_src hi_tde_single_src;
typedef ot_tde_mb_src hi_tde_mb_src;
typedef ot_tde_double_src hi_tde_double_src;
#define HI_TDE_ALPHA_BLENDING_NONE OT_TDE_ALPHA_BLENDING_NONE
#define HI_TDE_ALPHA_BLENDING_BLEND OT_TDE_ALPHA_BLENDING_BLEND
#define HI_TDE_ALPHA_BLENDING_ROP OT_TDE_ALPHA_BLENDING_ROP
#define HI_TDE_ALPHA_BLENDING_COLORIZE OT_TDE_ALPHA_BLENDING_COLORIZE
#define HI_TDE_ALPHA_BLENDING_MAX OT_TDE_ALPHA_BLENDING_MAX
typedef ot_tde_alpha_blending hi_tde_alpha_blending;
#define HI_TDE_ROP_BLACK OT_TDE_ROP_BLACK
#define HI_TDE_ROP_NOTMERGEPEN OT_TDE_ROP_NOTMERGEPEN
#define HI_TDE_ROP_MASKNOTPEN OT_TDE_ROP_MASKNOTPEN
#define HI_TDE_ROP_NOTCOPYPEN OT_TDE_ROP_NOTCOPYPEN
#define HI_TDE_ROP_MASKPENNOT OT_TDE_ROP_MASKPENNOT
#define HI_TDE_ROP_NOT OT_TDE_ROP_NOT
#define HI_TDE_ROP_XORPEN OT_TDE_ROP_XORPEN
#define HI_TDE_ROP_NOTMASKPEN OT_TDE_ROP_NOTMASKPEN
#define HI_TDE_ROP_MASKPEN OT_TDE_ROP_MASKPEN
#define HI_TDE_ROP_NOTXORPEN OT_TDE_ROP_NOTXORPEN
#define HI_TDE_ROP_NOP OT_TDE_ROP_NOP
#define HI_TDE_ROP_MERGENOTPEN OT_TDE_ROP_MERGENOTPEN
#define HI_TDE_ROP_COPYPEN OT_TDE_ROP_COPYPEN
#define HI_TDE_ROP_MERGEPENNOT OT_TDE_ROP_MERGEPENNOT
#define HI_TDE_ROP_MERGEPEN OT_TDE_ROP_MERGEPEN
#define HI_TDE_ROP_WHITE OT_TDE_ROP_WHITE
#define HI_TDE_ROP_MAX OT_TDE_ROP_MAX
typedef ot_tde_rop_mode hi_tde_rop_mode;
#define HI_TDE_MIRROR_NONE OT_TDE_MIRROR_NONE
#define HI_TDE_MIRROR_HOR OT_TDE_MIRROR_HOR
#define HI_TDE_MIRROR_VER OT_TDE_MIRROR_VER
#define HI_TDE_MIRROR_BOTH OT_TDE_MIRROR_BOTH
#define HI_TDE_MIRROR_MAX OT_TDE_MIRROR_MAX
typedef ot_tde_mirror_mode hi_tde_mirror_mode;
#define HI_TDE_CLIP_MODE_NONE OT_TDE_CLIP_MODE_NONE
#define HI_TDE_CLIP_MODE_INSIDE OT_TDE_CLIP_MODE_INSIDE
#define HI_TDE_CLIP_MODE_OUTSIDE OT_TDE_CLIP_MODE_OUTSIDE
#define HI_TDE_CLIP_MODE_MAX OT_TDE_CLIP_MODE_MAX
typedef ot_tde_clip_mode hi_tde_clip_mode;
#define HI_TDE_MB_RESIZE_NONE OT_TDE_MB_RESIZE_NONE
#define HI_TDE_MB_RESIZE_QUALITY_LOW OT_TDE_MB_RESIZE_QUALITY_LOW
#define HI_TDE_MB_RESIZE_QUALITY_MIDDLE OT_TDE_MB_RESIZE_QUALITY_MIDDLE
#define HI_TDE_MB_RESIZE_QUALITY_HIGH OT_TDE_MB_RESIZE_QUALITY_HIGH
#define HI_TDE_MB_RESIZE_MAX OT_TDE_MB_RESIZE_MAX
typedef ot_tde_mb_resize hi_tde_mb_resize;
typedef ot_tde_fill_color hi_tde_fill_color;
#define HI_TDE_COLORKEY_MODE_NONE OT_TDE_COLORKEY_MODE_NONE
#define HI_TDE_COLORKEY_MODE_FG OT_TDE_COLORKEY_MODE_FG
#define HI_TDE_COLORKEY_MODE_BG OT_TDE_COLORKEY_MODE_BG
#define HI_TDE_COLORKEY_MODE_MAX OT_TDE_COLORKEY_MODE_MAX
typedef ot_tde_colorkey_mode hi_tde_colorkey_mode;
typedef ot_tde_colorkey_component hi_tde_colorkey_component;
typedef ot_tde_colorkey hi_tde_colorkey;
#define HI_TDE_OUT_ALPHA_FROM_NORM OT_TDE_OUT_ALPHA_FROM_NORM
#define HI_TDE_OUT_ALPHA_FROM_BG OT_TDE_OUT_ALPHA_FROM_BG
#define HI_TDE_OUT_ALPHA_FROM_FG OT_TDE_OUT_ALPHA_FROM_FG
#define HI_TDE_OUT_ALPHA_FROM_GLOBALALPHA OT_TDE_OUT_ALPHA_FROM_GLOBALALPHA
#define HI_TDE_OUT_ALPHA_FROM_MAX OT_TDE_OUT_ALPHA_FROM_MAX
typedef ot_tde_out_alpha_from hi_tde_out_alpha_from;
#define HI_TDE_FILTER_MODE_COLOR OT_TDE_FILTER_MODE_COLOR
#define HI_TDE_FILTER_MODE_ALPHA OT_TDE_FILTER_MODE_ALPHA
#define HI_TDE_FILTER_MODE_BOTH OT_TDE_FILTER_MODE_BOTH
#define HI_TDE_FILTER_MODE_NONE OT_TDE_FILTER_MODE_NONE
#define HI_TDE_FILTER_MODE_MAX OT_TDE_FILTER_MODE_MAX
typedef ot_tde_filter_mode hi_tde_filter_mode;
#define HI_TDE_BLEND_ZERO OT_TDE_BLEND_ZERO
#define HI_TDE_BLEND_ONE OT_TDE_BLEND_ONE
#define HI_TDE_BLEND_SRC2COLOR OT_TDE_BLEND_SRC2COLOR
#define HI_TDE_BLEND_INVSRC2COLOR OT_TDE_BLEND_INVSRC2COLOR
#define HI_TDE_BLEND_SRC2ALPHA OT_TDE_BLEND_SRC2ALPHA
#define HI_TDE_BLEND_INVSRC2ALPHA OT_TDE_BLEND_INVSRC2ALPHA
#define HI_TDE_BLEND_SRC1COLOR OT_TDE_BLEND_SRC1COLOR
#define HI_TDE_BLEND_INVSRC1COLOR OT_TDE_BLEND_INVSRC1COLOR
#define HI_TDE_BLEND_SRC1ALPHA OT_TDE_BLEND_SRC1ALPHA
#define HI_TDE_BLEND_INVSRC1ALPHA OT_TDE_BLEND_INVSRC1ALPHA
#define HI_TDE_BLEND_SRC2ALPHASAT OT_TDE_BLEND_SRC2ALPHASAT
#define HI_TDE_BLEND_MAX OT_TDE_BLEND_MAX
typedef ot_tde_blend_mode hi_tde_blend_mode;
#define HI_TDE_BLEND_CMD_NONE OT_TDE_BLEND_CMD_NONE
#define HI_TDE_BLEND_CMD_CLEAR OT_TDE_BLEND_CMD_CLEAR
#define HI_TDE_BLEND_CMD_SRC OT_TDE_BLEND_CMD_SRC
#define HI_TDE_BLEND_CMD_SRCOVER OT_TDE_BLEND_CMD_SRCOVER
#define HI_TDE_BLEND_CMD_DSTOVER OT_TDE_BLEND_CMD_DSTOVER
#define HI_TDE_BLEND_CMD_SRCIN OT_TDE_BLEND_CMD_SRCIN
#define HI_TDE_BLEND_CMD_DSTIN OT_TDE_BLEND_CMD_DSTIN
#define HI_TDE_BLEND_CMD_SRCOUT OT_TDE_BLEND_CMD_SRCOUT
#define HI_TDE_BLEND_CMD_DSTOUT OT_TDE_BLEND_CMD_DSTOUT
#define HI_TDE_BLEND_CMD_SRCATOP OT_TDE_BLEND_CMD_SRCATOP
#define HI_TDE_BLEND_CMD_DSTATOP OT_TDE_BLEND_CMD_DSTATOP
#define HI_TDE_BLEND_CMD_ADD OT_TDE_BLEND_CMD_ADD
#define HI_TDE_BLEND_CMD_XOR OT_TDE_BLEND_CMD_XOR
#define HI_TDE_BLEND_CMD_DST OT_TDE_BLEND_CMD_DST
#define HI_TDE_BLEND_CMD_CONFIG OT_TDE_BLEND_CMD_CONFIG
#define HI_TDE_BLEND_CMD_MAX OT_TDE_BLEND_CMD_MAX
typedef ot_tde_blend_cmd hi_tde_blend_cmd;
typedef ot_tde_blend_opt hi_tde_blend_opt;
typedef ot_tde_csc_opt hi_tde_csc_opt;
typedef ot_tde_opt hi_tde_opt;
typedef ot_tde_mb_opt hi_tde_mb_opt;
typedef ot_tde_pattern_fill_opt hi_tde_pattern_fill_opt;
#define HI_TDE_ROTATE_CLOCKWISE_90 OT_TDE_ROTATE_CLOCKWISE_90
#define HI_TDE_ROTATE_CLOCKWISE_180 OT_TDE_ROTATE_CLOCKWISE_180
#define HI_TDE_ROTATE_CLOCKWISE_270 OT_TDE_ROTATE_CLOCKWISE_270
#define HI_TDE_ROTATE_MAX OT_TDE_ROTATE_MAX
typedef ot_tde_rotate_angle hi_tde_rotate_angle;
typedef ot_tde_corner_rect_info hi_tde_corner_rect_info;
typedef ot_tde_corner_rect hi_tde_corner_rect;
typedef ot_tde_line hi_tde_line;

#ifdef __cplusplus
}
#endif
#endif /* HI_COMMON_TDE_H */
