#include <stdio.h>

int main() {
    int x, sum = 0;
    int i = -10;

    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    do {
        if (i % 2 == 0 && i < x) {
            sum += i;
        }
        i++;
    } while (i <= 50);

    printf("Сума (цикл do...while): %d\n", sum);
    return 0;
}