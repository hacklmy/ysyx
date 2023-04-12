#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval  tv;
  struct timezone tz;
  gettimeofday(&tv,&tz);
  return tv.tv_usec/1000;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  if(read(fd, buf, len)!=0)return 1;
  return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  printf("%d %d\n", screen_w, screen_h);
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fd = open("/dev/fb", 0, 0);
  size_t offset = y*screen_w + x;
  size_t len = ((size_t)w) << 32 | (size_t)h;
  lseek(fd, offset, SEEK_SET);
  write(fd,pixels,len);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  int fd = open("/proc/dispinfo", 0, 0);
  char buf[100];
  int ret = read(fd, buf, sizeof(buf));
  int is_width = 1;
  for(int i = 0;i< strlen(buf);i++){
    if(buf[i]>='0'&&buf[i]<='9'){
      if(is_width){
        screen_w = screen_w*10 + buf[i] - '0';
      }else{
        screen_h = screen_h*10 + buf[i] - '0';
      }
    }else if(buf[i]==' '){
      is_width = 0;
    }
  }
  return 0;
}

void NDL_Quit() {
}
