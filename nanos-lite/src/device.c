#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (int i = 0; i < len; ++i) {
    putch(*(char *)(buf + i));
  }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T kbd = io_read(AM_INPUT_KEYBRD);
  int length;
  if(kbd.keycode==0){
    //printf("no key\n");
    return 0;
  }
  //printf("has a key\n");
  if(kbd.keydown==0){
    length = snprintf((char *)buf,len,"ku %s\n",keyname[kbd.keycode]);
  }else{
    length = snprintf((char *)buf,len,"kd %s\n",keyname[kbd.keycode]);
  }
  return length;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  return  snprintf((char*)buf, len, "WIDTH:%d\nHEIGHT:%d\n", cfg.width, cfg.height);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  AM_GPU_FBDRAW_T ctl; 
  ctl.pixels = (void*)buf;
  ctl.sync = true;
  ctl.x = offset % cfg.width;
  ctl.y = offset / cfg.width;
  ctl.w = ((len >> 32) & 0xffff);
  ctl.h = (len & 0xffff);
  ioe_write(AM_GPU_FBDRAW, &ctl);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
