// Armstrong number checker
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, remainder;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    originalNum = num;  // Reset originalNum for further calculations

    // Calculate the sum of digits raised to the power of 'digits'
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}