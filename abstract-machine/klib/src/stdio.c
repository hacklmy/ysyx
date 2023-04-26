#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char sprint_buf[2048];
char* itoa(int num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
    unsigned unum;//存放要转换的整数的绝对值,转换的整数可能是负数
    int i=0,j,k;//i用来指示设置字符串相应位，转换之后i其实就是字符串的长度；转换后顺序是逆序的，有正负的情况，k用来指示调整顺序的开始位置;j用来指示调整顺序时的交换。
 
    //获取要转换的整数的绝对值
    if(radix==10&&num<0)//要转换成十进制数并且是负数
    {
        unum=(unsigned)-num;//将num的绝对值赋给unum
        str[i++]='-';//在字符串最前面设置为'-'号，并且索引加1
    }
    else unum=(unsigned)num;//若是num为正，直接赋值给unum
 
    //转换部分，注意转换后是逆序的
    do
    {
        str[i++]=index[unum%(unsigned)radix];//取unum的最后一位，并设置为str对应位，指示索引加1
        unum/=radix;//unum去掉最后一位
 
    }while(unum);//直至unum为0退出循环
 
    str[i]='\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
 
    //将顺序调整过来
    if(str[0]=='-') k=1;//如果是负数，符号不用调整，从符号后面开始调整
    else k=0;//不是负数，全部都要调整
 
    char temp;//临时变量，交换两个值时用到
    for(j=k;j<=(i-1)/2;j++)//头尾一一对称交换，i其实就是字符串的长度，索引最大值比长度少1
    {
        temp=str[j];//头部赋值给临时变量
        str[j]=str[i-1+k-j];//尾部赋值给头部
        str[i-1+k-j]=temp;//将临时变量的值(其实就是之前的头部值)赋给尾部
    }
 
    return str;//返回转换后的字符串
}

