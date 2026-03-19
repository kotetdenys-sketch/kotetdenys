#include <stdio.h>
#include <math.h>

int main() {
    int a, b, y;
    double x;

    // Введення цілих чисел
    printf("Введiть ціле число a (10): ");
    scanf("%d", &a);

    printf("Введiть ціле число b (2): ");
    scanf("%d", &b);

    printf("Введiть ціле число c (5): ");
    scanf("%d", &y);

    x = sqrt(a * y - pow(b, 3)) - 2 * sqrt(a * b) + (double)(b + y) / (2 * a);

    // Результат
    printf("\nРезультат обчислення x = %.4f\n", x);

    return 0;
}