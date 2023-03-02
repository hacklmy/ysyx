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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){ 
  if(free_==NULL)assert(0);
  WP* temp = free_;
  free_ = free_->next;
  temp->next = NULL;
  if(head==NULL){
    head = temp;
  }else{
    WP* p = head;
    while(p->next!=NULL){
      p = p->next;
    }
    p->next = temp;
  }
  return temp;
}

void free_wp(WP *wp){
  WP*p = head;
  if(p->NO==wp->NO){
    WP* temp = head;
    head = head->next;
    temp->next = free_;
    free_ = temp;
  }
  while(p->next!=NULL){
    if(p->next->NO==wp->NO){
      WP* temp = p->next;
      p->next = p->next->next;
      temp->next = free_;
      free_ = temp;
      break;
    }
    p=p->next;
  }
}


