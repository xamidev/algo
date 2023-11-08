#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char car;
    int essais;
    
    while(1) {
        printf("Entrez un caractère:\n");
        scanf(" %c", &car);
        
        int voyelle = (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u' || car == 'A' || car == 'E' || car == 'I' || car == 'O' || car == 'U');

        if (!voyelle) {
            essais++;
        }
        else if (voyelle) {
            essais++;
            printf("Voyelle! Essais: %d\n", essais);
            exit(0);
        }
        else {
            printf("Erreur\n");
            exit(1);
        }
    }
    return 0;
}
