#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Entrez la valeur 5:\n");
    int valeur = 0;
    
    while (valeur != 5) {
        scanf("%d", &valeur);
        if (valeur != 5) {
            printf("Mauvaise valeur.\n");
        }
    }

    printf("Bien joué!\n");
    return 0;
}
