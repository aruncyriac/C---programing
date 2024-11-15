#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size)
{
    int count = 1;
    arr2[0] = arr1[0];
    int flag = 0;
    for(int i = 1;i < size;i++)
    {
        for(int j = 0;j < count;j++)
        {
            if(arr1[i] ==  arr2[j])
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
        arr2[count++] = arr1[i];
        
        flag = 0;
        
    }
    //printf("%d",arr2[count]);
    *new_size = count;
}

int main()
{
    int n,count = 1;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements into the arrray: ");
    for(int i = 0;i < n;i++)
    scanf("%d",&arr1[i]);
    fun(arr1,n,arr2,&count);
    printf("After removing duplicates: ");
    for(int i = 0;i < count;i++)
    printf("%d ",arr2[i]);
    return 0;
}