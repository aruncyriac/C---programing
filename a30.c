#include <stdio.h>

int main()
{
    static int num = -1;
    static unsigned long long int fact = 1;
    if(num == -1)
    {
        //printf("Enter the value of N :");
        scanf("%d",&num);
    }
    if(num == 0)
    {
        printf("Factorial of the given number is %lld",fact);
    }
    else if(num >=1)
    {
        fact = fact*num--;
        main();
    }
    else
    printf("Invalid input");
}
