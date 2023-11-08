#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int choice;
    printf(" ** Calculatrice **\n");
    printf("Entrer a et b:\n");
    double a, b, result;
    scanf("%lf\n%lf", &a, &b);

    printf("[1] Addition\n");
    printf("[2] Soustraction\n");
    printf("[3] - Multiplication\n");
    printf("[4] - Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a+b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
        default:
            printf("Erreur.\n");
            exit(1);
    }

    printf("Résultat: %.2lf\n", result);
}
