#include <stdio.h>

int main() {
    float usd, eur, pln;
    float kurs_usd = 41.50, kurs_eur = 45.10, kurs_pln = 10.35;

    printf("Введіть суму в Доларах: ");
    scanf("%f", &usd);
    printf("Введіть суму в Євро: ");
    scanf("%f", &eur);
    printf("Введіть суму в Злотих: ");
    scanf("%f", &pln);

    float uah_usd = usd * kurs_usd;
    float uah_eur = eur * kurs_eur;
    float uah_pln = pln * kurs_pln;

    printf("\nРезультат в гривнях\n");
    printf("USD: %.2f грн\n", uah_usd);
    printf("EUR: %.2f грн\n", uah_eur);
    printf("PLN: %.2f грн\n", uah_pln);

    if (uah_usd >= uah_eur && uah_usd >= uah_pln) {
        printf("Найбільша сума у Доларах: %.2f грн.\n", uah_usd);
    } 
    else if (uah_eur >= uah_usd && uah_eur >= uah_pln) {
        printf("Найбільша сума у Євро: %.2f грн.\n", uah_eur);
    } 
    else {
        printf("Найбільша сума у Злотих: %.2f грн.\n", uah_pln);
    }

    return 0;
}