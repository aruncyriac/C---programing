#include<stdio.h>
#include<stdio_ext.h>
char* my_strrchr(char* s,char c)
{
    int flag = 0;
    char* ch;
    while(*s != '\0')
    {
        if(*s == c)
        {
            flag = 1;
            ch = s;
            
        }
        s++;
    }
    s = ch; 
    if(flag == 0)
    return NULL;
    else
    return s;
}
int main()
{
    char ch,str[50];
    scanf("%49[^\n]",str);
    __fpurge(stdin);
    scanf("%c",&ch);
    printf("%s",my_strrchr(str,ch));
    return 0;
}