#ifndef tableau_h
#define tableau_h

#define LINES 10
#define COLS 20

void initLabyrinthe(char labyrinthe[LINES][COLS]);
void trouerLabyrinthe(char labyrinthe[LINES][COLS]);
void afficheLabyrinthe(char labyrinthe[LINES][COLS]);
void spawnJoueur(char labyrinthe[LINES][COLS]);

#endif
