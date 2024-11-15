#include <stdio.h>
#include <string.h>


// Function to check if all characters in the string are distinct
int Char_Unique(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++) 
    {
        for (int j = i + 1; j < length; j++) 
        {
            if (str[i] == str[j]) 
            {
                return 0;
            }
        }
    }
    return 1;
}

// Function to swap characters at positions x and y in the string
void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate all patterns
void generate(char *str, int start, int end) 
{
    if (start == end) 
    {
        printf("%s\n", str);
    } else 
    {
        for (int i = start; i <= end; i++) 
        {
            swap(&str[start], &str[i]);
            generate(str, start + 1, end);
            swap(&str[start], &str[i]); /
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if all characters are unique
    if (Char_Unique(str) == 0) 
    {
        printf("Error: please enter distinct characters.\n");
        return 1;
    }

    int n = strlen(str);
    printf("All possible combinations of given string:\n");
    generate(str, 0, n - 1);

    return 0;
}
