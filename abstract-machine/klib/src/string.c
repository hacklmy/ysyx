#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  while(*s!='\0'){
    len++;
    s++;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {
  char *res = dst;
  while(*src != '\0'){
    *res = *src;
    res++;
    src++;
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *res = dst;
  res += strlen(res);
  while((*res++ = *src++) != '\0');
  *res = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 == *s2){
    if(*s1 == '\0'){
      return 0;
    }
    s1++;
    s2++;
  }
  if(*s1 < *s2) return -1;
  else return 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  int *res = (int *)s;
  for(int i = n;i > 0;i--){
    *res = c;
    res++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  char *res = (char *)out;
  for(int i = n;i > 0 && *(char*)in != '\0';i--){
    *res = *(char*)in;
    res++;
    in++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
