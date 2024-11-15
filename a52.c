#include <stdio.h>
#include <stdlib.h>

// Function to calculate average and store it in the extra block
void calculateAndStoreAverage(float **arr, int rows, int *columns) {
    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < columns[i]; j++) {
            sum += arr[i][j];
        }
        float average = sum / columns[i];
        arr[i][columns[i]] = average; // Store the average in the extra block
    }
}

// Function to sort rows based on the average stored in the extra block
void sortRowsByAverage(float **arr, int rows, int *columns) {
    for (int i = 0; i < rows - 1; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (arr[i][columns[i]] > arr[j][columns[j]]) {
                // Swap pointers to rows
                float *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // Swap column counts
                int tempCol = columns[i];
                columns[i] = columns[j];
                columns[j] = tempCol;
            }
        }
    }
}

// Main function to implement the logic
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Allocate memory for the array of pointers (static allocation for rows)
    float **arr = (float **)malloc(rows * sizeof(float *));
    int *columns = (int *)malloc(rows * sizeof(int));

    // Read number of columns for each row and allocate memory dynamically
    for (int i = 0; i < rows; i++) {
        printf("Enter the number of columns for row %d: ", i);
        scanf("%d", &columns[i]);
        columns[i]++; // Allocate one extra block for the average

        // Allocate memory for the columns dynamically
        arr[i] = (float *)malloc(columns[i] * sizeof(float));

        // Read values for each row
        printf("Enter %d elements for row %d: ", columns[i] - 1, i);
        for (int j = 0; j < columns[i] - 1; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    // Calculate and store averages
    calculateAndStoreAverage(arr, rows, columns);

    // Sort rows based on the averages
    sortRowsByAverage(arr, rows, columns);

    // Print the sorted array with averages
    printf("\nSorted rows based on the average:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns[i] - 1; j++) {
            printf("%.2f ", arr[i][j]);
        }
        printf("| Average: %.2f\n", arr[i][columns[i] - 1]);
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    free(columns);

    return 0;
}
