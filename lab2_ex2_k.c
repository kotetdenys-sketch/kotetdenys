#include <stdio.h>
#include <math.h>

int main() {
    const double a, b, c;
    double y;
    
    printf("Введiть значення a: ");
    scanf("%lf", &a);

    printf("Введiть значення b: ");
    scanf("%lf", &b);

    printf("Введiть значення c: ");
    scanf("%lf", &c);

    y = (a - b) / (2 * b + c) + (1.0 / a);

    printf("\nРезультат y = %.4f\n", y);

    return 0;
}