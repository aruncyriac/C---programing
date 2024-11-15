/*
Description:
In mathematics, the sieve of Eratosthenes, one of a number of prime number sieves, is a simple, ancient
algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as 
composite (i.e., not prime) the multiples of each prime, starting with the multiples of 2.

The sieve of Eratosthenes is one of the most efficient ways to find all of the smaller primes. It is 
named after Eratosthenes of Cyrene, a Greek mathematician.

Name:Arun Cyriac
Date:04sept2024

Sample Input:
Enter the value of 'n' : 20

Sample Output:
The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/
#include<stdio.h>
int main()
{
    int i,n,j,b,c;
    
    //Input the size of array or limit n
    //printf("Enter the value of 'n':");
    scanf("%d",&n);
    
    //checking the n is positive and grater than 1
    
    if(n > 1)
    {
        int arr[n - 1];
       // printf("%zu",sizeof(arr));
        //giving array the numbers from 2 to n
        for(i = 0,j = 2;i < (n-1);i++,j++)
        {
            arr[i] = j;
        }
        /*for(i = 0;i < n-1;i++)
        printf("%d ",arr[i]);*/
        
        //finding prime number
        for(i = 0;i < ((n - 1)/2);i++)
        {
            b = arr[i];
            for(j = i+1;j < (n -1);j++)
            {
                //printf("%d ",arr[j]);
                
                c = arr[j];
                if(b != 0 && c != 0 )
                {
                    if(c % b == 0)
                    {
                        //printf("%d",b);
                        arr[j] = 0;
                    }
                }
            }
        }
        printf("The primes less than or equal to %d are:",n);
        for(i = 0;i < n-1;i++)
        {
            if(arr[i] == 0)
            continue;
            printf(" %d,",arr[i]);
        }
    }
    else
    {
        printf("Please enter a positive number which is >1");
    }
    return 0;
}