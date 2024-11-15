/* 
To find the perfect number

Name: Arun Cyriac
Date:22aug2024

Description:
 In number theory, a perfect number is a positive integer that 
 is equal to the sum of its proper positive divisors, that is, the 
 sum of its positive divisors excluding the number itself (also known as its aliquot sum).

 Equivalently, a perfect number is a number that is half the sum of all of its
 positive divisors (including itself).

Example: 6 is perfect number  since 1 + 2 + 3 = 6

Sample Input:
Enter a number: 6

Sample Output:
Yes,entered number is perfect number
*/

#include<stdio.h>
int main()
{
    int i,sum,n;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);    //input the number
    if(n < 0)
    {
        printf("Error: Invalid Input,Enter only positive number"); // if input is negative terminate 
                                                              //program
        return 0;
    }
    for(i = 1;i <= n/2;i++) //loop to check the number is a is a divisor of n
    {
        if(n % i == 0)   //condition to check i is divisor
        sum = sum + i;  //adding sum of divisor
    }
    if(sum == n)    //comparing sum and input no.
    printf("Yes,entered number is perfect number");
    else
    printf("No,entered number is not a perfect number");
    return 0;
}