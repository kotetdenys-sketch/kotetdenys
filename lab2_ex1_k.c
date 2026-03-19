#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    int tripled_sum, integer_div, difference;

    // Введення даних
    printf("Введiть перше цiле число: ");
    scanf("%d", &num1);

    printf("Введiть друге цiле число: ");
    scanf("%d", &num2);

    tripled_sum = 3 * (num1 + num2);

    integer_div = num2 / num1;

    difference = num2 - num1;

    // Виведення результатів
    printf("\nРезультат\n");
    printf("Потроєна сума: %d\n", tripled_sum);
    printf("Цiла частина вiд дiлення %d на %d: %d\n", num2, num1, integer_div);
    printf("Рiзниця (%d - %d): %d\n", num2, num1, difference);

    return 0;
}