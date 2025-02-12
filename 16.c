//16. 1+2+3+....n

#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
    } else {
        // Use the formula for the sum of the first n natural numbers
        sum = (n * (n + 1)) / 2;

        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}

