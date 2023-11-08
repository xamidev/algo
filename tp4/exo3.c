#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    float resOne, resTwo, resThree, resTotal;
    char serialChoice;
    bool serial = false;
    
    printf("Entrer 3 valeurs de résistances:\n");
    scanf("%f%f%f", &resOne, &resTwo, &resThree);
    printf("Utiliser des résistances en série? (y/n) ");
    scanf(" %c", &serialChoice);

    if (resOne < 0 || resTwo < 0 || resThree < 0) {
        printf("Erreur: au moins une résistance est négative\n");
        exit(1);
    }

    if (serialChoice == 'y') {
        serial = true;
    }
    else if (serialChoice == 'n') {
        serial = false;
    }
    else {
        printf("Erreur : mauvais choix de circuit\n");
        exit(1);
    }

    if (serial) {
        resTotal = resOne + resTwo + resThree;
    }
    else if (!serial) {
        resTotal = 1/(1/resOne+1/resTwo+1/resThree);
    }

    printf("Somme des résistances : %.2f Ohms\n", resTotal);
    return 0;
}
