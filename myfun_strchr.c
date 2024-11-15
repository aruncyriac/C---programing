#include<stdio.h>
#include<stdio_ext.h>
char* my_strchr(char* s,char c)
{
    while(*s)
    {
        if(*s == c)
        return s;
        s++;
    }
    return NULL;
}
int main()
{
    char ch,str[50];
    scanf("%49[^\n]",str);
    __fpurge(stdin);
    scanf("%c",&ch);
    printf("%s",my_strchr(str,ch));
    return 0;
}