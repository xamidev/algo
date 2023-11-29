#include <stdio.h>
#include <stdlib.h>

int menu(void) {

    int choix;
    printf("*** Menu du vendeur ***\n");
    printf("[1] - Voiture neuve\n");
    printf("[2] - Voiture d'occasion\n");
    printf("[3] - Pièce détachée\n");

    printf("Votre choix? ");
    scanf("%d", &choix);

    return choix;
}

float prix(void) {
    float montant;
    printf("Prix? ");
    scanf("%f", &montant);
    return montant;
}
