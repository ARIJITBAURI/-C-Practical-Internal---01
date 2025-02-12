#include <stdio.h>

// function to calculate GCD of two numbers
int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    int gcd = GCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}
