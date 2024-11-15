#include <stdio.h>

int is_xdigit(int);

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    if(ret == 1)
    printf("Entered character is an hexadecimal digit");
    else
    printf("Entered character is not an hexadecimal digit");
    
    /* Based on the return value of the function print the message */
    
    
    return 0;
}
int is_xdigit(int ch)
{
    if((ch >= 65 && ch <= 71) || (ch >= 97 && ch <= 102) || (ch >= 48 && ch <= 57))
    return 1;
    else
    return 0;
}

