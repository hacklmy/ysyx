#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
int width, height;
void __am_gpu_init() {
  int i;
  uint32_t vga_ctl = inl(VGACTL_ADDR);
  width= (vga_ctl>>16);  // TODO: get the correct width
  height = (vga_ctl)&((1<<16)-1);  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < width * height; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  int cnt=0;
  for(int j = 0; j < ctl->h ; j ++){
    for (int i = 0; i < ctl->w; i ++){
      int p = ctl->y + j;
      int q = ctl->x + i;
      fb[p * width + q] = ((uint32_t*)ctl->pixels)[++cnt];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}