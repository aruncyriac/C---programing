#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *my_strdup(char *ptr)
{
    char *s;
    s = malloc(strlen(ptr) + 1);
    strcpy(s,ptr);
    return s;
}
int main()
{
    char *cptr;
    char str[50];
    printf("Enter a string: ");
    scanf("%49[^\n]",str);
    cptr = my_strdup(str);
    printf("%s",cptr);
    free(cptr);
    return 0;

}