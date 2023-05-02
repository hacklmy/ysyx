#include <am.h>
#include <npc.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  int w = inw(VGACTL_ADDR + 2);
  int h = inw(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = w*h*sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = inw(VGACTL_ADDR + 2);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for(int j = 0; j < ctl->h ; j ++){
    for (int i = 0; i < ctl->w; i ++){
      fb[(ctl->y+j)*w + ctl->x+i] = ((uint32_t*)ctl->pixels)[ctl->w*j+i];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
