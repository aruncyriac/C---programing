#include <stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:\n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    if(ret == 1)
    printf("Entered character is alphanumeric character");
    else
    printf("Entered character is not alphanumeric character");
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
}
int my_isalnum(int ch)
{
    //48,97,65
    if((ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <=57))
    return 1;
    else
    return 0;
}