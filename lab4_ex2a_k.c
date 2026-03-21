#include <stdio.h>

int main() {  
    int x, sum = 0;
    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    // i йде від -10 до 50 включно
    for (int i = -10; i <= 50; i++) {
        // Перевірка: парне ТА менше за x
        if (i % 2 == 0 && i < x) {
            sum += i;
        }
    }

    printf("Сума (цикл for): %d\n", sum);
    return 0;
}