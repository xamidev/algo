#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include "fifo.h"

#define REFRESH n=compteElements(t, SIZE, wr, rd)

int main(int argc, char** argv) {
   
    signed int t[SIZE] = {-1, -1, -1, -1, -1};
    

    // Hardcoded defaults
    int n, ret[1], wr = 0, rd = 0, val=5;

    REFRESH;
    affiche(t, SIZE, wr, rd, n);
    ajoute(t, SIZE, wr, rd, val);

    REFRESH;
    affiche(t, SIZE, wr, rd, n);
    ajoute(t, SIZE, wr, rd, 3);
    
    REFRESH;
    affiche(t, SIZE, wr, rd, n);
    retire(t, SIZE, wr, rd, ret);

    REFRESH;
    affiche(t, SIZE, wr, rd, n);
    return EXIT_SUCCESS;
}
