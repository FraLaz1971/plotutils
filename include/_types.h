/*	$OpenBSD: _types.h,v 1.9 2014/08/22 23:05:15 krw Exp $	*/

/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)types.h	8.3 (Berkeley) 1/5/94
 */

#ifndef _SYS__TYPES_H_
#define	_SYS__TYPES_H_

#include "_types.h" 

typedef long int	__blkcnt_t;	/* blocks allocated for file */
typedef  int	__blksize_t;	/* optimal blocksize for I/O */
typedef	long int	__clock_t;	/* ticks in CLOCKS_PER_SEC */
typedef	 int	__clockid_t;	/* CLOCK_* identifiers */
typedef	unsigned long	__cpuid_t;	/* CPU id */
typedef	 int	__dev_t;	/* device number */
typedef	unsigned int	__fixpt_t;	/* fixed point number */
typedef	unsigned long int	__fsblkcnt_t;	/* file system block count */
typedef	unsigned long int	__fsfilcnt_t;	/* file system file count */
typedef	unsigned int	__gid_t;	/* group id */
typedef	unsigned int	__id_t;		/* may contain pid, uid or gid */
typedef	unsigned int	__in_addr_t;	/* base type for internet address */
typedef	unsigned short	__in_port_t;	/* IP port type */
typedef	unsigned long int	__ino_t;	/* inode number */
typedef	long		__key_t;	/* IPC key (for Sys V IPC) */
typedef	unsigned int	__mode_t;	/* permissions */
typedef	unsigned int	__nlink_t;	/* link count */
typedef	long int	__off_t;	/* file offset or size */
typedef	 int	__pid_t;	/* process id */
typedef	unsigned long int	__rlim_t;	/* resource limit */
typedef	unsigned short	__sa_family_t;	/* sockaddr address family type */
typedef	 int	__segsz_t;	/* segment size */
typedef	unsigned int	__socklen_t;	/* length type for network syscalls */
typedef	long		__suseconds_t;	/* microseconds (signed) */
typedef	 int	__swblk_t;	/* swap offset */
typedef	long int	__time_t;	/* epoch time */
typedef	 int	__timer_t;	/* POSIX timer identifiers */
typedef	unsigned int	__uid_t;	/* user id */
typedef	unsigned int	__useconds_t;	/* microseconds */

/*
 * mbstate_t is an opaque object to keep conversion state, during multibyte
 * stream conversions. The content must not be referenced by user programs.
 */
typedef union {
	char __mbstate8[128];
	long int __mbstateL;			/* for alignment */
} __mbstate_t;

#endif /* !_SYS__TYPES_H_ */

