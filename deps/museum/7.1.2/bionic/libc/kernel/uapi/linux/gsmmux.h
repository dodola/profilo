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
#ifndef _LINUX_GSMMUX_H
#define _LINUX_GSMMUX_H
#include <museum/7.1.2/bionic/libc/linux/if.h>
#include <museum/7.1.2/bionic/libc/linux/ioctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.1.2/bionic/libc/linux/types.h>
struct gsm_config {
  unsigned int adaption;
  unsigned int encapsulation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int initiator;
  unsigned int t1;
  unsigned int t2;
  unsigned int t3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int n2;
  unsigned int mru;
  unsigned int mtu;
  unsigned int k;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int i;
  unsigned int unused[8];
};
#define GSMIOC_GETCONF _IOR('G', 0, struct gsm_config)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSMIOC_SETCONF _IOW('G', 1, struct gsm_config)
struct gsm_netconfig {
  unsigned int adaption;
  unsigned short protocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short unused2;
  char if_name[IFNAMSIZ];
  __u8 unused[28];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GSMIOC_ENABLE_NET _IOW('G', 2, struct gsm_netconfig)
#define GSMIOC_DISABLE_NET _IO('G', 3)
#endif