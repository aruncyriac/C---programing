/*
Name:Arun Cyriac
Date: 26aug2024

Description:
In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in
the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . 
OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .

By definition, the first two numbers in the Fibonacci sequence are 0 and 1,
each subsequent number is the sum of the previous two

Sample Input:
Enter a number: 10

sample Output:
0 1 1 2 3 5 8
*/
#include<stdio.h>
int main()
{
    int f,n,num,t,i;
    //printf("Enter a number: ");
    scanf("%d",&num);
    f = 0;
    n = 1;
    if(num >= 0)
    {
        for(i = 0;f <= num;i++)
        {
            printf("%d ",f);
            t = n;
            n = n + f;
            f = t;
        
        
        }
    }
    else
    printf("Invalid input");
    return 0;
}
