#include <stdio.h>
#include <stdlib.h>

int menu(void) {
    int choix;

    printf("*** Calculatrice ***\n");
    printf("[1] - Addition\n[2] - Soustraction\n[3] - Multiplication\n[4] - Division\nVotre choix? ");
    scanf("%d", &choix);

    return choix;
}
