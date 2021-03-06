/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_VIRTIO_BLK_H
#define _LINUX_VIRTIO_BLK_H
#define LINUX_VIRTIO_BLK_H
#define LINUX_VIRTIO_BLK_H_
#define NDK_ANDROID_SUPPORT_LINUX_VIRTIO_BLK_H
#define NDK_ANDROID_SUPPORT_LINUX_VIRTIO_BLK_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_VIRTIO_BLK_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_VIRTIO_BLK_H_
#define _UAPI_LINUX_VIRTIO_BLK_H
#define _UAPI_LINUX_VIRTIO_BLK_H_
#define _LINUX_VIRTIO_BLK_H_
#include <museum/6.0.1/bionic/libc/linux/types.h>
#include <museum/6.0.1/bionic/libc/linux/virtio_ids.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/6.0.1/bionic/libc/linux/virtio_config.h>
#define VIRTIO_BLK_F_BARRIER 0
#define VIRTIO_BLK_F_SIZE_MAX 1
#define VIRTIO_BLK_F_SEG_MAX 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BLK_F_GEOMETRY 4
#define VIRTIO_BLK_F_RO 5
#define VIRTIO_BLK_F_BLK_SIZE 6
#define VIRTIO_BLK_F_SCSI 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BLK_F_WCE 9
#define VIRTIO_BLK_F_TOPOLOGY 10
#define VIRTIO_BLK_F_CONFIG_WCE 11
#define VIRTIO_BLK_F_MQ 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BLK_F_FLUSH VIRTIO_BLK_F_WCE
#define VIRTIO_BLK_ID_BYTES 20
struct virtio_blk_config {
  __u64 capacity;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 size_max;
  __u32 seg_max;
  struct virtio_blk_geometry {
    __u16 cylinders;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u8 heads;
    __u8 sectors;
  } geometry;
  __u32 blk_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 physical_block_exp;
  __u8 alignment_offset;
  __u16 min_io_size;
  __u32 opt_io_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 wce;
  __u8 unused;
  __u16 num_queues;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BLK_T_IN 0
#define VIRTIO_BLK_T_OUT 1
#define VIRTIO_BLK_T_SCSI_CMD 2
#define VIRTIO_BLK_T_FLUSH 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_BLK_T_GET_ID 8
#define VIRTIO_BLK_T_BARRIER 0x80000000
struct virtio_blk_outhdr {
  __u32 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ioprio;
  __u64 sector;
};
struct virtio_scsi_inhdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 errors;
  __u32 data_len;
  __u32 sense_len;
  __u32 residual;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define VIRTIO_BLK_S_OK 0
#define VIRTIO_BLK_S_IOERR 1
#define VIRTIO_BLK_S_UNSUPP 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
