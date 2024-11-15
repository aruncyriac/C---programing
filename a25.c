#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;
    
    //printf("Enter the character:");
    scanf("%c", &ch);
    //printf("%hhd",ch);
    ret = my_ispunct(ch);
    if(ret == 1)
    printf("Entered character is punctuation character");
    else
    printf("Entered character is not punctuation character");
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
}
int my_ispunct(int ch)
{
    if(ch == ' ' || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <=57))
    return 0;
    else
    return 1;
}