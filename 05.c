//prime factors of a number
#include <stdio.h>

// Function to find and print the prime factors of a number
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point. Start from 3 and check odd numbers.
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is still a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}

