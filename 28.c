// Find the sum of n numbers.

#include <stdio.h>

int main() {
    int n, sum = 0, number;

   
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    
    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &number);
        sum += number;  
    }

    
    printf("Sum of the %d numbers is: %d\n", n, sum);

    return 0;
}
