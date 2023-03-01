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
#include <memory/vaddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,integers,TK_UEQ,HEX,AND,REG,POINT,NEG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'}, 
  {"\\*", '*'},
  {"\\/", '/'}, 
  {"\\$[a-z]+", REG}, 
  {"0[xX][[0-9a-fA-F]]+", HEX},
  {"\\(", '('},
  {"\\)", ')'},
  {"[0-9]+", integers},
  {"==", TK_EQ},        // equal
  {"!=", TK_UEQ},
  
  {"&&", AND},
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
	int j;
	for (j = 0; j < 32; j++){
	  tokens[nr_token].str[j] = '\0';
        }
        switch (rules[i].token_type) {
          case TK_NOTYPE: 
            break;
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
            tokens[nr_token++].type = rules[i].token_type;
            break;
          case HEX:
          case REG:
          case integers:
          case TK_EQ:
          case TK_UEQ:
          case AND:
            tokens[nr_token].type = rules[i].token_type;
            if(substr_len>32){
              Log("too long integer!");
              assert(0);
	    }
            strncpy(tokens[nr_token].str,substr_start,substr_len);
            nr_token++;
            break;
          default:
            Log("unknow regular rules!"); 
            assert(0);
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p,int q){
  int nums = 0;
  for(int i = p;i<=q;i++){
    if(tokens[i].type=='(') nums++;
    else if(tokens[i].type==')') nums--;
  }
  if(nums!=0){
    Log("bad expression!");
    assert(0);
  }
  if(tokens[p].type=='('&&tokens[q].type==')')return true;
  return false;
}

int return_pri(int op){
  switch(op){
    case NEG:
    case POINT:
      return 1;
      break;
    case '*':
    case '/':
      return 2;
      break;
    case '+':
    case '-':
      return 3;
      break;
    case TK_EQ:
    case TK_UEQ:
      return 4;
      break;
    case AND:
      return 5;
      break;
    default:
      return 0;
  }
    
}

int find_main_op(int p,int q){
  int kuohao_num = 0;
  int position = -1;
  int pri=0;
  for(int i =p;i<=q;i++){
    if(tokens[i].type=='(')kuohao_num++;
    else if(tokens[i].type==')')kuohao_num--;
    if(kuohao_num==0&&tokens[i].type!=integers&&tokens[i].type!=HEX&&tokens[i].type!=REG){
      if(return_pri(tokens[i].type)>=pri&&tokens[i].type!=NEG){
        pri = tokens[i].type;
        position = i;
      }
    }
  }
  return position;
}

uint32_t eval(int p,int q){
  uint32_t res;
  int integer_num=0;
  for(int i =p;i<=q;i++){
   if(tokens[p].type==integers)integer_num++;
  }
  if (p > q) {
    Log("Bad expression!");
    assert(0);
  }
  else if (tokens[p].type==NEG){
    return -eval(p+1,q);
  }
  else if (integer_num==1&&tokens[p].type==NEG){
    return -eval(p+1,q);
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
     if(tokens[p].type==integers)
       sscanf(tokens[p].str,"%d",&res);
     if(tokens[p].type==HEX)
       sscanf(tokens[p].str,"%x",&res);
     return res;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int op = find_main_op(p,q);
    if(tokens[op].type==NEG){
      return -eval(p+1,q);
    }
    if(tokens[op].type==POINT){
      bool success = false;
      uint32_t val = isa_reg_str2val(tokens[op].str, &success);
      return vaddr_read(val, 4);
    }
    int val1 = eval(p, op - 1);
    int val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': 
        if(val2==0)assert(0);
        return val1 / val2;
      case AND: return val1 && val2;
      case TK_EQ: return val1 == val2;
      case TK_UEQ: return val1 != val2;
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != integers && tokens[i - 1].type != ')' && tokens[i - 1].type != HEX && tokens[i - 1].type != REG) ) ) {
      tokens[i].type = POINT;
    } 
  }
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != integers && tokens[i - 1].type != ')' && tokens[i - 1].type != HEX && tokens[i - 1].type != REG)) ) {
      tokens[i].type = NEG;
    } 
  }
  int p = 0;
  int q = nr_token-1;
  uint32_t res = eval(p,q);
  

  return res;
}
