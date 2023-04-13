#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  if(NDL_PollEvent(buf,sizeof(buf))!=0){
    if(buf[0]=='k'){
      if(buf[1]=='d'){
        ev->type = SDL_KEYDOWN;
      }else if(buf[1]=='u'){
        ev->type = SDL_KEYUP;
      }
       ev->key.keysym.sym = 0;
      for(int i =0;i<sizeof(keyname);i++){
        if(strcmp(buf+3,keyname[i])==0){
          ev->key.keysym.sym = i;
          break;
        }
      }
      return 1;
    }
  }
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  while(SDL_PollEvent(event) == 0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
