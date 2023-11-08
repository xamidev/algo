#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    printf(" ** Partie 2 - Périmètre et aire d'un cercle **\n");

    double diametre, rayon, perimetre, aire;
    double pi = 3.1415;

    printf("Diamètre du cercle: ");
    scanf("%lf", &diametre);
    
    rayon = diametre/2;

    perimetre = 2*pi*rayon;
    aire = pi*pow(rayon,2);

    printf("\n\nPérimètre: %.2f\nAire: %.2f\n", perimetre, aire);
    return 0;
}
