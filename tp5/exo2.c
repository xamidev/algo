#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int entiers[6];
    int seuil;
    printf("Entrez six entiers:\n");

    for (int i = 0; i<6; i++) {
        scanf("%d", &entiers[i]);
    }
    printf("Seuil?\n");
    scanf("%d", &seuil);

    int entiersSup = 0;

    for (int i = 0; i < sizeof(entiers)/sizeof(entiers[0]); i++) {
        if (entiers[i] > seuil) {
            printf("%d est supérieur au seuil\n", entiers[i]);
            entiersSup++;
        }
    }

    printf("Il y a %d entiers supérieurs\n", entiersSup);
    
    return 0;
}
