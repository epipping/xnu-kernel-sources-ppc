/*
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/* Copyright (c) 1992, 1995-1999 Apple Computer, Inc. All Rights Reserved */
/*
 *
 * The NEXTSTEP Software License Agreement specifies the terms
 * and conditions for redistribution.
 *
 */
#include <sys/appleapiopts.h>

#ifdef __APPLE_API_PRIVATE

#define	SYS_syscall	0
#define	SYS_exit	1
#define	SYS_fork	2
#define	SYS_read	3
#define	SYS_write	4
#define	SYS_open	5
#define	SYS_close	6
#define	SYS_wait4	7
				/* 8 is old creat */
#define	SYS_link	9
#define	SYS_unlink	10
				/* 11 is obsolete execv */
#define	SYS_chdir	12
#define	SYS_fchdir	13
#define	SYS_mknod	14
#define	SYS_chmod	15
#define	SYS_chown	16
				/* 17 is obsolete sbreak */
#if COMPAT_GETFSSTAT
				/* 18 is old getfsstat */
#else
#define	SYS_getfsstat	18
#endif
				/* 19 is old lseek */
#define	SYS_getpid	20
				/* 21 is obsolete mount */
				/* 22 is obsolete umount */
#define	SYS_setuid	23
#define	SYS_getuid	24
#define	SYS_geteuid	25
#define	SYS_ptrace	26
#define	SYS_recvmsg	27
#define	SYS_sendmsg	28
#define	SYS_recvfrom	29
#define	SYS_accept	30
#define	SYS_getpeername	31
#define	SYS_getsockname	32
#define	SYS_access	33
#define	SYS_chflags	34
#define	SYS_fchflags	35
#define	SYS_sync	36
#define	SYS_kill	37
				/* 38 is old stat */
#define	SYS_getppid	39
				/* 40 is old lstat */
#define	SYS_dup	41
#define	SYS_pipe	42
#define	SYS_getegid	43
#define	SYS_profil	44
#define	SYS_ktrace	45
#define	SYS_sigaction	46
#define	SYS_getgid	47
#define	SYS_sigprocmask	48
#define	SYS_getlogin	49
#define	SYS_setlogin	50
#define	SYS_acct	51
#define	SYS_sigpending	52
#define	SYS_sigaltstack	53
#define	SYS_ioctl	54
#define	SYS_reboot	55
#define	SYS_revoke	56
#define	SYS_symlink	57
#define	SYS_readlink	58
#define	SYS_execve	59
#define	SYS_umask	60
#define	SYS_chroot	61
				/* 62 is old fstat */
				/* 63 is unused */
				/* 64 is old getpagesize */
#define	SYS_msync	65
#define	SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	SYS_sbrk	69
#define	SYS_sstk	70
				/* 71 is old mmap */
				/* 72 is obsolete vadvise */
#define	SYS_munmap	73
#define	SYS_mprotect	74
#define	SYS_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	SYS_mincore	78
#define	SYS_getgroups	79
#define	SYS_setgroups	80
#define	SYS_getpgrp	81
#define	SYS_setpgid	82
#define	SYS_setitimer	83
				/* 84 is old wait */
#define	SYS_swapon	85
#define	SYS_getitimer	86
				/* 87 is old gethostname */
				/* 88 is old sethostname */
#define SYS_getdtablesize 89
#define	SYS_dup2	90
#define	SYS_fcntl	92
#define	SYS_select	93
				/* 94 is obsolete setdopt */
#define	SYS_fsync	95
#define	SYS_setpriority	96
#define	SYS_socket	97
#define	SYS_connect	98
				/* 99 is old accept */
#define	SYS_getpriority	100
				/* 101 is old send */
				/* 102 is old recv */
#define	SYS_sigreturn	103
#define	SYS_bind	104
#define	SYS_setsockopt	105
#define	SYS_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is old sigvec */
				/* 109 is old sigblock */
				/* 110 is old sigsetmask */
#define	SYS_sigsuspend	111
				/* 112 is old sigstack */
				/* 113 is old recvmsg */
				/* 114 is old sendmsg */
				/* 115 is obsolete vtrace */
#define	SYS_gettimeofday	116
#define	SYS_getrusage	117
#define	SYS_getsockopt	118
				/* 119 is obsolete resuba */
#define	SYS_readv	120
#define	SYS_writev	121
#define	SYS_settimeofday	122
#define	SYS_fchown	123
#define	SYS_fchmod	124
				/* 125 is old recvfrom */
				/* 126 is old setreuid */
				/* 127 is old setregid */
#define	SYS_rename	128
				/* 129 is old truncate */
				/* 130 is old ftruncate */
