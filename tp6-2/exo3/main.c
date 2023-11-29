#include <stdio.h>
#include <stdlib.h>
#include "calculs.h"
#include "menu.h"

int main(int argc, char** argv) {
   
    float a, b, resultat;
        
    printf("Entrez deux réels:\n");
    scanf("%f%f", &a, &b);

    switch (menu()) {

        case 1:
            resultat = addition(a,b);
            break;
        case 2:
            resultat = soustraction(a,b);
            break;
        case 3:
            resultat = multiplication(a,b);
            break;
        case 4:
            resultat = division(a,b);
            break;

        default:
            printf("Erreur.\n");
            exit(1);
    }

    printf("Résultat: %f\n", resultat);
    return 0;
}
