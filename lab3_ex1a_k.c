#include <stdio.h>
#include <math.h>

int main() {
    double x, f;
    printf("Введiть x: ");
    scanf("%lf", &x);

    if (x < -10) {
        f = 2 * pow(x, 3);
        printf("f(x) = %.2f\n", f);
    }

    if (x >= -10 && x <= 10) {
        if (-x + 5 < 0) { 
            printf("Помилка: значення вiд'ємне!\n");
        } else {
            f = x + sqrt(-x + 5);
            printf("f(x) = %.2f\n", f);
        }
    }

    if (x > 10) {
        f = pow(x, 2);
        printf("f(x) = %.2f\n", f);
    }

    return 0;
}