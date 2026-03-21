#include <stdio.h>

int main() {
    int n;
    double x;
    double total_sum = 0.0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Введіть дійсне число x (не 0): ");
    scanf("%lf", &x);

    // Перевірка на всякий випадок, бо x у знаменнику
    if (x == 0) {
        printf("Помилка: x не може бути 0.\n");
        return 1;
    }

    // Зовнішній цикл по i (від 1 до n)
    for (int i = 1; i <= n; i++) {
        
        // Внутрішній цикл по j (від i до n)
        for (int j = i; j <= n; j++) {
            total_sum += (x / i) + ((double)j / x);
        }
    }

    printf("\nРезультат подвійної суми: %.4f\n", total_sum);

    return 0;
}