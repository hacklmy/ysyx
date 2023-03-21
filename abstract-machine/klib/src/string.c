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
  *res = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	char* res = dst;
	size_t i;
  	for(i = 0;i< n && *src != '0';i++){
		*dst++ = *src++;
  	}
  	for(;i < n;i++){
		*dst++ = '\0';
  	}
	*dst = '\0';
  	return res;
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
  return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	size_t i = n;
  	while(*s1 == *s2 && i>0){
    	if(*s1 == '\0'){
      		return 0;
		}
    	s1++;
    	s2++;
		i--;
  	}
	return *s1 - *s2;
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
	char* res = (char *)dst;
	char* in = (char *)src;
	if (dst < src) {
		while (n--) {
			*res++ = *in++;
		}
	} else {
		while (n--) {
			*(res + n) = *(in + n);
		}
	}
	return dst;
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
  int cmp_ans;
  while (n--)
  {
	cmp_ans = *(char*)s1++ - *(char*)s2++;
	if(cmp_ans!=0)return cmp_ans;
  }
  return 0;
}

#endif
