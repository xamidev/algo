#include <stdio.h>
#include <stdlib.h>
#include "tableaux2d.h"

int main(int argc, char** argv) {
    
    int tab[5][3];

    initTableau2D(tab,5);
    afficheTableau2D(tab,5);
    
    printf("Maximum: %d\nMinimum: %d\n", maxTableau2D(tab,5), minTableau2D(tab,5));

    return EXIT_SUCCESS;
}
