/*Description:
AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a 
sequence of numbers such that the difference between the consecutive terms is 
constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression 
with common difference of 2.
GP :
In mathematics, a geometric progression, also known as a geometric sequence, is
a sequence of numbers where each term after the first is found by multiplying
the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with 
common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with
common ratio 1/2.
HP :
 In mathematics, a harmonic progression (or harmonic sequence) is a progression
 formed by taking the reciprocals of an arithmetic progression.
 
Name:Arun Cyriac
Date:03sept2024

Sample Input:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5

Sample Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>
int main()
{
    int a,r,n,i,sum = 0;
    
    //Input the first term
   // printf("Enter the First Number 'A': ");
    scanf("%d",&a);
    
    //Input the comman ratio
    //printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&r);
    
    //Input the number of terms
    //printf("Enter the number of terms 'N': ");
    scanf("%d",&n);
    
    if(n < 0)
    {
        printf("Invalid input");
        return 0;
    }
    
    //printing AP
    sum = a;
    printf("AP = %d",a);
    for(int i = 1;i < n;i++)
    {
        sum = sum + r;
        printf(",%d",sum);
    }
    
    //printing GP
    sum = a;
    printf("\nGP = %d",a);
    for(int i = 1;i < n;i++)
    {
        sum = sum * r;
        printf(",%d",sum);
    }
    
    //printing HP
    sum = a;
    printf("\nHP = ");
    for(int i =0;i < n;i++ )
    {
        
        printf("%f,",(float)1/sum);
        sum = sum + r;
    }
}