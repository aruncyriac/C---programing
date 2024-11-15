#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);
    if(ret == 1)
    printf("Entered character is lower case alphabet");
    else
    printf("Entered character is not lower case alphabet");
    return 0;
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
}
int my_islower(int ch)
{
    if(ch >= 97 && ch <= 122)
    return 1;
    else
    return 0;
}