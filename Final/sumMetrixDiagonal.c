#include <stdio.h>

int main() {
    int rows, cols;

    // Step 1: Prompt the user to enter dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Step 2: Create the matrix based on the dimensions
    int matrix[rows][cols];

    // Step 3: Prompt the user to enter elements of the matrix
    printf("\nEnter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 4: Extract the diagonal elements of the matrix and calculate their sum
    int sumDiagonal = 0;
    printf("\nDiagonal Elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d\t", matrix[i][j]);
                sumDiagonal += matrix[i][j];
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    // Step 5: Display the sum of the diagonal elements
    printf("\nSum of Diagonal Elements: %d\n", sumDiagonal);

    return 0;
}
