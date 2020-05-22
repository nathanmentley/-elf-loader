//
//  SystemCallProcessor.process.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/ProcessorUnsupportedOperationException.h>

#include <ElfLoader/Linux/SystemCalls/SystemCallProcessor.h>

void Linux::SystemCalls::SystemCallProcessor::process(SystemCall call)
{
    throw new Core::Exceptions::ProcessorUnsupportedOperationException(
        "Inside linux system call translation layer. Not supported."
    );

    switch (call)
    {
        case SystemCall::sys_read:
            sys_read();
            break;
        case SystemCall::sys_write:
            sys_write();
            break;
        case SystemCall::sys_open:
            sys_open();
            break;
        case SystemCall::sys_close:
            sys_close();
            break;
        case SystemCall::sys_newstat:
            sys_newstat();
            break;
        case SystemCall::sys_newfstat:
            sys_newfstat();
            break;
        case SystemCall::sys_newlstat:
            sys_newlstat();
            break;
        case SystemCall::sys_poll:
            sys_poll();
            break;
        case SystemCall::sys_lseek:
            sys_lseek();
            break;
        case SystemCall::sys_mmap:
            sys_mmap();
            break;
        case SystemCall::sys_mprotect:
            sys_mprotect();
            break;
        case SystemCall::sys_munmap:
            sys_munmap();
            break;
        case SystemCall::sys_brk:
            sys_brk();
            break;
        case SystemCall::sys_rt_sigaction:
            sys_rt_sigaction();
            break;
        case SystemCall::sys_rt_sigprocmask:
            sys_rt_sigprocmask();
            break;
        case SystemCall::stub_rt_sigreturn:
            stub_rt_sigreturn();
            break;
        case SystemCall::sys_ioctl:
            sys_ioctl();
            break;
        case SystemCall::sys_pread64:
            sys_pread64();
            break;
        case SystemCall::sys_pwrite64:
            sys_pwrite64();
            break;
        case SystemCall::sys_readv:
            sys_readv();
            break;
        case SystemCall::sys_writev:
            sys_writev();
            break;
        case SystemCall::sys_access:
            sys_access();
            break;
        case SystemCall::sys_pipe:
            sys_pipe();
            break;
        case SystemCall::sys_select:
            sys_select();
            break;
        case SystemCall::sys_sched_yield:
            sys_sched_yield();
            break;
        case SystemCall::sys_mremap:
            sys_mremap();
            break;
        case SystemCall::sys_msync:
            sys_msync();
            break;
        case SystemCall::sys_mincore:
            sys_mincore();
            break;
        case SystemCall::sys_madvise:
            sys_madvise();
            break;
        case SystemCall::sys_shmget:
            sys_shmget();
            break;
        case SystemCall::sys_shmat:
            sys_shmat();
            break;
        case SystemCall::sys_shmctl:
            sys_shmctl();
            break;
        case SystemCall::sys_dup:
            sys_dup();
            break;
        case SystemCall::sys_dup2:
            sys_dup2();
            break;
        case SystemCall::sys_pause:
            sys_pause();
            break;
        case SystemCall::sys_nanosleep:
            sys_nanosleep();
            break;
        case SystemCall::sys_getitimer:
            sys_getitimer();
            break;
        case SystemCall::sys_alarm:
            sys_alarm();
            break;
        case SystemCall::sys_setitimer:
            sys_setitimer();
            break;
        case SystemCall::sys_getpid:
            sys_getpid();
            break;
        case SystemCall::sys_sendfile64:
            sys_sendfile64();
            break;
        case SystemCall::sys_socket:
            sys_socket();
            break;
        case SystemCall::sys_connect:
            sys_connect();
            break;
        case SystemCall::sys_accept:
            sys_accept();
            break;
        case SystemCall::sys_sendto:
            sys_sendto();
            break;
        case SystemCall::sys_recvfrom:
            sys_recvfrom();
            break;
        case SystemCall::sys_sendmsg:
            sys_sendmsg();
            break;
        case SystemCall::sys_recvmsg:
            sys_recvmsg();
            break;
        case SystemCall::sys_shutdown:
            sys_shutdown();
            break;
        case SystemCall::sys_bind:
            sys_bind();
            break;
        case SystemCall::sys_listen:
            sys_listen();
            break;
        case SystemCall::sys_getsockname:
            sys_getsockname();
            break;
        case SystemCall::sys_getpeername:
            sys_getpeername();
            break;
        case SystemCall::sys_socketpair:
            sys_socketpair();
            break;
        case SystemCall::sys_setsockopt:
            sys_setsockopt();
            break;
        case SystemCall::sys_getsockopt:
            sys_getsockopt();
            break;
        case SystemCall::stub_clone:
            stub_clone();
            break;
        case SystemCall::stub_fork:
            stub_fork();
            break;
        case SystemCall::stub_vfork:
            stub_vfork();
            break;
        case SystemCall::stub_execve:
            stub_execve();
            break;
        case SystemCall::sys_exit:
            sys_exit();
            break;
        case SystemCall::sys_wait4:
            sys_wait4();
            break;
        case SystemCall::sys_kill:
            sys_kill();
            break;
        case SystemCall::sys_newuname:
            sys_newuname();
            break;
        case SystemCall::sys_semget:
            sys_semget();
            break;
        case SystemCall::sys_semop:
            sys_semop();
            break;
        case SystemCall::sys_semctl:
            sys_semctl();
            break;
        case SystemCall::sys_shmdt:
            sys_shmdt();
            break;
        case SystemCall::sys_msgget:
            sys_msgget();
            break;
        case SystemCall::sys_msgsnd:
            sys_msgsnd();
            break;
        case SystemCall::sys_msgrcv:
            sys_msgrcv();
            break;
        case SystemCall::sys_msgctl:
            sys_msgctl();
            break;
        case SystemCall::sys_fcntl:
            sys_fcntl();
            break;
        case SystemCall::sys_flock:
            sys_flock();
            break;
        case SystemCall::sys_fsync:
            sys_fsync();
            break;
        case SystemCall::sys_fdatasync:
            sys_fdatasync();
            break;
        case SystemCall::sys_truncate:
            sys_truncate();
            break;
        case SystemCall::sys_ftruncate:
            sys_ftruncate();
            break;
        case SystemCall::sys_getdents:
            sys_getdents();
            break;
        case SystemCall::sys_getcwd:
            sys_getcwd();
            break;
        case SystemCall::sys_chdir:
            sys_chdir();
            break;
        case SystemCall::sys_fchdir:
            sys_fchdir();
            break;
        case SystemCall::sys_rename:
            sys_rename();
            break;
        case SystemCall::sys_mkdir:
            sys_mkdir();
            break;
        case SystemCall::sys_rmdir:
            sys_rmdir();
            break;
        case SystemCall::sys_creat:
            sys_creat();
            break;
        case SystemCall::sys_link:
            sys_link();
            break;
        case SystemCall::sys_unlink:
            sys_unlink();
            break;
        case SystemCall::sys_symlink:
            sys_symlink();
            break;
        case SystemCall::sys_readlink:
            sys_readlink();
            break;
        case SystemCall::sys_chmod:
            sys_chmod();
            break;
        case SystemCall::sys_fchmod:
            sys_fchmod();
            break;
        case SystemCall::sys_chown:
            sys_chown();
            break;
        case SystemCall::sys_fchown:
            sys_fchown();
            break;
        case SystemCall::sys_lchown:
            sys_lchown();
            break;
        case SystemCall::sys_umask:
            sys_umask();
            break;
        case SystemCall::sys_gettimeofday:
            sys_gettimeofday();
            break;
        case SystemCall::sys_getrlimit:
            sys_getrlimit();
            break;
        case SystemCall::sys_getrusage:
            sys_getrusage();
            break;
        case SystemCall::sys_sysinfo:
            sys_sysinfo();
            break;
        case SystemCall::sys_times:
            sys_times();
            break;
        case SystemCall::sys_ptrace:
            sys_ptrace();
            break;
        case SystemCall::sys_getuid:
            sys_getuid();
            break;
        case SystemCall::sys_syslog:
            sys_syslog();
            break;
        case SystemCall::sys_getgid:
            sys_getgid();
            break;
        case SystemCall::sys_setuid:
            sys_setuid();
            break;
        case SystemCall::sys_setgid:
            sys_setgid();
            break;
        case SystemCall::sys_geteuid:
            sys_geteuid();
            break;
        case SystemCall::sys_getegid:
            sys_getegid();
            break;
        case SystemCall::sys_setpgid:
            sys_setpgid();
            break;
        case SystemCall::sys_getppid:
            sys_getppid();
            break;
        case SystemCall::sys_getpgrp:
            sys_getpgrp();
            break;
        case SystemCall::sys_setsid:
            sys_setsid();
            break;
        case SystemCall::sys_setreuid:
            sys_setreuid();
            break;
        case SystemCall::sys_setregid:
            sys_setregid();
            break;
        case SystemCall::sys_getgroups:
            sys_getgroups();
            break;
        case SystemCall::sys_setgroups:
            sys_setgroups();
            break;
        case SystemCall::sys_setresuid:
            sys_setresuid();
            break;
        case SystemCall::sys_getresuid:
            sys_getresuid();
            break;
        case SystemCall::sys_setresgid:
            sys_setresgid();
            break;
        case SystemCall::sys_getresgid:
            sys_getresgid();
            break;
        case SystemCall::sys_getpgid:
            sys_getpgid();
            break;
        case SystemCall::sys_setfsuid:
            sys_setfsuid();
            break;
        case SystemCall::sys_setfsgid:
            sys_setfsgid();
            break;
        case SystemCall::sys_getsid:
            sys_getsid();
            break;
        case SystemCall::sys_capget:
            sys_capget();
            break;
        case SystemCall::sys_capset:
            sys_capset();
            break;
        case SystemCall::sys_rt_sigpending:
            sys_rt_sigpending();
            break;
        case SystemCall::sys_rt_sigtimedwait:
            sys_rt_sigtimedwait();
            break;
        case SystemCall::sys_rt_sigqueueinfo:
            sys_rt_sigqueueinfo();
            break;
        case SystemCall::sys_rt_sigsuspend:
            sys_rt_sigsuspend();
            break;
        case SystemCall::sys_sigaltstack:
            sys_sigaltstack();
            break;
        case SystemCall::sys_utime:
            sys_utime();
            break;
        case SystemCall::sys_mknod:
            sys_mknod();
            break;
        case SystemCall::sys_uselib:
            uselib();
            break;
        case SystemCall::sys_personality:
            sys_personality();
            break;
        case SystemCall::sys_ustat:
            sys_ustat();
            break;
        case SystemCall::sys_statfs:
            sys_statfs();
            break;
        case SystemCall::sys_fstatfs:
            sys_fstatfs();
            break;
        case SystemCall::sys_sysfs:
            sys_sysfs();
            break;
        case SystemCall::sys_getpriority:
            sys_getpriority();
            break;
        case SystemCall::sys_setpriority:
            sys_setpriority();
            break;
        case SystemCall::sys_sched_setparam:
            sys_sched_setparam();
            break;
        case SystemCall::sys_sched_getparam:
            sys_sched_getparam();
            break;
        case SystemCall::sys_sched_setscheduler:
            sys_sched_setscheduler();
            break;
        case SystemCall::sys_sched_getscheduler:
            sys_sched_getscheduler();
            break;
        case SystemCall::sys_sched_get_priority_max:
            sys_sched_get_priority_max();
            break;
        case SystemCall::sys_sched_get_priority_min:
            sys_sched_get_priority_min();
            break;
        case SystemCall::sys_sched_rr_get_interval:
            sys_sched_rr_get_interval();
            break;
        case SystemCall::sys_mlock:
            sys_mlock();
            break;
        case SystemCall::sys_munlock:
            sys_munlock();
            break;
        case SystemCall::sys_mlockall:
            sys_mlockall();
            break;
        case SystemCall::sys_munlockall:
            sys_munlockall();
            break;
        case SystemCall::sys_vhangup:
            sys_vhangup();
            break;
        case SystemCall::sys_modify_ldt:
            sys_modify_ldt();
            break;
        case SystemCall::sys_pivot_root:
            sys_pivot_root();
            break;
        case SystemCall::sys_sysctl:
            sys_sysctl();
            break;
        case SystemCall::sys_prctl:
            sys_prctl();
            break;
        case SystemCall::sys_arch_prctl:
            sys_arch_prctl();
            break;
        case SystemCall::sys_adjtimex:
            sys_adjtimex();
            break;
        case SystemCall::sys_setrlimit:
            sys_setrlimit();
            break;
        case SystemCall::sys_chroot:
            sys_chroot();
            break;
        case SystemCall::sys_sync:
            sys_sync();
            break;
        case SystemCall::sys_acct:
            sys_acct();
            break;
        case SystemCall::sys_settimeofday:
            sys_settimeofday();
            break;
        case SystemCall::sys_mount:
            sys_mount();
            break;
        case SystemCall::sys_umount:
            sys_umount();
            break;
        case SystemCall::sys_swapon:
            sys_swapon();
            break;
        case SystemCall::sys_swapoff:
            sys_swapoff();
            break;
        case SystemCall::sys_reboot:
            sys_reboot();
            break;
        case SystemCall::sys_sethostname:
            sys_sethostname();
            break;
        case SystemCall::sys_setdomainname:
            sys_setdomainname();
            break;
        case SystemCall::stub_iopl:
            stub_iopl();
            break;
        case SystemCall::sys_ioperm:
            sys_ioperm();
            break;
        case SystemCall::sys_init_module:
            sys_init_module();
            break;
        case SystemCall::sys_delete_module:
            sys_delete_module();
            break;
        case SystemCall::sys_quotactl:
            sys_quotactl();
            break;
        case SystemCall::sys_gettid:
            sys_gettid();
            break;
        case SystemCall::sys_readahead:
            sys_readahead();
            break;
        case SystemCall::sys_setxattr:
            sys_setxattr();
            break;
        case SystemCall::sys_lsetxattr:
            sys_lsetxattr();
            break;
        case SystemCall::sys_fsetxattr:
            sys_fsetxattr();
            break;
        case SystemCall::sys_getxattr:
            sys_getxattr();
            break;
        case SystemCall::sys_lgetxattr:
            sys_lgetxattr();
            break;
        case SystemCall::sys_fgetxattr:
            sys_fgetxattr();
            break;
        case SystemCall::sys_listxattr:
            sys_listxattr();
            break;
        case SystemCall::sys_llistxattr:
            sys_llistxattr();
            break;
        case SystemCall::sys_flistxattr:
            sys_flistxattr();
            break;
        case SystemCall::sys_removexattr:
            sys_removexattr();
            break;
        case SystemCall::sys_lremovexattr:
            sys_lremovexattr();
            break;
        case SystemCall::sys_fremovexattr:
            sys_fremovexattr();
            break;
        case SystemCall::sys_tkill:
            sys_tkill();
            break;
        case SystemCall::sys_time:
            sys_time();
            break;
        case SystemCall::sys_futex:
            sys_futex();
            break;
        case SystemCall::sys_sched_setaffinity:
            sys_sched_setaffinity();
            break;
        case SystemCall::sys_sched_getaffinity:
            sys_sched_getaffinity();
            break;
        case SystemCall::sys_set_thread_area:
            sys_set_thread_area();
            break;
        case SystemCall::sys_io_setup:
            sys_io_setup();
            break;
        case SystemCall::sys_io_destroy:
            sys_io_destroy();
            break;
        case SystemCall::sys_io_getevents:
            sys_io_getevents();
            break;
        case SystemCall::sys_io_submit:
            sys_io_submit();
            break;
        case SystemCall::sys_io_cancel:
            sys_io_cancel();
            break;
        case SystemCall::sys_get_thread_area:
            sys_get_thread_area();
            break;
        case SystemCall::sys_lookup_dcookie:
            sys_lookup_dcookie();
            break;
        case SystemCall::sys_epoll_create:
            sys_epoll_create();
            break;
        case SystemCall::sys_remap_file_pages:
            sys_remap_file_pages();
            break;
        case SystemCall::sys_getdents64:
            sys_getdents64();
            break;
        case SystemCall::sys_set_tid_address:
            sys_set_tid_address();
            break;
        case SystemCall::sys_restart_syscall:
            sys_restart_syscall();
            break;
        case SystemCall::sys_semtimedop:
            sys_semtimedop();
            break;
        case SystemCall::sys_fadvise64:
            sys_fadvise64();
            break;
        case SystemCall::sys_timer_create:
            sys_timer_create();
            break;
        case SystemCall::sys_timer_settime:
            sys_timer_settime();
            break;
        case SystemCall::sys_timer_gettime:
            sys_timer_gettime();
            break;
        case SystemCall::sys_timer_getoverrun:
            sys_timer_getoverrun();
            break;
        case SystemCall::sys_timer_delete:
            sys_timer_delete();
            break;
        case SystemCall::sys_clock_settime:
            sys_clock_settime();
            break;
        case SystemCall::sys_clock_gettime:
            sys_clock_gettime();
            break;
        case SystemCall::sys_clock_getres:
            sys_clock_getres();
            break;
        case SystemCall::sys_clock_nanosleep:
            sys_clock_nanosleep();
            break;
        case SystemCall::sys_exit_group:
            sys_exit_group();
            break;
        case SystemCall::sys_epoll_wait:
            sys_epoll_wait();
            break;
        case SystemCall::sys_epoll_ctl:
            sys_epoll_ctl();
            break;
        case SystemCall::sys_tgkill:
            sys_tgkill();
            break;
        case SystemCall::sys_utimes:
            sys_utimes();
            break;
        case SystemCall::sys_mbind:
            sys_mbind();
            break;
        case SystemCall::sys_set_mempolicy:
            sys_set_mempolicy();
            break;
        case SystemCall::sys_get_mempolicy:
            sys_get_mempolicy();
            break;
        case SystemCall::sys_mq_open:
            sys_mq_open();
            break;
        case SystemCall::sys_mq_unlink:
            sys_mq_unlink();
            break;
        case SystemCall::sys_mq_timedsend:
            sys_mq_timedsend();
            break;
        case SystemCall::sys_mq_timedreceive:
            sys_mq_timedreceive();
            break;
        case SystemCall::sys_mq_notify:
            sys_mq_notify();
            break;
        case SystemCall::sys_mq_getsetattr:
            sys_mq_getsetattr();
            break;
        case SystemCall::sys_kexec_load:
            sys_kexec_load();
            break;
        case SystemCall::sys_waitid:
            sys_waitid();
            break;
        case SystemCall::sys_add_key:
            sys_add_key();
            break;
        case SystemCall::sys_request_key:
            sys_request_key();
            break;
        case SystemCall::sys_keyctl:
            sys_keyctl();
            break;
        case SystemCall::sys_ioprio_set:
            sys_ioprio_set();
            break;
        case SystemCall::sys_ioprio_get:
            sys_ioprio_get();
            break;
        case SystemCall::sys_inotify_init:
            sys_inotify_init();
            break;
        case SystemCall::sys_inotify_add_watch:
            sys_inotify_add_watch();
            break;
        case SystemCall::sys_inotify_rm_watch:
            sys_inotify_rm_watch();
            break;
        case SystemCall::sys_migrate_pages:
            sys_migrate_pages();
            break;
        case SystemCall::sys_openat:
            sys_openat();
            break;
        case SystemCall::sys_mkdirat:
            sys_mkdirat();
            break;
        case SystemCall::sys_mknodat:
            sys_mknodat();
            break;
        case SystemCall::sys_fchownat:
            sys_fchownat();
            break;
        case SystemCall::sys_futimesat:
            sys_futimesat();
            break;
        case SystemCall::sys_newfstatat:
            sys_newfstatat();
            break;
        case SystemCall::sys_unlinkat:
            sys_unlinkat();
            break;
        case SystemCall::sys_renameat:
            sys_renameat();
            break;
        case SystemCall::sys_linkat:
            sys_linkat();
            break;
        case SystemCall::sys_symlinkat:
            sys_symlinkat();
            break;
        case SystemCall::sys_readlinkat:
            sys_readlinkat();
            break;
        case SystemCall::sys_fchmodat:
            sys_fchmodat();
            break;
        case SystemCall::sys_faccessat:
            sys_faccessat();
            break;
        case SystemCall::sys_pselect6:
            sys_pselect6();
            break;
        case SystemCall::sys_ppoll:
            sys_ppoll();
            break;
        case SystemCall::sys_unshare:
            sys_unshare();
            break;
        case SystemCall::sys_set_robust_list:
            sys_set_robust_list();
            break;
        case SystemCall::sys_get_robust_list:
            sys_get_robust_list();
            break;
        case SystemCall::sys_splice:
            sys_splice();
            break;
        case SystemCall::sys_tee:
            sys_tee();
            break;
        case SystemCall::sys_sync_file_range:
            sys_sync_file_range();
            break;
        case SystemCall::sys_vmsplice:
            sys_vmsplice();
            break;
        case SystemCall::sys_move_pages:
            sys_move_pages();
            break;
        case SystemCall::sys_utimensat:
            sys_utimensat();
            break;
        case SystemCall::sys_epoll_pwait:
            sys_epoll_pwait();
            break;
        case SystemCall::sys_signalfd:
            sys_signalfd();
            break;
        case SystemCall::sys_timerfd_create:
            sys_timerfd_create();
            break;
        case SystemCall::sys_eventfd:
            sys_eventfd();
            break;
        case SystemCall::sys_fallocate:
            sys_fallocate();
            break;
        case SystemCall::sys_timerfd_settime:
            sys_timerfd_settime();
            break;
        case SystemCall::sys_timerfd_gettime:
            sys_timerfd_gettime();
            break;
        case SystemCall::sys_accept4:
            sys_accept4();
            break;
        case SystemCall::sys_signalfd4:
            sys_signalfd4();
            break;
        case SystemCall::sys_eventfd2:
            sys_eventfd2();
            break;
        case SystemCall::sys_epoll_create1:
            sys_epoll_create1();
            break;
        case SystemCall::sys_dup3:
            sys_dup3();
            break;
        case SystemCall::sys_pipe2:
            sys_pipe2();
            break;
        case SystemCall::sys_inotify_init1:
            sys_inotify_init1();
            break;
        case SystemCall::sys_preadv:
            sys_preadv();
            break;
        case SystemCall::sys_pwritev:
            sys_pwritev();
            break;
        case SystemCall::sys_rt_tgsigqueueinfo:
            sys_rt_tgsigqueueinfo();
            break;
        case SystemCall::sys_perf_event_open:
            sys_perf_event_open();
            break;
        case SystemCall::sys_recvmmsg:
            sys_recvmmsg();
            break;
        case SystemCall::sys_fanotify_init:
            sys_fanotify_init();
            break;
        case SystemCall::sys_fanotify_mark:
            sys_fanotify_mark();
            break;
        case SystemCall::sys_prlimit64:
            sys_prlimit64();
            break;
        case SystemCall::sys_name_to_handle_at:
            sys_name_to_handle_at();
            break;
        case SystemCall::sys_open_by_handle_at:
            sys_open_by_handle_at();
            break;
        case SystemCall::sys_clock_adjtime:
            sys_clock_adjtime();
            break;
        case SystemCall::sys_syncfs:
            sys_syncfs();
            break;
        case SystemCall::sys_sendmmsg:
            sys_sendmmsg();
            break;
        case SystemCall::sys_setns:
            sys_setns();
            break;
        case SystemCall::sys_getcpu:
            sys_getcpu();
            break;
        case SystemCall::sys_process_vm_readv:
            sys_process_vm_readv();
            break;
        case SystemCall::sys_process_vm_writev:
            sys_process_vm_writev();
            break;
        case SystemCall::sys_kcmp:
            sys_kcmp();
            break;
        case SystemCall::sys_finit_module:
            sys_finit_module();
            break;

        default:
            throw new Core::Exceptions::ProcessorUnsupportedOperationException(
                "Linux System Call Processor cannot handle system call"
            );
    }
}