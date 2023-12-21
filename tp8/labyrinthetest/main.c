#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"
#include <locale.h>

int main(int argc, char** argv) {

    wchar_t niveau_1[5][11] = {
    L"\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592",
    L"\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592",
    L"\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592",
    L"\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592",
    L"\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592\u2592"
    };
    
    setlocale(LC_ALL, "");
    //initLabyrinthe(niveau_1);
    //trouerLabyrinthe(niveau_1);
    //spawnJoueur(niveau_1);
    afficheLabyrinthe(niveau_1);
    
    return 0;
}
