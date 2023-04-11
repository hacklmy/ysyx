#include <unistd.h>
#include <stdio.h>
#include "NDL.h"

int main() {
  printf("timer-test begin\n");
  int sec = 1;
  NDL_Init(0);
  while(1)
  {
    
    while(NDL_GetTicks()/500<sec);
    printf("timer-test  time: %d\n",sec);
    sec += 1;
  }
  return 0;
}