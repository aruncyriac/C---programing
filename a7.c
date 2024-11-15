#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= n;j++)
        {
            if(i == j || i == ((n - j)+1))
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
    
    
}