#include <stdio.h>

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci(limit, 0, 1, 1);
}
void negative_fibonacci(int limit,int s,int f,int nex)
{
    if(limit <= 0)
    {
        if(s == 0)
        printf("0, ");
        if((limit <= nex && nex < 0) || (limit <= -nex && nex > 0))
        {
            printf("%d, ",nex);
            nex = s - f;
            s = f;
            f = nex;
            negative_fibonacci(limit,s,f,nex);
        }
        
    }
    else
    printf("Invalid input");
}