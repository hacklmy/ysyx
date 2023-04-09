#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  printf("%d\n", a[0]);
  switch (a[0]) {
    case SYS_exit: halt(a[1]); printf("exit\n"); break;
    case SYS_yield: yield(); c->GPRx = 0; printf("yeild\n"); break;
    case SYS_open:printf("open\n");break;
    case SYS_read:break;
    case SYS_write:break;
    case SYS_kill:break;
    case SYS_getpid:break;
    case SYS_close:break;
    case SYS_lseek:break;
    case SYS_brk:break;
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
