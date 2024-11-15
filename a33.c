#include <stdio.h>

void print_sort(int *arr, int n)
{
    int i, j ,l,f,s;
    l = f = arr[0];
    for(i = 1;i < n;i++)
    {
        if(arr[i] > l)
        {
            l = arr[i];
        }
        if(arr[i] < f)
        {
            f = arr[i];
        }
    }
    printf("%d ",f);
    s = l;
    for(j = 0;j < n-1 ;j++)
    {
        for(i = 0;i < n ;i++)
        {
        
                
                if(arr[i] <= s && arr[i] > f)
                {
                    s = arr[i];  
                    //printf("%d\n",s);
                }
        
            /*if(arr[i] < 0)
            {
                if(arr[i] >= s && arr[i] < f)
                {
                    s = arr[i];
                }
            }*/
        }
        /*if(j == 0)
        continue;*/
        printf("%d ",s);
        f = s;
        s = l;
    }
}
int main()
{
    int size, iter;
    
    //printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    //printf("Enter the %d elements",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    printf("After sorting: ");
    print_sort(arr, size);
    
    printf("\nOriginal array values ");
    for(iter = 0;iter < size;iter++)
    printf("%d ",arr[iter]);
}