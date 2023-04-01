#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char output[65536];
  int size = vsprintf(output, fmt, ap);
  va_end(ap);
  putstr(output);
  return size;
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
    char ans_char;
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
        if(ans_int<0){
          out[num++] = '-';
          num = -num;
        }
        else if(ans_int==0){
          num_array[array_len++] = 0;
        }
        while(ans_int){
          num_array[array_len++] = ans_int%10;
          ans_int/=10;
        }
        while(--array_len>=0){
          out[num++] = num_array[array_len] + '0';
        }
        break;
      case 'c':
        ans_char = va_arg(ap, int);
        out[num++] = ans_char;
        break;
      default:
        break;
    }
    fmt+=2;
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
