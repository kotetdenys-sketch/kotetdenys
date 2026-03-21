#include <stdio.h>

int main() { 
    int x, sum = 0;
    int i = -10; // Початкова точка

    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    while (i <= 50) {
        if (i % 2 == 0 && i < x) {
            sum += i;
        }
        i++; 
    }

    printf("Сума (цикл while): %d\n", sum);
    return 0;
}