#include<stdio.h>
#include<stdarg.h>
void my_printf(char *format,...)
{
    int x;
    va_list ap;
    va_start(ap,format);
    while(*format != '\0')
    {
        if(*format == '%')
        {
            format++;
            switch(*format)
            {
                case 'd':
                    x = va_arg(ap,int);
                    fprintf(stdout,"%d",x);
                break;
            }
        }
        else
        {
            putchar(*format);
        }
        format ++;
    }
    va_end(ap);
}
int main()
{
    my_printf("Hello %d\n",100);
}