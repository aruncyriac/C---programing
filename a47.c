#include <stdio.h>

int pangram(char *s)
{
    int arr[26];
    int i;
    for(i = 0;i < 26;i++)
    {
        arr[i] = 0;
    }
    while(*s)
    {
        if(*s >= 97 && *s <= 122)
        {
            i = *s - 97;
            arr[i] = 1;
            
        }
        else if(*s >= 65 && *s <= 90)
        {
            i = *s -65;
            arr[i] = 1;
        
        }
        s++;
       // printf("%c",*s);
    }
    
  
    for(i = 0;i < 26;i++)
    {
        //printf("%d",arr[i]);
        if(arr[i] == 0)
        {
        
            return 0;
        }
        
    }
    
    return 1;
    
}

int main()
{
    char str[100];
    scanf("%99[^\n]",str);
    int ret;
    ret = pangram(str);
    if(ret == 1)
    printf("The Entered String is a Pangram String");
    else
    printf("The Entered String is not a Pangram String");
    return 0;
}