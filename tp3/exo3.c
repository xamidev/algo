#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salaireHoraire, nbHeures, heuresSup, salaireSup, salaireTotal;

    printf("Salaire horaire: ");
    scanf("%f", &salaireHoraire);
    printf("Nombre d'heures: ");
    scanf("%f", &nbHeures);

    if (nbHeures > 160 && nbHeures <=200) {
        heuresSup = nbHeures-160;
        salaireSup = 1.25*salaireHoraire*heuresSup;
    }
    if (nbHeures > 200) {
        heuresSup = nbHeures-200;
        salaireSup = salaireSup + 1.5*salaireHoraire*heuresSup;
    }
    
    salaireTotal = salaireHoraire*(nbHeures-heuresSup)+salaireSup;

    printf("Salaire total : %.2f\n", salaireTotal);
    return 0;
}
