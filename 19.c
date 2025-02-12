//19. (1/1!) + (2/2!) + (3/3!) + ……. + (n/n!) 

#include <stdio.h>


double factorial(int num) {
    double fact = 1.0;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


double calculateSeries(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += (double)i / factorial(i);  
    }

    return sum;
}

int main() {
    int n;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    double result = calculateSeries(n);

    
    printf("Result of the series: %.6lf\n", result);

    return 0;
}
