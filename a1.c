/*
name: Arun Cyriac
date:20aug2024

description:The user entered number
should identified whether its a odd or a even number. 
Mention its sign too.

sample inputs: 2,-3
sample output:-3 is negative odd number

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of 'n': ");
    scanf("%d",&num);  //input from user
    if(num == 0)       //check if num is 0
    {
        printf("%d is neither odd nor even",num);
        
    }
    else
    {
        if(num > 0)     //check if num is positive
        {
            if(num % 2 == 0) //check if num is even
            {
                printf("%d is positive even number",num);
            }
            else           //check if num is odd
            {
                printf("%d is positive odd number",num);
            }
        }
        else    //check if num is negative
        {
           if(num % 2 == 0) //check if num is even
            {
                printf("%d is negative even number",num);
            }
            else           //check if num is odd
            {
                printf("%d is negative odd number",num);
            }  
        }
    }
    return 0;
}