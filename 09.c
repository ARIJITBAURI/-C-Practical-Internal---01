//sum of digits of a number
#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit
    }
    
    return sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        num = -num; // Convert negative numbers to positive
    }

    printf("Sum of digits: %d\n", sum_of_digits(num));
    
    return 0;
}
