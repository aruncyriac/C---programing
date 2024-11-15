#include <stdio.h>

int is_prime(int n)
{
    int i;
    for(i = 2;i <= n / 2;i++)
    {
        if(n % i == 0)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    //printf("%d",is_prime(n));
    if(n <= 0)
    printf("Invalid input");
    else if(is_prime(n) == 0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}