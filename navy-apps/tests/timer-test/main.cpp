#include <unistd.h>
#include <sys/time.h>
#include <stdio.h>
#include <assert.h>

int main() {
  printf("timer-test begin\n");
  int sec = 1;
  struct timeval * tv;
  struct timezone* tz;
  while(1)
  {
    int ret = gettimeofday(tv,tz);
    if(ret!=0)assert(0);
    printf("timer-test  time: %d\n",sec);
    sec += 1;
  }
  return 0;
}