#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include <proc.h>
//#define STRACE

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
const char* get_filename(int fd);
void naive_uload(PCB *pcb, const char *filename);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //printf("%d\n",a[0]);
  switch (a[0]) {
    case SYS_exit: 
      //halt(a[1]);
      naive_uload(NULL,"/bin/nterm");
      break;
    case SYS_yield: yield(); c->GPRx = 0; break;
    case SYS_open:
      c->GPRx = fs_open((const char*)a[1], a[2], a[3]);
      //printf("sys_open name=%s\n",get_filename(c->GPRx));
      //printf("%d\n",c->GPRx);
      break;
    case SYS_read:
      c->GPRx = fs_read(a[1], (void*)a[2], a[3]);
      break;
    case SYS_write:
    //printf("sys_write name=%s len=%d\n", get_filename(a[1]), a[3]);
      c->GPRx = fs_write(a[1], (void*)a[2], a[3]);
      break;
    case SYS_kill:break;
    case SYS_getpid:break;
    case SYS_close:
      c->GPRx = fs_close(a[1]);
      break;
    case SYS_lseek:
      c->GPRx = fs_lseek(a[1], a[2], a[3]);
      break;
    case SYS_brk: c->GPRx = 0;  break;
    case SYS_fstat:break;
    case SYS_time:break;
    case SYS_signal:break;
    case SYS_execve:
      printf("execve\n");
      naive_uload(NULL, (const char*)a[1]);
      break;
    case SYS_fork:break;
    case SYS_link:break;
    case SYS_unlink:break;
    case SYS_wait:break;
    case SYS_times:break;
    case SYS_gettimeofday:
      long int time = io_read(AM_TIMER_UPTIME).us;
      //printf("time: %ld\n", time);
      c->GPRx = time;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  #ifdef STRACE
    switch (a[0]) {
    case SYS_exit: printf("sys_exit\n"); break;
    case SYS_yield: printf("sys_yield a1=%d\n", a[1]); break;
    case SYS_open:printf("sys_open name=%d\n",get_filename(c->GPRx));break;
    case SYS_read:printf("sys_read name=%s read_len=%d\n",  get_filename(a[1]), a[3]);break;
    case SYS_write:
      if(a[1]==1||a[1]==2)
        printf("sys_write a1=%d len=%d\n",  a[1], a[3]);
      else if(a[1]>2){
        printf("sys_write name=%s len=%d\n", get_filename(a[1]), a[3]);
      }
      break;
    case SYS_kill:printf("sys_kill a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_getpid:printf("sys_getpid a0=%d a1=%d a2=%d\n", a[0], a[1], a[2]);break;
    case SYS_close:
      printf("sys_close name=%s\n", get_filename(a[1]));
      break;
    case SYS_lseek:
      printf("sys_lseek name=%s a1=%d len=%d\n", get_filename(a[1]), a[2], a[3]);
      break;
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
}
