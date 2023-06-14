#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char sprint_buf[2048];
char* itoa(int num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
    unsigned unum;
    int i=0,j,k;
 
    if(radix==10&&num<0)
    {
        unum=(unsigned)-num;
        str[i++]='-';
    }
    else unum=(unsigned)num;
    //转换后是逆序的
    do
    {
        str[i++]=index[unum%(unsigned)radix];
        unum/=radix;
 
    }while(unum);
 
    str[i]='\0';
 
    //将顺序调整过来
    if(str[0]=='-') k=1;
    else k=0;
 
    char temp;
    for(j=k;j<=(i-1)/2;j++)
    {
        temp=str[j];
        str[j]=str[i-1+k-j];
        str[i-1+k-j]=temp;
    }
 
    return str;
}

char* ltoa(long num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
    unsigned long unum;
    int i=0,j,k;
 
    if(radix==10&&num<0)
    {
        unum=(unsigned long)-num;
        str[i++]='-';
    }
    else unum=(unsigned long)num;
    //转换后是逆序的
    do
    {
        str[i++]=index[unum%(unsigned long)radix];
        unum/=radix;
 
    }while(unum);
 
    str[i]='\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
 
    //将顺序调整过来
    if(str[0]=='-') k=1;
    else k=0;
 
    char temp;
    for(j=k;j<=(i-1)/2;j++)
    {
        temp=str[j];
        str[j]=str[i-1+k-j];
        str[i-1+k-j]=temp;
    }
    return str;
}
int printf(const char *fmt, ...) {
  va_list args; 
  va_start(args, fmt);
  int size = vsprintf(sprint_buf, fmt, args);
  va_end(args);
  for (size_t i = 0; i < 2048 && sprint_buf[i] != '\0'; i++)
  {
    putch(sprint_buf[i]);
  }
  
  return size;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  assert( out != NULL && fmt != NULL);

  int len = 0;
  bool is_arg = false;
  long int d;
  char c;
  char *s;
  char d2s[32];
  bool pad_zero = false;
  int  width = 0;
  int  str_len = 0;
  int  spc_len = 0;
  int i;

  while (*fmt){
    if(is_arg)
    {
      switch (*fmt) {
        case 's':              /* string */
          s = va_arg(ap, char *);
          str_len = strlen(s);//string length
          spc_len = width > str_len ? width - str_len : 0;
          for(i = 0; i < spc_len; i++)
          {
            *out++ = ' ';
            len++;
          }
          for(i = 0; i < str_len && *s != '\0'; i++)// string
          {
            *out++ = *s;
            len++;
            s++;
          }
          is_arg = false;
          fmt++;
          break;
        case 'd':              /* int */
        case 'u':              /* unsigned int */
        case 'o':              /* unsigned int o*/
        case 'x':  case 'X':   /* unsigned int x*/
        case 'p':              /* pointer */
        case 'l':              /* long */
          switch (*fmt)
          {
            case 'd':              /* int */
              d = va_arg(ap, int);
              itoa(d, d2s, 10);
              break;

            case 'u':              /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 10);
              break;
            
            case 'o':              /* unsigned int o*/
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 8);
              break;

            case 'x':  case 'X':    /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 16);
              break;

            case 'p':               /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 16);
              break;

            case 'l':              /* long */
              if (fmt[1] == 'u'){
                d = va_arg(ap, unsigned long);
                fmt++;
                ltoa(d, d2s, 10);
              }
              else if (fmt[1] == 'x' || fmt[1] == 'X'){
                d = va_arg(ap, unsigned long);
                fmt++;
                ltoa(d, d2s, 16);
              }
              else{
                d = va_arg(ap, long);
                ltoa(d, d2s, 10);
              }
              break;

            default:
              break;
          }
          str_len = strlen(d2s);//string length
          spc_len = width > str_len ? width - str_len : 0;
          if (*fmt == 'p')
          {
              *out++ = '0';len++;
              *out++ = 'x';len++;
          }
          char padding = (pad_zero == true) ? '0' : ' ';
          // padding space' ' or zero'0'
          for(i = 0; i < spc_len; i++)
          {
            *out++ = padding;
            len++;
          }
          for(i = 0; i < str_len; i++)
          {
            *out++ = d2s[i];
            len++;
          }
          is_arg = false;
          fmt++;
          break;
        case 'c':              /* char */
          /* need a cast here since va_arg only
            takes fully promoted types */
          c = (char) va_arg(ap, int);
          *out++ = c;
          len++;
          is_arg = false;
          fmt++;
          break;
        case '%':              /* % */
          *out++ = '%';
          len++;
          is_arg = false;
          fmt++;
          break;
        case '0':              /* padding zero */
          pad_zero = true;
          fmt++;
          break;
        case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
          width = atoi(fmt);   /* width */
          while (*fmt >= '0' && *fmt <= '9') fmt++;
          break;
      }
    }
    else
    {
      if(*fmt == '%') {
        is_arg = true;
        pad_zero = false;
        width = 0;
        str_len = 0;
        spc_len = 0;
      }
      else{
        *out++ = *fmt;
        len++;
      }
      fmt++;
    }
  }
 *out++ = '\0';
 return len;
}

