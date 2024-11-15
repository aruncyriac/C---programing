#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char* my_strcat(char* d,char* s)
{
    char *ch;
    ch = d;
    while(*d++);
    d--;
    while(*s)
    {
        *d++ = *s++;
    }
    d = ch;
    return d;
}
int main()
{
    char str1[100],str2[50];
    scanf("%49[^\n]",str1);
    __fpurge(stdin);
    scanf("%49[^\n]",str2);
    printf("%s",my_strcat(str1,str2));
    return 0;
}