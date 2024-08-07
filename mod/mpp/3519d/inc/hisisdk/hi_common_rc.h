/*
  Copyright (c), 2001-2024, Shenshu Tech. Co., Ltd.
 */

#ifndef HI_COMMON_RC_H
#define HI_COMMON_RC_H

#include "hi_type.h"
#include "hi_defines.h"
#include "ot_common_rc.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HI_VENC_TEXTURE_THRESHOLD_SIZE OT_VENC_TEXTURE_THRESHOLD_SIZE
#define HI_VENC_MAX_HIERARCHY_NUM OT_VENC_MAX_HIERARCHY_NUM
#define HI_VENC_RC_MODE_H264_ABR OT_VENC_RC_MODE_H264_ABR
#define HI_VENC_RC_MODE_H264_CBR OT_VENC_RC_MODE_H264_CBR
#define HI_VENC_RC_MODE_H264_VBR OT_VENC_RC_MODE_H264_VBR
#define HI_VENC_RC_MODE_H264_AVBR OT_VENC_RC_MODE_H264_AVBR
#define HI_VENC_RC_MODE_H264_QVBR OT_VENC_RC_MODE_H264_QVBR
#define HI_VENC_RC_MODE_H264_CVBR OT_VENC_RC_MODE_H264_CVBR
#define HI_VENC_RC_MODE_H264_FIXQP OT_VENC_RC_MODE_H264_FIXQP
#define HI_VENC_RC_MODE_H264_QPMAP OT_VENC_RC_MODE_H264_QPMAP
#define HI_VENC_RC_MODE_MJPEG_CBR OT_VENC_RC_MODE_MJPEG_CBR
#define HI_VENC_RC_MODE_MJPEG_VBR OT_VENC_RC_MODE_MJPEG_VBR
#define HI_VENC_RC_MODE_MJPEG_FIXQP OT_VENC_RC_MODE_MJPEG_FIXQP
#define HI_VENC_RC_MODE_H265_ABR OT_VENC_RC_MODE_H265_ABR
#define HI_VENC_RC_MODE_H265_CBR OT_VENC_RC_MODE_H265_CBR
#define HI_VENC_RC_MODE_H265_VBR OT_VENC_RC_MODE_H265_VBR
#define HI_VENC_RC_MODE_H265_AVBR OT_VENC_RC_MODE_H265_AVBR
#define HI_VENC_RC_MODE_H265_QVBR OT_VENC_RC_MODE_H265_QVBR
#define HI_VENC_RC_MODE_H265_CVBR OT_VENC_RC_MODE_H265_CVBR
#define HI_VENC_RC_MODE_H265_FIXQP OT_VENC_RC_MODE_H265_FIXQP
#define HI_VENC_RC_MODE_H265_QPMAP OT_VENC_RC_MODE_H265_QPMAP
#define HI_VENC_RC_MODE_BUTT OT_VENC_RC_MODE_BUTT
typedef ot_venc_rc_mode hi_venc_rc_mode;
#define HI_VENC_RC_QPMAP_MODE_MEAN_QP OT_VENC_RC_QPMAP_MODE_MEAN_QP
#define HI_VENC_RC_QPMAP_MODE_MIN_QP OT_VENC_RC_QPMAP_MODE_MIN_QP
#define HI_VENC_RC_QPMAP_MODE_MAX_QP OT_VENC_RC_QPMAP_MODE_MAX_QP
#define HI_VENC_RC_QPMAP_MODE_BUTT OT_VENC_RC_QPMAP_MODE_BUTT
typedef ot_venc_rc_qpmap_mode hi_venc_rc_qpmap_mode;
typedef ot_venc_h264_fixqp hi_venc_h264_fixqp;
typedef ot_venc_h264_abr hi_venc_h264_abr;
typedef ot_venc_h264_cbr hi_venc_h264_cbr;
typedef ot_venc_h264_vbr hi_venc_h264_vbr;
typedef ot_venc_h264_cvbr hi_venc_h264_cvbr;
typedef ot_venc_h264_avbr hi_venc_h264_avbr;
typedef ot_venc_h264_qpmap hi_venc_h264_qpmap;
typedef ot_venc_h264_qvbr hi_venc_h264_qvbr;
typedef ot_venc_h265_qpmap hi_venc_h265_qpmap;
typedef ot_venc_h265_abr hi_venc_h265_abr;
typedef ot_venc_h265_cbr hi_venc_h265_cbr;
typedef ot_venc_h265_vbr hi_venc_h265_vbr;
typedef ot_venc_h265_avbr hi_venc_h265_avbr;
typedef ot_venc_h265_fixqp hi_venc_h265_fixqp;
typedef ot_venc_h265_qvbr hi_venc_h265_qvbr;
typedef ot_venc_h265_cvbr hi_venc_h265_cvbr;
typedef ot_venc_mjpeg_fixqp hi_venc_mjpeg_fixqp;
typedef ot_venc_mjpeg_cbr hi_venc_mjpeg_cbr;
typedef ot_venc_mjpeg_vbr hi_venc_mjpeg_vbr;
typedef ot_venc_rc_attr hi_venc_rc_attr;
#define HI_VENC_SUPER_FRAME_NONE OT_VENC_SUPER_FRAME_NONE
#define HI_VENC_SUPER_FRAME_DISCARD OT_VENC_SUPER_FRAME_DISCARD
#define HI_VENC_SUPER_FRAME_REENCODE OT_VENC_SUPER_FRAME_REENCODE
#define HI_VENC_SUPER_FRAME_BUTT OT_VENC_SUPER_FRAME_BUTT
typedef ot_venc_super_frame_mode hi_venc_super_frame_mode;
typedef ot_venc_h264_abr_param hi_venc_h264_abr_param;
typedef ot_venc_h264_cbr_param hi_venc_h264_cbr_param;
typedef ot_venc_h264_vbr_param hi_venc_h264_vbr_param;
typedef ot_venc_h264_avbr_param hi_venc_h264_avbr_param;
typedef ot_venc_h264_qvbr_param hi_venc_h264_qvbr_param;
typedef ot_venc_h264_cvbr_param hi_venc_h264_cvbr_param;
typedef ot_venc_mjpeg_cbr_param hi_venc_mjpeg_cbr_param;
typedef ot_venc_mjpeg_vbr_param hi_venc_mjpeg_vbr_param;
typedef ot_venc_h265_abr_param hi_venc_h265_abr_param;
typedef ot_venc_h265_cbr_param hi_venc_h265_cbr_param;
typedef ot_venc_h265_vbr_param hi_venc_h265_vbr_param;
typedef ot_venc_h265_avbr_param hi_venc_h265_avbr_param;
typedef ot_venc_h265_qvbr_param hi_venc_h265_qvbr_param;
typedef ot_venc_h265_cvbr_param hi_venc_h265_cvbr_param;
typedef ot_venc_scene_chg_detect hi_venc_scene_chg_detect;
typedef ot_venc_rc_param hi_venc_rc_param;
#define HI_VENC_FRAME_LOST_NORMAL OT_VENC_FRAME_LOST_NORMAL
#define HI_VENC_FRAME_LOST_P_SKIP OT_VENC_FRAME_LOST_P_SKIP
#define HI_VENC_FRAME_LOST_BUTT OT_VENC_FRAME_LOST_BUTT
typedef ot_venc_frame_lost_mode hi_venc_frame_lost_mode;
typedef ot_venc_frame_lost_strategy hi_venc_frame_lost_strategy;
#define HI_VENC_REENCODE_BIT_RATE_FIRST OT_VENC_REENCODE_BIT_RATE_FIRST
#define HI_VENC_REENCODE_FRAME_BITS_FIRST OT_VENC_REENCODE_FRAME_BITS_FIRST
#define HI_VENC_REENCODE_BUTT OT_VENC_REENCODE_BUTT
typedef ot_venc_reencode_priority hi_venc_reencode_priority;
typedef ot_venc_super_frame_strategy hi_venc_super_frame_strategy;
typedef ot_venc_rc_adv_param hi_venc_rc_adv_param;
typedef ot_venc_hierarchical_qp hi_venc_hierarchical_qp;
typedef ot_venc_debreath_effect hi_venc_debreath_effect;

#ifdef __cplusplus
}
#endif
#endif /* HI_COMMON_RC_H */
