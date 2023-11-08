#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);

    for (int i=1; i<11; i++) {
        int product = nombre*i;
        printf("%dx%d = %d\n", nombre, i, product);
    }
    return 0;
}
