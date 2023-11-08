#include "chrono.h"
#include <stdlib.h>
#include <stdio.h>

void chronographe(void) {
    printf("A:   \n\nB:   \n\n\x1b[32mET:\x1b[0m  \n\n\x1b[33mOU:\x1b[0m  \n\n\x1b[34mXOR:\x1b[0m ");

    int a = 0; int b = 0;

    for (int i=1; i<21; i++) {
        
        // Variation des a, b
        a = i % 2 == 0 ? 1 : 0;
        b = i % 4 == 0 || i == 3 || i == 7 || i == 11 || i == 15 || i == 19 ? 1 : 0;
        // Affichage des a, b
        printf("\x1b[8A%s", a == 0 ? "_" : "*");
        printf("\x1b[2B\x1b[1D%s", b == 0 ? "_" : "*");

        // Affichage des portes logiques
        // ET
        printf("\x1b[2B\x1b[1D%s", a == 1 && b == 1 ? "*" : "_");
        // OU
        printf("\x1b[2B\x1b[1D%s", a == 1 || b == 1 ? "*" : "_");
        // XOR
        printf("\x1b[2B\x1b[1D%s", a == 1 ^ b == 1 ? "*" : "_");
    }

    printf("\n");
}
