#ifndef tableau_h
#define tableau_h

#define LINES 5
#define COLS 11

void initLabyrinthe(wchar_t labyrinthe[LINES][COLS]);
void trouerLabyrinthe(wchar_t labyrinthe[LINES][COLS]);
void afficheLabyrinthe(wchar_t labyrinthe[LINES][COLS]);
void spawnJoueur(wchar_t labyrinthe[LINES][COLS]);

//extern wchar_t niveau_1[LINES][COLS];

#endif
