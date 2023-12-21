#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define LINES 10
#define COLS 20
#define BORDURE 35
#define VIDE 32
#define PLAYER 79

void initLabyrinthe(char labyrinthe[LINES][COLS]) {
    for (int i=0; i<LINES; i++) {
        for (int j=0; j<COLS; j++) {
            labyrinthe[i][j] = VIDE;
        }
    }
}

void afficheLabyrinthe(char labyrinthe[LINES][COLS]) {
    for (int i=0; i<LINES; i++) {
        for (int j=0; j<COLS; j++) {
            if (labyrinthe[i][j] == PLAYER) {
                printf("\x1b[33m\x1b[1m%c\x1b[0m", labyrinthe[i][j]); 
            }
            else {
                printf("%c", labyrinthe[i][j]);
            }
        }
        printf("\n");
    }
}


void trouerLabyrinthe(char labyrinthe[LINES][COLS]) {
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

void spawnJoueur(char labyrinthe[LINES][COLS]) {
    srand(time(NULL));

    int randomLine = 1 + (rand() % LINES-1);
    int randomCol = 1 + (rand() % COLS-1);

    printf("%d, %d\n", randomLine, randomCol);
    labyrinthe[randomLine][randomCol] = PLAYER;
}
