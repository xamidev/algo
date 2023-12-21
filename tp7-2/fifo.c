#include "fifo.h"
#include <stdio.h>

void affiche(int t[], size_t size, int wr, int rd, int n) {
    for (int i=0; i<size; i++) {
        printf("[%d] ", t[i]);
    }
    printf("n=%d wr=%d rd=%d", n, wr, rd);
    printf("\n");
}

int compteElements(int t[], int size, int wr, int rd) {
    int cpt = 0;

    for (int i=0; i<size; i++) {
        if (t[i] != -1) {
            cpt++;
        }
    }

    return cpt;
}

int ajoute(int t[], size_t size, int wr, int rd, int val) {
    for (int i=0; i<size; i++) {
        if (t[i] == -1) {
            t[i] = val;
            wr = val;
            return wr;
        }
    }

    return -1;
}

int retire(int t[], size_t size, int wr, int rd, int ret[1]) {
    for (int i=0; i<size; i++) {
        if (t[i] != -1) {
            ret[1] = t[i];
            t[i] = -1;
            
            // On décale les éléments
            for (int j=i; j<size-1; j++) {
                t[j] = t[j+1];
            }
            return ret[1];
        }
    }
    return -1;
}
