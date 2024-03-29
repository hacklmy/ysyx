/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint32_t value;
  char str[1000];
  /* TODO: Add more members if necessary */

} WP;
WP* new_wp(char *s,int value);
void free_wp(int NO);
void show_watchpoint();
bool check_change();
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  if (arg == NULL){
    cpu_exec(1);
    return 0;
  }
  int step;
  sscanf(arg,"%d",&step);
  if (step <= 0){
    Log("illegal execute nums");
    return 0;
  }
  cpu_exec(step); 
  return 0;
}

void show_watchpoint();
static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  switch(arg[0]){
    case 'r':isa_reg_display();break;
    case 'w':show_watchpoint();break;
  }
  
  return 0;
}

static int cmd_x(char *args){
  char *num = strtok(NULL," ");
  char *addr = strtok(NULL," ");
  int gap=0;
  paddr_t paddr;
  sscanf(num,"%d",&gap);
  sscanf(addr,"%x",&paddr);
  while(gap>0){
    printf("0x%x:\t",paddr);
    paddr_t temp = vaddr_read(paddr, 4);
    for (int i = 0;i < 4;i++){
      printf("0x%08x ",temp & 0xff);
      temp = temp >> 8;
    }
    printf("\n");
    paddr+=32;
    gap--;
  }
  return 0;
}

static int cmd_p(char *args){
  bool success = true;
  printf("result: 0x%lx\n",expr(args,&success));
  return 0;
}

static int cmd_w(char *args){
  bool success = false; 
  WP* p = new_wp(args,expr(args,&success));
  printf("watchpoint %d: %s\n",p->NO,args);
  return 0;
}

static int cmd_d(char *args){
  char *arg = strtok(NULL, " ");
  int num;
  sscanf(arg,"%d",&num);
  free_wp(num);
  printf("delete watchpoint %d\n",num);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "execute N step", cmd_si },
  { "info", "print infomation of registers", cmd_info },
  { "x", "scan the mem", cmd_x },
  { "p", "get the value of expr", cmd_p },
  { "w", "add a watchpoint", cmd_w },
  { "d", "delete a watch point", cmd_d },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