char* ltoa(long num,char* str,int radix)
{
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
    unsigned long unum;//存放要转换的整数的绝对值,转换的整数可能是负数
    int i=0,j,k;//i用来指示设置字符串相应位，转换之后i其实就是字符串的长度；转换后顺序是逆序的，有正负的情况，k用来指示调整顺序的开始位置;j用来指示调整顺序时的交换。
 
    //获取要转换的整数的绝对值
    if(radix==10&&num<0)//要转换成十进制数并且是负数
    {
        unum=(unsigned long)-num;//将num的绝对值赋给unum
        str[i++]='-';//在字符串最前面设置为'-'号，并且索引加1
    }
    else unum=(unsigned long)num;//若是num为正，直接赋值给unum
 
    //转换部分，注意转换后是逆序的
    do
    {
        str[i++]=index[unum%(unsigned long)radix];//取unum的最后一位，并设置为str对应位，指示索引加1
        unum/=radix;//unum去掉最后一位
 
    }while(unum);//直至unum为0退出循环
 
    str[i]='\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
 
    //将顺序调整过来
    if(str[0]=='-') k=1;//如果是负数，符号不用调整，从符号后面开始调整
    else k=0;//不是负数，全部都要调整
 
    char temp;//临时变量，交换两个值时用到
    for(j=k;j<=(i-1)/2;j++)//头尾一一对称交换，i其实就是字符串的长度，索引最大值比长度少1
    {
        temp=str[j];//头部赋值给临时变量
        str[j]=str[i-1+k-j];//尾部赋值给头部
        str[i-1+k-j]=temp;//将临时变量的值(其实就是之前的头部值)赋给尾部
    }
 
    return str;//返回转换后的字符串
}
int printf(const char *fmt, ...) {
  va_list args; 
  int n;
  va_start(args, fmt);
  n = vsprintf(sprint_buf, fmt, args);
  va_end(args);
  for (size_t i = 0; i < 2048 && sprint_buf[i] != '\0'; i++)
  {
    putch(sprint_buf[i]);
  }
  
  return n;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  assert( out != NULL && fmt != NULL);

  int len = 0;
  bool is_arg = false;
  long int d;
  char c;
  char *s;
  char d2s[32];
  bool align_left = false;
  bool sign_disp = false;
  bool pad_zero = false;
  int  width = 0;
  int  precision = 0;
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
          spc_len = precision > 0 ? ((width > precision)?(width - precision):0) : (width > str_len ? width - str_len : 0);
          str_len = (precision == 0 ? str_len : precision);//print length
          if(align_left == false)// space' '
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
          if(align_left == true)// space' '
            for(i = 0; i < spc_len; i++)
            {
              *out++ = ' ';
              len++;
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
              // width = 16;
              // pad_zero = false;
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
          if (sign_disp && *d2s != '-')//sign +
          {
            spc_len -= 1;
          }
          if (*fmt == 'p')
          {
              *out++ = '0';len++;
              *out++ = 'x';len++;
          }
          char padding = (pad_zero == true) ? '0' : ' ';
          if(align_left == false) {// padding space' ' or zero'0'
            for(i = 0; i < spc_len; i++)
            {
              *out++ = padding;
              len++;
            }
          }
          if (sign_disp && *d2s != '-')//sign +
          {
            *out++ = '+';
            len++;
            width--;
          }
          for(i = 0; i < str_len; i++)
          {
            *out++ = d2s[i];
            len++;
          }
          if(align_left == true)// padding space' '
            for(i = 0; i < spc_len; i++)
            {
              *out++ = ' ';
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
        case '-':              /* align left */
          align_left = true;
          fmt++;
          break;
        case '+':              /* +- sign */
          sign_disp = true;
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
        case '*':
          width = va_arg(ap, int);   /* width */
          fmt++;
          break;
        case '.':              /* precision */
          fmt++;
          if (*fmt == '*')
          {
            precision = va_arg(ap, int);
            fmt++;
          }
          else
          {
            precision = atoi(fmt);
            while (*fmt >= '0' && *fmt <= '9') fmt++;
          }
          pad_zero = false;
          break;
      }
    }
    else
    {
      if(*fmt == '%') {
        is_arg = true;
        align_left = false;
        sign_disp = false;
        pad_zero = false;
        width = 0;
        precision = 0;
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
	int len;

	va_start(args, fmt);
	len = vsprintf(out,fmt,args);
	va_end(args);
	return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	va_list args;
	int len;

	va_start(args, fmt);
	len = vsnprintf(out, n, fmt, args);
	va_end(args);
	return len;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  assert( out != NULL && fmt != NULL && n != 0);

  int len = 0;
  bool is_arg = false;
  long int d;
  char c;
  char *s;
  char d2s[32];
  bool align_left = false;
  bool sign_disp = false;
  bool pad_zero = false;
  int  width = 0;
  int  precision = 0;
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
          spc_len = precision > 0 ? ((width > precision)?(width - precision):0) : (width > str_len ? width - str_len : 0);
          str_len = (precision == 0 ? str_len : precision);//print length
          if(align_left == false)// space' '
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
          if(align_left == true)// space' '
            for(i = 0; i < spc_len; i++)
            {
              *out++ = ' ';
              len++;if(len == n) return n;
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
              // width = 16;
              // pad_zero = false;
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
          if (sign_disp && *d2s != '-')//sign +
          {
            spc_len -= 1;
          }
          if (*fmt == 'p')
          {
              *out++ = '0';len++;if(len == n) return n;
              *out++ = 'x';len++;if(len == n) return n;
          }
          char padding = (pad_zero == true) ? '0' : ' ';
          if(align_left == false) {// padding space' ' or zero'0'
            for(i = 0; i < spc_len; i++)
            {
              *out++ = padding;
              len++;if(len == n) return n;
            }
          }
          if (sign_disp && *d2s != '-')//sign +
          {
            *out++ = '+';
            len++;if(len == n) return n;
            width--;
          }
          for(i = 0; i < str_len; i++)
          {
            *out++ = d2s[i];
            len++;if(len == n) return n;
          }
          if(align_left == true)// padding space' '
            for(i = 0; i < spc_len; i++)
            {
              *out++ = ' ';
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
        case '-':              /* align left */
          align_left = true;
          fmt++;
          break;
        case '+':              /* +- sign */
          sign_disp = true;
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
        case '*':
          width = va_arg(ap, int);   /* width */
          fmt++;
          break;
        case '.':              /* precision */
          fmt++;
          if (*fmt == '*')
          {
            precision = va_arg(ap, int);
            fmt++;
          }
          else
          {
            precision = atoi(fmt);
            while (*fmt >= '0' && *fmt <= '9') fmt++;
          }
          pad_zero = false;
          break;
      }
    }
    else
    {
      if(*fmt == '%') {
        is_arg = true;
        align_left = false;
        sign_disp = false;
        pad_zero = false;
        width = 0;
        precision = 0;
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