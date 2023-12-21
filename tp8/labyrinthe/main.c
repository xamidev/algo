#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"
#include <locale.h>

int main(int argc, char** argv) {

    char labyrinthe[LINES][COLS];
    
    setlocale(LC_ALL, "");
    initLabyrinthe(labyrinthe);
    trouerLabyrinthe(labyrinthe);
    spawnJoueur(labyrinthe);
    afficheLabyrinthe(labyrinthe);
    
    return 0;
}
