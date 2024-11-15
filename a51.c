#include <stdio.h>
#include <stdlib.h>

void generateMagicSquare(int **magicSquare, int n) 
{
    int row = 0;
    int col = n / 2;
    int num;

    for (num = 1; num <= n * n; num++) 
    {
        magicSquare[row][col] = num;

        int newRow = (row - 1 + n) % n; // Move up
        int newCol = (col + 1) % n;      // Move right

        // If the cell is already occupied, move down one row instead
        if (magicSquare[newRow][newCol] != 0) 
        {
            row = (row + 1) % n;
        } else 
        {
            row = newRow;
            col = newCol;
        }
    }
}

void printMagicSquare(int **magicSquare, int n) 
{
    printf("Magic Square of order %d:\n", n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%4d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input an odd number for the size of the magic square
    printf("Enter an odd number for the order of the magic square: ");
    scanf("%d", &n);

    // Check if the input is odd
    if (n % 2 == 0) 
    {
        printf("Error: Please enter an odd number.\n");
        return 1;
    }

    // Allocate memory for the magic square
    int **magicSquare = (int **)calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++) 
    {
        magicSquare[i] = (int *)calloc(n, sizeof(int));
    }

    // Generate the magic square
    generateMagicSquare(magicSquare, n);

    // Print the magic square
    printMagicSquare(magicSquare, n);

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(magicSquare[i]);
    }
    free(magicSquare);

    return 0;
}
