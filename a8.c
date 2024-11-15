#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i = n;i > 0;i--)
    {
        for(j = i;j <= n;j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
        
    }
    for(i = 2;i <= n;i++)
    {
        for(j = i;j <= n;j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
        
        
    }
}