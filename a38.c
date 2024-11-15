#include <stdio.h>

int getword(char str[])
{
    int count = 0;
    while(*str++ != '\0')
    {
        count++;
        if(*str == ' ')
        {
            *str = '\0';
            return count;
        }
    }
    return count;
}

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %99[^\n]", str);

		len = getword(str);

        printf("\nYou entered %s and the length is %d\n", str, len);
}