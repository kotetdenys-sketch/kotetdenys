#include <stdio.h>
#include <math.h>

int main() {
    double V, a, S;

    // Введення даних
    printf("V = ");
    scanf("%lf", &V);

    // Обчислення
    a = pow(V, 1.0/3.0); 
    S = 6 * a * a;

    // Результат
    printf("a = %.2f\n", a);
    printf("S = %.2f\n", S);

    return 0;

}