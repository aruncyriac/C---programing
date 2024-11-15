#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to sort the names alphabetically
void sortNames(char (*names)[20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j] if names[i] > names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

// Function to print the names
void printNames(char (*names)[20], int n) {
    printf("The sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n names, each with a fixed length of 20 characters
    char (*names)[20] = malloc(n * 20 * sizeof(char));
    if (names == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read n names from the user
    printf("Enter the %d names of length max 20 characters in each:\n", n);
    for (int i = 0; i < n; i++) {
        printf("[%d] -> ", i);
        scanf("%19s", names[i]);  // Read a maximum of 19 characters to leave space for null terminator
    }

    // Sort the names
    sortNames(names, n);

    // Print the sorted names
    printNames(names, n);

    // Free the allocated memory
    free(names);

    return 0;
}
