#include <stdio.h>
#include <stdlib.h>

// Function to read a matrix from the user
void readMatrix(int **matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            //printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int **matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int **A, int **B, int **R, int rA, int cA, int cB) {
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            R[i][j] = 0;
            for (int k = 0; k < cA; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rA, cA, rB, cB;

    // Read dimensions for matrix A
    printf("Enter the number of rows for Matrix A: ");
    scanf("%d", &rA);
    printf("Enter the number of columns for Matrix A: ");
    scanf("%d", &cA);

    // Read dimensions for matrix B
    printf("Enter the number of rows for Matrix B: ");
    scanf("%d", &rB);
    printf("Enter the number of columns for Matrix B: ");
    scanf("%d", &cB);

    // Check if matrix multiplication is possible
    if (cA != rB) {
        printf("Matrix multiplication is not possible with these dimensions.\n");
        return 1;
    }

    // Allocate memory for matrix A
    int **A = (int **)malloc(rA * sizeof(int *));
    for (int i = 0; i < rA; i++) {
        A[i] = (int *)malloc(cA * sizeof(int));
    }

    // Allocate memory for matrix B
    int **B = (int **)malloc(rB * sizeof(int *));
    for (int i = 0; i < rB; i++) {
        B[i] = (int *)malloc(cB * sizeof(int));
    }

    // Allocate memory for result matrix R
    int **R = (int **)malloc(rA * sizeof(int *));
    for (int i = 0; i < rA; i++) {
        R[i] = (int *)malloc(cB * sizeof(int));
    }

    // Read matrix A
    printf("Enter elements for Matrix A:\n");
    readMatrix(A, rA, cA);

    // Read matrix B
    printf("Enter elements for Matrix B:\n");
    readMatrix(B, rB, cB);

    // Multiply matrices A and B, store result in R
    multiplyMatrices(A, B, R, rA, cA, cB);

    // Display the result matrix R
    printf("Result matrix (A * B) is:\n");
    printMatrix(R, rA, cB);

    // Free allocated memory of A
    for (int i = 0; i < rA; i++) {
        free(A[i]);
    }
    free(A);
    //  Free allocated memory of B
    for (int i = 0; i < rB; i++) {
        free(B[i]);
    }
    free(B);
    // Free allocated memory of R
    for (int i = 0; i < rA; i++) {
        free(R[i]);
    }
    free(R);

    return 0;
}
