#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50

void initTableau2D(int tab[][3], int lignes) {
    srand(time(NULL)); 
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < 3; j++) {
            tab[i][j] = rand() % (MAX+1);
        }
    }
}

void afficheTableau2D(int tab[][3], int lignes) {

    for (int i=0; i<lignes;i++) {
        printf("Ligne %d\n", i);

        for (int j=0; j<3; j++) {
            printf("[%d] ", tab[i][j]);
        } printf("\n");
    }
}

int maxTableau2D(int tab[][3], int lignes) {
    int max = tab[0][0];

    for (int i=0; i<lignes;i++) {
        for (int j=0; j<3; j++) {
            if (tab[i][j] > max) {
                max = tab[i][j];
            }
        }
    }

    return max;
}

int minTableau2D(int tab[][3], int lignes) {
    int min = tab[0][0];

    for (int i=0; i<lignes; i++) {
        for (int j=0; j<3; j++) {
            if (tab[i][j] < min) {
                min = tab[i][j];
            }
        }
    }
    return min;
}
