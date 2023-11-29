#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"

int main(int argc, char** argv){
    
    printf(" *** TP 7 - Tableaux ***\n\n");

    int size = atoi(argv[1]);
    
    int tableau[size];
    
    initTableau(tableau, size);
    printf("Tableau généré:\n");
    afficheTableau(tableau, size);
    printf("Somme: %d\n", sommeTableau(tableau, size));
    printf("Moyenne: %d\n", moyTableau(tableau, size));
    printf("Maximum: %d\n", maxTableau(tableau, size));
    printf("Minimum: %d\n", minTableau(tableau, size));
    
    // Exercice 2
    
    triTableau(tableau, size);
    printf("Tableau trié: \n");
    afficheTableau(tableau, size);
     
    printf("Tableau permuté: \n");
    permuteTableau(tableau, size);
    
    return 0;
}
