#include <stdio.h>

int main()
{
    //Write logic to check the given number is prime or not
    int num,i,flag;
    flag = 0;
    //printf("Enter a number: ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Invalid input");
        return 0;
    }
    for(i = 2;i <= (num/2);i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    if(flag == 1)
    printf("%d is not a prime number",num);
    else
    printf("%d is a prime number",num);
    return 0;
}