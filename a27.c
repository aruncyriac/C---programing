#include <stdio.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    //printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i = 0;i < size;i++)
    scanf("%d",&arr[i]);
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}
int third_largest(int *ptr,int n)
{
    int l,s,t,i;
    l = ptr[0];
    s = 0;
    t = 0;
    for(i = 1;i < n;i++)
    {
        if(ptr[i] > t && ptr[i] != l && ptr[i] != s)
        {
            if(ptr[i] > s)
            {
                if(ptr[i] > l)
                {
                    t = s;
                    s = l;
                    l = ptr[i];
                }
                else if(ptr[i] != s)
                {
                    t = s;
                    s = ptr[i];
                }
            }
            else
            {
                t = ptr[i];
            }
        }
    }
    //printf("\n%d %d",l,s);

    return t;
}