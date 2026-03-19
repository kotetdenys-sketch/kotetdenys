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
    else if (x >= -10 && x <= 10) {
        if (-x + 5 >= 0) {
            f = x + sqrt(-x + 5);
            printf("f(x) = %.2f\n", f);
        } else {
            printf("Помилка: корінь з вiд'ємного числа (x > 5)\n");
        }
    } 
    else { 
        f = pow(x, 2);
        printf("f(x) = %.2f\n", f);
    }

    return 0;
}