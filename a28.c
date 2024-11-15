#include <stdio.h>

int sec_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i = 0;i < size;i++)
    scanf("%d",&arr[i]);
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}
int sec_largest(int *ptr,int n)
{
    int l,s,i;
    l = ptr[0];
    s = 0;
    

    for(i = 1;i < n;i++)
    {
        if(s < ptr[i])
        {
            if(ptr[i] > l)
            {
                s = l;
                l = ptr[i];
                //printf("\n%d",l);
            }
            else
            s = ptr[i];
        }
    }
   // printf("\n%d",l);
    return s;
}