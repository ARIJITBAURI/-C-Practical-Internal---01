//both the diagonal sum of a 3x3 matrix.
#include <stdio.h>

int main() {
    int matrix[3][3];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate sums of the diagonals
    for (int i = 0; i < 3; i++) {
        primaryDiagonalSum += matrix[i][i]; // Elements from top-left to bottom-right
        secondaryDiagonalSum += matrix[i][2 - i]; // Elements from top-right to bottom-left
    }

    printf("Sum of the primary diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
