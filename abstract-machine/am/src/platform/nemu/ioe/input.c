#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
#define KEY_QUEUE_LEN 1024

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t code = inl(KBD_ADDR);
  kbd->keydown = ((code & KEYDOWN_MASK) != 0);
  kbd->keycode = ((code | KEYDOWN_MASK) ^ KEYDOWN_MASK);
}