#define	SYS_flock	131
#define	SYS_mkfifo	132
#define	SYS_sendto	133
#define	SYS_shutdown	134
#define	SYS_socketpair	135
#define	SYS_mkdir	136
#define	SYS_rmdir	137
#define	SYS_utimes	138
#define	SYS_futimes	139
#define	SYS_adjtime	140
				/* 141 is old getpeername */
				/* 142 is old gethostid */
				/* 143 is old sethostid */
				/* 144 is old getrlimit */
				/* 145 is old setrlimit */
				/* 146 is old killpg */
#define	SYS_setsid	147
				/* 148 is obsolete setquota */
				/* 149 is obsolete quota */
				/* 150 is old getsockname */
#define	SYS_getpgid	151
#define SYS_setprivexec 152
#define	SYS_pread	153
#define	SYS_pwrite	154
#define	SYS_nfssvc	155
				/* 156 is old getdirentries */
#define	SYS_statfs	157
#define	SYS_fstatfs	158
#define SYS_unmount	159
				/* 160 is obsolete async_daemon */
#define	SYS_getfh	161
				/* 162 is old getdomainname */
				/* 163 is old setdomainname */
				/* 164 is obsolete pcfs_mount */
#define SYS_quotactl	165
				/* 166 is obsolete exportfs	*/
#define SYS_mount	167
				/* 168 is obsolete ustat */
				/* 169 is unused */
#define SYS_table	170
				/* 171 is old wait_3 */
				/* 172 is obsolete rpause */
				/* 173 is unused */
				/* 174 is obsolete getdents */
#define SYS_gc_control	175
#define SYS_add_profil	176
				/* 177 is unused */
				/* 178 is unused */
				/* 179 is unused */
#define SYS_kdebug_trace 180       
#define	SYS_setgid	181
#define	SYS_setegid	182
#define	SYS_seteuid	183
				/* 184 is unused */
				/* 185 is unused */
				/* 186 is unused */
				/* 187 is unused */
#define	SYS_stat	188
#define	SYS_fstat	189
#define	SYS_lstat	190
#define	SYS_pathconf	191
#define	SYS_fpathconf	192
#if COMPAT_GETFSSTAT
#define	SYS_getfsstat	193
#endif
#define	SYS_getrlimit	194
#define	SYS_setrlimit	195
#define SYS_getdirentries	196
#define	SYS_mmap	197
#define	SYS___syscall	198
#define	SYS_lseek	199
#define	SYS_truncate	200
#define	SYS_ftruncate	201
#define	SYS___sysctl	202
#define SYS_mlock	203
#define SYS_munlock 	204
#define	SYS_undelete	205
#define	SYS_ATsocket	206
#define	SYS_ATgetmsg	207
#define	SYS_ATputmsg	208
#define	SYS_ATPsndreq	209
#define	SYS_ATPsndrsp	210
#define	SYS_ATPgetreq	211
#define	SYS_ATPgetrsp	212
				/* 213-215 are reserved for AppleTalk */
#define SYS_mkcomplex	216 
#define SYS_statv	217		
#define SYS_lstatv	218 			
#define SYS_fstatv	219 			
#define SYS_getattrlist	220 		
#define SYS_setattrlist	221		
#define SYS_getdirentriesattr	222 	
#define SYS_exchangedata	223 				
#define SYS_checkuseraccess	224 
#define SYS_searchfs	 225

				/* 226 - 230 are reserved for HFS expansion */
				/* 231 - 249 are reserved  */
#define SYS_minherit	 250
#define	SYS_semsys	251
#define	SYS_msgsys	252
#define	SYS_shmsys	253
#define	SYS_semctl	254
#define	SYS_semget	255
#define	SYS_semop	256
#define	SYS_semconfig	257
#define	SYS_msgctl	258
#define	SYS_msgget	259
#define	SYS_msgsnd	260
#define	SYS_msgrcv	261
#define	SYS_shmat	262
#define	SYS_shmctl	263
#define	SYS_shmdt	264
#define	SYS_shmget	265
#define	SYS_shm_open	266
#define	SYS_shm_unlink	267
#define	SYS_sem_open	268
#define	SYS_sem_close	269
#define	SYS_sem_unlink	270
#define	SYS_sem_wait	271
#define	SYS_sem_trywait	272
#define	SYS_sem_post	273
#define	SYS_sem_getvalue 274
#define	SYS_sem_init	275
#define	SYS_sem_destroy	276
				/* 277 - 295 are reserved  */
#define SYS_load_shared_file 296
#define SYS_reset_shared_file 297
#define SYS_new_system_shared_regions 298
				/* 299 - 309 are reserved  */
#define	SYS_getsid	310
				/* 311 - 323 are reserved */
#define SYS_mlockall	 324
#define SYS_munlockall	 325
				/* 326 is reserved */
#define SYS_issetugid    327
#define SYS___pthread_kill    328
#define SYS_pthread_sigmask    329
#define SYS_sigwait    330
#endif /* __APPLE_API_PRIVATE */

