#include <stdio.h>

int main() {
    int matrix[3][3];
    int max;

    // Input the matrix elements
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) { // Fixed loop range (0 to 2)
        for (int j = 0; j < 3; j++) { // Fixed loop range (0 to 2)
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Initialize max with the first element of the matrix
    max = matrix[0][0];

    // Find the largest number in the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("The largest number in the 3x3 matrix is: %d\n", max);

    return 0;
}
