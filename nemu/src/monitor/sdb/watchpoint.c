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
  uint32_t value;
  char str[1000];
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
WP* new_wp(char *s,int value){ 
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
  strcpy(temp->str,s);
  temp->value = value;
  return temp;
}

void free_wp(int NO){
  WP*p = head;
  if(p->NO==NO){
    WP* temp = head;
    head = head->next;
    temp->next = free_;
    free_ = temp;
  }
  while(p->next!=NULL){
    if(p->next->NO==NO){
      WP* temp = p->next;
      p->next = p->next->next;
      temp->next = free_;
      free_ = temp;
      break;
    }
    p=p->next;
  }
  free_->value = 0;
  free_->str[0] = '\0';
}

void show_watchpoint(){
  WP* p = head;
  while(p!=NULL){
    printf("watchpoint %d: %s\n",p->NO,p->str);
    printf("value:\t %d\n",p->value);
    p=p->next;
  } 
}

bool check_change(){
  bool success = true;
  bool change = false;
  WP* temp = head;
  while(temp!=NULL){
    uint32_t new_value = expr(temp->str,&success);
    if(new_value!=temp->value){
      change = true;
      printf("watchpoint %d: %s\n",temp->NO,temp->str);
      printf("old value: %d\n",temp->value);
      printf("new value: %d\n",new_value);
      temp->value = new_value;
    }
    temp=temp->next;
  }
  return change;
}
