/*Description:
In probability theory and statistics, a median is described as the number
separating the higher half of a sample, a population, or a probability 
distribution, from the lower half. The median of a finite list of numbers 
can be found by arranging all the numbers from lowest value to highest value 
and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the
 array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle 
 element of the sorted array which is 12.
 
 Name:Arun Cyriac
 Date:03sept2024
 
 Sample Input:
 nter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Sample Output:
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5      
*/
#include<stdio.h>
int main()
{
    //Declartion of variables for size of each array
    int i,j,size1,size2,temp;
    //Declartion of variable for medians
    float m1,m2,m;
    //Input the size of array 1 and intilazing array1
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&size1);
    int arr1[size1];
    

    //Input the size of array 2 and intilazing array2
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&size2);
    int arr2[size2];
    
    //Enter the elements of array1
    printf("Enter the elements one by one for Array A: ");
    for(i = 0;i < size1;i++)
    scanf("%d",&arr1[i]);

    //Enter the elements of array2
    printf("Enter the elements one by one for Array B: ");
    for(i = 0;i < size2;i++)
    scanf("%d",&arr2[i]);
    
    //Sorting array1
    for(i = 0;i < size1 - 1;i++)
    {
        for(j = 0;j < size1 - 1 -i ;j++)
        {
            if(arr1[j + 1] < arr1[j])
            {
                temp = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = temp;
            }

        }
    }
    
    //sorting array2
    for(i = 0;i < size2 - 1;i++)
    {
        for(j = 0;j < size2 - 1 -i ;j++)
        {
            if(arr2[j + 1] < arr2[j])
            {
                temp = arr2[j + 1];
                arr2[j + 1] = arr2[j];
                arr2[j] = temp;
            }

        }
    }
    
    //Finding the median of array1
    if(size1 % 2 == 0)
    {
        m1 = (float)(arr1[size1 / 2] + arr1[(size1 / 2) - 1]) / 2;
    }
    else
    m1 = arr1[(size1 / 2)];

    printf("Median of array1: %g",m1);
    
    //Finding the median if array2
    if(size2 % 2 == 0)
    {
        m2 = (float)(arr2[size2 / 2] + arr2[(size2 / 2) - 1]) / 2;
    }
    else
    m2 = arr2[(size2 / 2)];

    printf("\nMedian of array2: %g",m2);
    
    //Finding the median of two array
    printf("\nMedian of both arrays: %g",(m1 + m2)/2);


    
}