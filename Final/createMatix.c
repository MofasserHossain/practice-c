#include <stdio.h>

int main() {
    int rows, cols;

    // Step 1: Prompt the user to enter dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Step 2: Create the 2D array based on the dimensions
    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    // Step 3: Prompt the user to enter elements of the first matrix
    printf("\nEnter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Step 3: Prompt the user to enter elements of the second matrix
    printf("\nEnter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }


   //  display the first matrix
   printf("\nFirst matrix:\n");
   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < cols; j++) {
           printf("%d\t", matrix1[i][j]);
       }
       printf("\n");
   }

   //  display the second matrix

   printf("\nSecond matrix:\n");
   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < cols; j++) {
           printf("%d\t", matrix2[i][j]);
       }
       printf("\n");
   }

    // Step 4: Perform the addition and store the result in the sumMatrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Step 5: Display the sum array as the output
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
