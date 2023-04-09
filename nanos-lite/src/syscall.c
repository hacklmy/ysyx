#include <common.h>
#include "syscall.h"
#define STRACE
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  #ifdef STRACE
    switch (a[0]) {
    case SYS_exit: printf("sys_exit a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]); break;
    case SYS_yield: printf("sys_yield a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]); break;
    case SYS_open:printf("sys_open a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_read:printf("sys_read a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_write:printf("sys_write a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_kill:printf("sys_kill a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_getpid:printf("sys_getpid a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_close:printf("sys_close a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_lseek:printf("sys_lseek a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_brk:printf("sys_brk a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_fstat:printf("sys_fstat a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_time:printf("sys_time a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_signal:printf("sys_signal a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_execve:printf("sys_execve a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_fork:printf("sys_fork a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_link:printf("sys_link a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_unlink:printf("sys_unlink a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_wait:printf("sys_wait a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_times:printf("sys_times a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_gettimeofday:printf("sys_gettimeofday a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
  }
  #endif
  switch (a[0]) {
    case SYS_exit: halt(a[1]); break;
    case SYS_yield: yield(); c->GPRx = 0; break;
    case SYS_open:break;
    case SYS_read:break;
    case SYS_write:
      if(a[1]==1||a[1]==2){
        char* buf = (char*)a[2];
        for(int i =0;i<a[3];i++){
          putch(*(buf+i));
        }
        c->GPRx = a[3];
      }
      break;
    case SYS_kill:break;
    case SYS_getpid:break;
    case SYS_close:break;
    case SYS_lseek:break;
    case SYS_brk: c->GPRx = 0;  break;
    case SYS_fstat:break;
    case SYS_time:break;
    case SYS_signal:break;
    case SYS_execve:break;
    case SYS_fork:break;
    case SYS_link:break;
    case SYS_unlink:break;
    case SYS_wait:break;
    case SYS_times:break;
    case SYS_gettimeofday:break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  
}
