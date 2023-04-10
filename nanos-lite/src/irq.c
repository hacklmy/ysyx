#include <common.h>
void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  printf("do event\n");
  switch (e.event) {
    case EVENT_YIELD:
      printf("yeild call\n");
      c->mepc +=4;
      break;
    case EVENT_SYSCALL:
      printf("syscall\n");
      do_syscall(c);
      c->mepc +=4;
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
