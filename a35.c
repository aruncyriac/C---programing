#include <stdio.h>

int is_prime(int n)
{
    for(int i = 2;i <= n/2;i++)
    {
        if(n % i == 0)
        return 1;
        
    }
    return 0;
}

void generate_prime(int n)
{
    for(int i = 2;i <= n;i++)
    {
        if(is_prime(i) == 0)
        printf("%d ",i);
    }
}

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}