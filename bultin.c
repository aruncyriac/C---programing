#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%49[^\n]",str);
    printf("%lu",strlen(str));
}