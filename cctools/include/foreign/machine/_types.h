/*
 * Copyright (c) 2003-2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
#ifndef _BSD_MACHINE__TYPES_H_
#define _BSD_MACHINE__TYPES_H_

#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__)
#include_next <machine/_types.h>
#else
#if defined (__ppc__) || defined (__ppc64__)
#include "ppc/_types.h"
#elif defined (__i386__) || defined(__x86_64__)
#include "i386/_types.h"
#elif defined (__arm__) || defined(__arm64__)
#include "arm/_types.h"
#else
#error architecture not supported
#endif
#endif /* __FreeBSD__ || __OpenBSD__ || __CYGWIN__ */

#if defined(_WIN64)
typedef long long LONGLONG_;
typedef unsigned long long ULONGLONG_;
typedef LONGLONG_ INT_PTR_;
typedef ULONGLONG_ UINT_PTR_;
typedef LONGLONG_ LONG_PTR_;
typedef ULONGLONG_ ULONG_PTR_;
#else
typedef int INT_PTR_;
typedef unsigned int UINT_PTR_;
typedef long LONG_PTR_;
typedef unsigned long ULONG_PTR_;
#endif

#endif /* _BSD_MACHINE__TYPES_H_ */