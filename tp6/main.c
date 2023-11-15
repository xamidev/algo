#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "menu.h"

int main(int argc, char** argv) {
        
    switch (menu()) {
        case 1:
            afficheOrdonne();
            break;
        case 2:
            moyenneFloat();
            break;
        case 3:
            testFigure();
            break;
        case 4:
            afficheAttributsCercle();
            break;
        case 5:
            afficheAttributsQuadrilatere();
            break;
        case 6:
            fib();
            break;
        case 7:
            afficheCaractere();
            break;
        case 8:
            afficheSapin();
            break;
        case 9:
            affichePyramide();
            break;
        case 10:
            afficheRectangle();
            break;
        case 11:
            printf("Aurevoir\n");
            exit(0);
        default:
            printf("Erreur.\n");
            exit(1);
    }

    return 0;
}
