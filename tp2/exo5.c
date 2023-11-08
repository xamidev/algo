#include <stdlib.h>
#include <stdio.h>

int main() {

    printf(" ** Exercice 5 - Conversion heures, minutes, secondes **\n");

    int input, hours, mins, secs, remainingSecs;

    printf("Entrer un nombre en secondes: ");
    scanf("%d", &input);
    
    hours = input/3600;
    remainingSecs = input - (hours*3600);
    mins = remainingSecs/60;
    remainingSecs = remainingSecs - (mins*60);
    secs = remainingSecs;

    printf("%d heures %d minutes %d secondes\n", hours, mins, secs);
    return 0;
}
