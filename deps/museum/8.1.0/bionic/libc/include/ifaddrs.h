/*
 * Copyright (C) 2015 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _IFADDRS_H_
#define _IFADDRS_H_
#define IFADDRS_H_
#define IFADDRS_H
#define NDK_ANDROID_SUPPORT_IFADDRS_H_
#define NDK_ANDROID_SUPPORT_IFADDRS_H
#define _IFADDRS_H

#include <museum/8.1.0/bionic/libc/sys/cdefs.h>
#include <museum/8.1.0/bionic/libc/netinet/in.h>
#include <museum/8.1.0/bionic/libc/sys/socket.h>

__BEGIN_DECLS

struct ifaddrs {
  struct ifaddrs* ifa_next;
  char* ifa_name;
  unsigned int ifa_flags;
  struct sockaddr* ifa_addr;
  struct sockaddr* ifa_netmask;
  union {
    struct sockaddr* ifu_broadaddr;
    struct sockaddr* ifu_dstaddr;
  } ifa_ifu;
  void* ifa_data;
};

#define ifa_broadaddr ifa_ifu.ifu_broadaddr
#define ifa_dstaddr ifa_ifu.ifu_dstaddr

void freeifaddrs(struct ifaddrs*) __INTRODUCED_IN(24);
int getifaddrs(struct ifaddrs**) __INTRODUCED_IN(24);

__END_DECLS

#endif
