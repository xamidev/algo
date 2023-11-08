#include <stdlib.h>
#include <stdio.h>

int main() {
    
    double base, hauteur, perimetre, aire;

    printf(" ** Exercice 4 - Calcul d'aire **\n");

    printf("Base: ");
    scanf("%lf", &base);
    printf("Hauteur: ");
    scanf("%lf", &hauteur);
    
    perimetre = base*2+hauteur*2;
    aire = base*hauteur;

    printf("\n\nPérimètre: %.2f\nAire: %.2f\n", perimetre, aire);

    return 0;
}
