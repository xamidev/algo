#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <wchar.h>

#define LINES 10
#define COLS 20
#define BORDURE 35
#define VIDE 32
#define PLAYER 79

void initLabyrinthe(wchar_t labyrinthe[LINES][COLS]) {
    for (int i=0; i<LINES; i++) {
        for (int j=0; j<COLS; j++) {
            labyrinthe[i][j] = VIDE;
        }
    }
}

void afficheLabyrinthe(wchar_t labyrinthe[LINES][COLS]) {
    for (int i=0; i<LINES; i++) {
        for (int j=0; j<COLS; j++) {
            printf("%lc", labyrinthe[i][j]);
        }
        printf("\n");
    }
}


void trouerLabyrinthe(wchar_t labyrinthe[LINES][COLS]) {
    srand(time(NULL));
    for (int i=0; i<LINES; i++) {

        if (i == 0 || i == LINES-1) {
            for (int j=0; j<COLS; j++) {
                labyrinthe[i][j] = BORDURE;
            }
            continue;
        }

        else {
            int random = rand() % 100;
            if (random < 10) {
                labyrinthe[i][0] = BORDURE;
            }

        for (int j=0; j<COLS; j++) {
            
            if (j == 0 || j == COLS-1) {
                labyrinthe[i][j] = BORDURE;
                continue;
            }

            else {
                int random = rand() % 100;
                if (random < 10) {
                    labyrinthe[i][j] = BORDURE;
                }
            }
        }
    }
}
}

void spawnJoueur(wchar_t labyrinthe[LINES][COLS]) {
    srand(time(NULL));

    int randomLine = rand() % LINES;
    int randomCol = rand() % COLS;

    printf("%d, %d\n", randomLine, randomCol);
    labyrinthe[randomLine][randomCol] = PLAYER;
}
