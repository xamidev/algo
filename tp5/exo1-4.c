#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);
    
    nombre--;

    while (nombre > 0) {
        printf("%d\n", nombre);
        nombre--;
    }
    return 0;
}
