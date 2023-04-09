#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD:
      printf("yeild call\n");
      break;
    case EVENT_SYSCALL:
    printf("%x\n",c->gpr[17]);
      printf("syscall\n");
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
