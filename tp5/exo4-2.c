#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre, i, sum = 0;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);
    
    for (i=1;i<=nombre;i++) {
        sum+=i;
    }

    printf("Somme = %d\n", sum);
    return 0;
}
