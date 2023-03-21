#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int num = 0;
  while(*fmt!='\0'){
    if(*fmt!='%'){
      out[num++] = *fmt++;
      continue;
    }
    int ans_int;
    char* ans_str;
    switch (*(fmt+1))
    {
      case 's':
        ans_str = va_arg(ap, char*);
        while(*ans_str!='\0'){
          out[num++] = *ans_str++;
        }
        break;
      case 'd':
        ans_int = va_arg(ap, int);
        int num_array[16];
        int array_len = 0;
        while(ans_int){
          num_array[array_len++] = ans_int%10;
          ans_int/=10;
        }
        while(--array_len>=0){
          out[num++] = num_array[array_len] + '0';
        }
        break;
      default:
        break;
    }
    fmt++;
  }
  out[num] = '\0';
  return num;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int num = vsprintf(out, fmt, ap);
  va_end(ap);
  return num;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
