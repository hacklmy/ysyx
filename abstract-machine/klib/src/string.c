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
		*res++ = *src++;
  	}
  	for(;i < n;i++){
		*res++ = '\0';
  	}
	*res = '\0';
  	return dst;
}

char *strcat(char *dst, const char *src) {
  char *res = dst;
  res += strlen(dst);
  while((*res++ = *src++) != '\0');
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
  char *res = (char *)s;
  for(int i = n;i > 0;i--){
    *res++ = c;
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

void *memcpy(void *out, const void *in, size_t n)
{
  if (out == NULL || n < 0 || in == NULL)
    return NULL;

  char *str_out = out;
  const char *str_in = in;
  for (int i = 0; i < n; i++)
    str_out[i] = str_in[i];
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
  if (s1 == NULL || n < 0 || s2 == NULL)
    return -1;
  const char *str_s1 = s1;
  const char *str_s2 = s2;

  for (int i = 0; i < n; i++)
  {
    if (str_s1[i] > str_s2[i])
      return 1;
    else if (str_s1[i] < str_s2[i])
      return -1;
  }
  return 0;
}

#endif