int sprintf(char *out, const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);
	int size = vsprintf(out,fmt,args);
	va_end(args);
	return size;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);
	int size = vsnprintf(out, n, fmt, args);
	va_end(args);
	return size;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  assert( out != NULL && fmt != NULL && n != 0);

  int len = 0;
  bool is_arg = false;
  long int d;
  char c;
  char *s;
  char d2s[32];
  bool pad_zero = false;
  int  width = 0;
  int  str_len = 0;
  int  spc_len = 0;
  int i;

  while (*fmt){
    if(is_arg)
    {
      switch (*fmt) {
        case 's':              /* string */
          s = va_arg(ap, char *);
          str_len = strlen(s);//string length
          spc_len = width - str_len;
          for(i = 0; i < spc_len; i++)
          {
            *out++ = ' ';
            len++;if(len == n) return n;
          }
          for(i = 0; i < str_len && *s != '\0'; i++)// string
          {
            *out++ = *s;
            len++;if(len == n) return n;
            s++;
          }
          is_arg = false;
          fmt++;
          break;
        case 'd':              /* int */
        case 'u':              /* unsigned int */
        case 'o':              /* unsigned int o*/
        case 'x':  case 'X':   /* unsigned int x*/
        case 'p':              /* pointer */
        case 'l':              /* long */
          switch (*fmt)
          {
            case 'd':              /* int */
              d = va_arg(ap, int);
              itoa(d, d2s, 10);
              break;

            case 'u':              /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 10);
              break;
            
            case 'o':              /* unsigned int o*/
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 8);
              break;

            case 'x':  case 'X':    /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 16);
              break;

            case 'p':               /* unsigned int */
              d = va_arg(ap, unsigned int);
              itoa(d, d2s, 16);
              break;

            case 'l':              /* long */
              if (fmt[1] == 'u'){
                d = va_arg(ap, unsigned long);
                fmt++;
                ltoa(d, d2s, 10);
              }
              else if (fmt[1] == 'x' || fmt[1] == 'X'){
                d = va_arg(ap, unsigned long long);
                fmt++;
                ltoa(d, d2s, 16);
              }
              else{
                d = va_arg(ap, long);
                ltoa(d, d2s, 10);
              }
              break;

            default:
              break;
          }
          str_len = strlen(d2s);//string length
          spc_len = width > str_len ? width - str_len : 0;
          if (*fmt == 'p')
          {
              *out++ = '0';len++;if(len == n) return n;
              *out++ = 'x';len++;if(len == n) return n;
          }
          char padding = (pad_zero == true) ? '0' : ' ';
          
          for(i = 0; i < spc_len; i++)
          {
            *out++ = padding;
            len++;if(len == n) return n;
          }
          for(i = 0; i < str_len; i++)
          {
            *out++ = d2s[i];
            len++;if(len == n) return n;
          }
          is_arg = false;
          fmt++;
          break;
        case 'c':              /* char */
          /* need a cast here since va_arg only
            takes fully promoted types */
          c = (char) va_arg(ap, int);
          *out++ = c;
          len++;if(len == n) return n;
          is_arg = false;
          fmt++;
          break;
        case '%':              /* % */
          *out++ = '%';
          len++;if(len == n) return n;
          is_arg = false;
          fmt++;
          break;
        case '0':              /* padding zero */
          pad_zero = true;
          fmt++;
          break;
        case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
          width = atoi(fmt);   /* width */
          while (*fmt >= '0' && *fmt <= '9') fmt++;
          break;
      }
    }
    else
    {
      if(*fmt == '%') {
        is_arg = true;
        pad_zero = false;
        width = 0;
        str_len = 0;
        spc_len = 0;
      }
      else{
        *out++ = *fmt;
        len++;if(len == n) return n;
      }
      fmt++;
    }
  }
  *out++ = '\0';
  return len;
}


#endif