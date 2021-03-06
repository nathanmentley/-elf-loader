//
//  SystemCallProcessor.sys_open.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Linux/SystemCalls/SystemCallProcessor.h>

void Linux::SystemCalls::SystemCallProcessor::sys_close() {}
void Linux::SystemCalls::SystemCallProcessor::sys_newstat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_newfstat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_newlstat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_poll() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lseek() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mmap() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mprotect() {}
void Linux::SystemCalls::SystemCallProcessor::sys_munmap() {}
void Linux::SystemCalls::SystemCallProcessor::sys_brk() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigaction() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigprocmask() {}
void Linux::SystemCalls::SystemCallProcessor::stub_rt_sigreturn() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ioctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pread64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pwrite64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_readv() {}
void Linux::SystemCalls::SystemCallProcessor::sys_writev() {}
void Linux::SystemCalls::SystemCallProcessor::sys_access() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pipe() {}
void Linux::SystemCalls::SystemCallProcessor::sys_select() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_yield() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mremap() {}
void Linux::SystemCalls::SystemCallProcessor::sys_msync() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mincore() {}
void Linux::SystemCalls::SystemCallProcessor::sys_madvise() {}
void Linux::SystemCalls::SystemCallProcessor::sys_shmget() {}
void Linux::SystemCalls::SystemCallProcessor::sys_shmat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_shmctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_dup() {}
void Linux::SystemCalls::SystemCallProcessor::sys_dup2() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pause() {}
void Linux::SystemCalls::SystemCallProcessor::sys_nanosleep() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getitimer() {}
void Linux::SystemCalls::SystemCallProcessor::sys_alarm() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setitimer() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getpid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sendfile64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_socket() {}
void Linux::SystemCalls::SystemCallProcessor::sys_connect() {}
void Linux::SystemCalls::SystemCallProcessor::sys_accept() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sendto() {}
void Linux::SystemCalls::SystemCallProcessor::sys_recvfrom() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sendmsg() {}
void Linux::SystemCalls::SystemCallProcessor::sys_recvmsg() {}
void Linux::SystemCalls::SystemCallProcessor::sys_shutdown() {}
void Linux::SystemCalls::SystemCallProcessor::sys_bind() {}
void Linux::SystemCalls::SystemCallProcessor::sys_listen() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getsockname() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getpeername() {}
void Linux::SystemCalls::SystemCallProcessor::sys_socketpair() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setsockopt() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getsockopt() {}
void Linux::SystemCalls::SystemCallProcessor::stub_clone() {}
void Linux::SystemCalls::SystemCallProcessor::stub_fork() {}
void Linux::SystemCalls::SystemCallProcessor::stub_vfork() {}
void Linux::SystemCalls::SystemCallProcessor::stub_execve() {}
void Linux::SystemCalls::SystemCallProcessor::sys_exit() {}
void Linux::SystemCalls::SystemCallProcessor::sys_wait4() {}
void Linux::SystemCalls::SystemCallProcessor::sys_kill() {}
void Linux::SystemCalls::SystemCallProcessor::sys_newuname() {}
void Linux::SystemCalls::SystemCallProcessor::sys_semget() {}
void Linux::SystemCalls::SystemCallProcessor::sys_semop() {}
void Linux::SystemCalls::SystemCallProcessor::sys_semctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_shmdt() {}
void Linux::SystemCalls::SystemCallProcessor::sys_msgget() {}
void Linux::SystemCalls::SystemCallProcessor::sys_msgsnd() {}
void Linux::SystemCalls::SystemCallProcessor::sys_msgrcv() {}
void Linux::SystemCalls::SystemCallProcessor::sys_msgctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fcntl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_flock() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fsync() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fdatasync() {}
void Linux::SystemCalls::SystemCallProcessor::sys_truncate() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ftruncate() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getdents() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getcwd() {}
void Linux::SystemCalls::SystemCallProcessor::sys_chdir() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fchdir() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rename() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mkdir() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rmdir() {}
void Linux::SystemCalls::SystemCallProcessor::sys_creat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_link() {}
void Linux::SystemCalls::SystemCallProcessor::sys_unlink() {}
void Linux::SystemCalls::SystemCallProcessor::sys_symlink() {}
void Linux::SystemCalls::SystemCallProcessor::sys_readlink() {}
void Linux::SystemCalls::SystemCallProcessor::sys_chmod() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fchmod() {}
void Linux::SystemCalls::SystemCallProcessor::sys_chown() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fchown() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lchown() {}
void Linux::SystemCalls::SystemCallProcessor::sys_umask() {}
void Linux::SystemCalls::SystemCallProcessor::sys_gettimeofday() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getrlimit() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getrusage() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sysinfo() {}
void Linux::SystemCalls::SystemCallProcessor::sys_times() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ptrace() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_syslog() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_geteuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getegid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setpgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getppid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getpgrp() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setsid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setreuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setregid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getgroups() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setgroups() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setresuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getresuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setresgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getresgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getpgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setfsuid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setfsgid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getsid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_capget() {}
void Linux::SystemCalls::SystemCallProcessor::sys_capset() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigpending() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigtimedwait() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigqueueinfo() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_sigsuspend() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sigaltstack() {}
void Linux::SystemCalls::SystemCallProcessor::sys_utime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mknod() {}
void Linux::SystemCalls::SystemCallProcessor::uselib() {}
void Linux::SystemCalls::SystemCallProcessor::sys_personality() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ustat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_statfs() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fstatfs() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sysfs() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getpriority() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setpriority() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_setparam() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_getparam() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_setscheduler() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_getscheduler() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_get_priority_max() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_get_priority_min() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_rr_get_interval() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mlock() {}
void Linux::SystemCalls::SystemCallProcessor::sys_munlock() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mlockall() {}
void Linux::SystemCalls::SystemCallProcessor::sys_munlockall() {}
void Linux::SystemCalls::SystemCallProcessor::sys_vhangup() {}
void Linux::SystemCalls::SystemCallProcessor::sys_modify_ldt() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pivot_root() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sysctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_prctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_arch_prctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_adjtimex() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setrlimit() {}
void Linux::SystemCalls::SystemCallProcessor::sys_chroot() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sync() {}
void Linux::SystemCalls::SystemCallProcessor::sys_acct() {}
void Linux::SystemCalls::SystemCallProcessor::sys_settimeofday() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mount() {}
void Linux::SystemCalls::SystemCallProcessor::sys_umount() {}
void Linux::SystemCalls::SystemCallProcessor::sys_swapon() {}
void Linux::SystemCalls::SystemCallProcessor::sys_swapoff() {}
void Linux::SystemCalls::SystemCallProcessor::sys_reboot() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sethostname() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setdomainname() {}
void Linux::SystemCalls::SystemCallProcessor::stub_iopl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ioperm() {}
void Linux::SystemCalls::SystemCallProcessor::sys_init_module() {}
void Linux::SystemCalls::SystemCallProcessor::sys_delete_module() {}
void Linux::SystemCalls::SystemCallProcessor::sys_quotactl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_gettid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_readahead() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lsetxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fsetxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lgetxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fgetxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_listxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_llistxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_flistxattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_removexattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lremovexattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fremovexattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_tkill() {}
void Linux::SystemCalls::SystemCallProcessor::sys_time() {}
void Linux::SystemCalls::SystemCallProcessor::sys_futex() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_setaffinity() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sched_getaffinity() {}
void Linux::SystemCalls::SystemCallProcessor::sys_set_thread_area() {}
void Linux::SystemCalls::SystemCallProcessor::sys_io_setup() {}
void Linux::SystemCalls::SystemCallProcessor::sys_io_destroy() {}
void Linux::SystemCalls::SystemCallProcessor::sys_io_getevents() {}
void Linux::SystemCalls::SystemCallProcessor::sys_io_submit() {}
void Linux::SystemCalls::SystemCallProcessor::sys_io_cancel() {}
void Linux::SystemCalls::SystemCallProcessor::sys_get_thread_area() {}
void Linux::SystemCalls::SystemCallProcessor::sys_lookup_dcookie() {}
void Linux::SystemCalls::SystemCallProcessor::sys_epoll_create() {}
void Linux::SystemCalls::SystemCallProcessor::sys_remap_file_pages() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getdents64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_set_tid_address() {}
void Linux::SystemCalls::SystemCallProcessor::sys_restart_syscall() {}
void Linux::SystemCalls::SystemCallProcessor::sys_semtimedop() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fadvise64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timer_create() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timer_settime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timer_gettime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timer_getoverrun() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timer_delete() {}
void Linux::SystemCalls::SystemCallProcessor::sys_clock_settime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_clock_gettime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_clock_getres() {}
void Linux::SystemCalls::SystemCallProcessor::sys_clock_nanosleep() {}
void Linux::SystemCalls::SystemCallProcessor::sys_exit_group() {}
void Linux::SystemCalls::SystemCallProcessor::sys_epoll_wait() {}
void Linux::SystemCalls::SystemCallProcessor::sys_epoll_ctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_tgkill() {}
void Linux::SystemCalls::SystemCallProcessor::sys_utimes() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mbind() {}
void Linux::SystemCalls::SystemCallProcessor::sys_set_mempolicy() {}
void Linux::SystemCalls::SystemCallProcessor::sys_get_mempolicy() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_open() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_unlink() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_timedsend() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_timedreceive() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_notify() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mq_getsetattr() {}
void Linux::SystemCalls::SystemCallProcessor::sys_kexec_load() {}
void Linux::SystemCalls::SystemCallProcessor::sys_waitid() {}
void Linux::SystemCalls::SystemCallProcessor::sys_add_key() {}
void Linux::SystemCalls::SystemCallProcessor::sys_request_key() {}
void Linux::SystemCalls::SystemCallProcessor::sys_keyctl() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ioprio_set() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ioprio_get() {}
void Linux::SystemCalls::SystemCallProcessor::sys_inotify_init() {}
void Linux::SystemCalls::SystemCallProcessor::sys_inotify_add_watch() {}
void Linux::SystemCalls::SystemCallProcessor::sys_inotify_rm_watch() {}
void Linux::SystemCalls::SystemCallProcessor::sys_migrate_pages() {}
void Linux::SystemCalls::SystemCallProcessor::sys_openat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mkdirat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_mknodat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fchownat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_futimesat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_newfstatat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_unlinkat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_renameat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_linkat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_symlinkat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_readlinkat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fchmodat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_faccessat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pselect6() {}
void Linux::SystemCalls::SystemCallProcessor::sys_ppoll() {}
void Linux::SystemCalls::SystemCallProcessor::sys_unshare() {}
void Linux::SystemCalls::SystemCallProcessor::sys_set_robust_list() {}
void Linux::SystemCalls::SystemCallProcessor::sys_get_robust_list() {}
void Linux::SystemCalls::SystemCallProcessor::sys_splice() {}
void Linux::SystemCalls::SystemCallProcessor::sys_tee() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sync_file_range() {}
void Linux::SystemCalls::SystemCallProcessor::sys_vmsplice() {}
void Linux::SystemCalls::SystemCallProcessor::sys_move_pages() {}
void Linux::SystemCalls::SystemCallProcessor::sys_utimensat() {}
void Linux::SystemCalls::SystemCallProcessor::sys_epoll_pwait() {}
void Linux::SystemCalls::SystemCallProcessor::sys_signalfd() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timerfd_create() {}
void Linux::SystemCalls::SystemCallProcessor::sys_eventfd() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fallocate() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timerfd_settime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_timerfd_gettime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_accept4() {}
void Linux::SystemCalls::SystemCallProcessor::sys_signalfd4() {}
void Linux::SystemCalls::SystemCallProcessor::sys_eventfd2() {}
void Linux::SystemCalls::SystemCallProcessor::sys_epoll_create1() {}
void Linux::SystemCalls::SystemCallProcessor::sys_dup3() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pipe2() {}
void Linux::SystemCalls::SystemCallProcessor::sys_inotify_init1() {}
void Linux::SystemCalls::SystemCallProcessor::sys_preadv() {}
void Linux::SystemCalls::SystemCallProcessor::sys_pwritev() {}
void Linux::SystemCalls::SystemCallProcessor::sys_rt_tgsigqueueinfo() {}
void Linux::SystemCalls::SystemCallProcessor::sys_perf_event_open() {}
void Linux::SystemCalls::SystemCallProcessor::sys_recvmmsg() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fanotify_init() {}
void Linux::SystemCalls::SystemCallProcessor::sys_fanotify_mark() {}
void Linux::SystemCalls::SystemCallProcessor::sys_prlimit64() {}
void Linux::SystemCalls::SystemCallProcessor::sys_name_to_handle_at() {}
void Linux::SystemCalls::SystemCallProcessor::sys_open_by_handle_at() {}
void Linux::SystemCalls::SystemCallProcessor::sys_clock_adjtime() {}
void Linux::SystemCalls::SystemCallProcessor::sys_syncfs() {}
void Linux::SystemCalls::SystemCallProcessor::sys_sendmmsg() {}
void Linux::SystemCalls::SystemCallProcessor::sys_setns() {}
void Linux::SystemCalls::SystemCallProcessor::sys_getcpu() {}
void Linux::SystemCalls::SystemCallProcessor::sys_process_vm_readv() {}
void Linux::SystemCalls::SystemCallProcessor::sys_process_vm_writev() {}
void Linux::SystemCalls::SystemCallProcessor::sys_kcmp() {}
void Linux::SystemCalls::SystemCallProcessor::sys_finit_module() {}