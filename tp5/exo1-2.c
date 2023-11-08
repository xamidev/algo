#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre;
    printf("Entrez un nombre entre 0 et 20:\n");
    do {
        
        scanf("%d", &nombre);

        if (nombre < 0) {
            printf("Plus grand!\n");
        }
        else if (nombre > 20) {
            printf("Plus petit!\n");
        }
        else if (nombre >= 0 || nombre <= 20) {
            printf("Bien joué!\n");
            exit(0);
        }
        else {
            printf("Erreur.\n");
            exit(1);
        }
    } while (nombre < 0 || nombre > 20);
    return 0;
}
