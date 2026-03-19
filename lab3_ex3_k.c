#include <stdio.h>

int main() {
    int episode;

    printf("--- Інформація про серіал Narcos: Mexico (1 сезон) ---\n");
    printf("Введіть номер серії (1-10): ");
    scanf("%d", &episode);

    printf("\nРезультат:\n");
    printf("--------------------------------------------\n");

    switch (episode) {
        case 1:
            printf("Назва: Camelot\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 2:
            printf("Назва: The Plaza System\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 3:
            printf("Назва: El Padrino\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 4:
            printf("Назва: Rafa, Rafa, Rafa!\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 5:
            printf("Назва: Colombian Connection\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 6:
            printf("Назва: La Ultima Frontera\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 7:
            printf("Назва: Jefe de Jefes\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 8:
            printf("Назва: Just Say No\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 9:
            printf("Назва: 88 Lunas\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        case 10:
            printf("Назва: Leyenda\n");
            printf("Дата прем'єри: 16 листопада 2018\n");
            break;
        default:
            printf("Помилка: У першому сезоні всього 10 серій.\n");
            printf("Спробуйте ввести число від 1 до 10.\n");
            break;
    }

    printf("--------------------------------------------\n");

    return 0;
}