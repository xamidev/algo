#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int nombre;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);
    
    nombre++;

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", nombre);
        nombre++;
    }
    return 0;
}
