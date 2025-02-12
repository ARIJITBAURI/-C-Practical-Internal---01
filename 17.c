//17. X - (1/2)*X^2 + (1/3)*X^3 - (1/4)*X^4 + ... -(1/n)*X^n

#include <stdio.h>
#include <math.h>

double calculateSeries(double x, int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double term = pow(x, i) / i;  
        if (i % 2 == 0) {
            sum -= term;  
        } else {
            sum += term;  
        }
    }

    return sum;
}

int main() {
    double x;
    int n;

    
    printf("Enter the value of X: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    double result = calculateSeries(x, n);

    
    printf("Result of the series: %.6lf\n", result);

    return 0;
}
