#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <thread>
#include <SDL2/SDL.h>


#define SCREEN_W 80
#define SCREEN_H 60

static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

uint32_t vmem[800 * 600];
uint32_t vgactl_port_base[8];

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W,
      SCREEN_H,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if(*(vgactl_port_base+1)!=0)
  {
    update_screen();
    (*(vgactl_port_base+1))=0;
  }
}

void init_vga() {
  vgactl_port_base[0] = (screen_width() << 16) | screen_height(); 

  init_screen();
  memset(vmem, 0, screen_size());
}