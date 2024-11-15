#include <stdio.h>

void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    positive_fibonacci(limit, 0, 1, 1);
}
void positive_fibonacci(int limit,int s,int f,int nex)
{
    if(limit >= 0)
    {
        if(s == 0)
        {
            
            printf("0, ");
        }
        if(limit >= f)
        {
            printf("%d, ",nex);
            nex = f + s;
            s = f;
            f = nex;
            positive_fibonacci(limit,s,f,nex);
        }
    }
    else{
        printf("Invalid input");
    }
}