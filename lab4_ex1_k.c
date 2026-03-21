#include <stdio.h>
#include <math.h>

int main() {
    double x, y, a;
    int is_valid = 0; 

    while (is_valid == 0) {
        printf("\nВведіть дійсні числа x та y через пробіл: ");
        scanf("%lf %lf", &x, &y);

        if (x - y < 0) {
            printf("Помилка: x - y = %.2f. Корінь з від'ємного числа не існує!\n", x - y);
            printf("Задайте інші значення.\n");
            continue; 
        }

        if (x * x + y * y == 0) {
            printf("Помилка: x^2 + y^2 = 0. Виконується ділення на 0!\n");
            printf("Задайте інші значення.\n");
            continue;
        }

        is_valid = 1;

        a = sqrt(x - y) / (x * x + y * y);

        printf("\nРезультат: a = %.4f\n", a);
    };

    return 0;
}