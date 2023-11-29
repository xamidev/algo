#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

float calculCom(float montant, int choix);

int main(int argc, char** argv) {
   
    float montant = prix();
    int choix = menu();
    float commission = calculCom(montant, choix);
    float montantTotal = montant+commission;
    
    printf("Commission: %f\nPrix total: %f\n", commission, montantTotal);
    return 0;
}

float calculCom(float montant, int choix) {
    float commission;

    if (choix == 1) {
        commission = 0.03*montant;
        if (commission > 500) {commission = 500;}
    }
    else if (choix == 2) {
        commission = 0.05*montant;
        if (commission < 100) {commission = 100;}
    }
    else if (choix == 3) {
        commission = 0.06*montant;
    }
    else {
        printf("Erreur.\n");
        exit(1);
    }

    return commission;
}
