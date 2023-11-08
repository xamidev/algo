#include <stdlib.h>
#include <stdio.h>

int main() {

    printf(" ** Partie 2 - Périmètre et aire d'un cercle **\n");

    double diametre, perimetre, aire;
    double pi = 3.1415;

    printf("Diamètre du cercle: ");
    scanf("%lf", &diametre);

    perimetre = 2*pi*(diametre/2);
    aire = pi*((diametre/2)*(diametre/2));

    printf("\n\nPérimètre: %.2f\nAire: %.2f\n", perimetre, aire);
    return 0;
}
