#include "menu.h"
#include <stdlib.h>
#include <stdio.h>

int menu() {
    printf("************\nMenu du TP\n************\n");
    printf("1 - afficheOrdonne()\n");
    printf("2 - moyenneFloat()\n");
    printf("3 - testFigure()\n");
    printf("4 - afficheAttributsCercle()\n");
    printf("5 - afficheAttributsQuadrilatere()\n");
    printf("6 - fib()\n");
    printf("7 - afficheCaractere()\n");
    printf("8 - afficheSapin()\n");
    printf("9 - affichePyramide()\n");
    printf("10 - afficheRectangle()\n");
    printf("11 - Quitter\n");
    printf("************\n");

    int choice;
    scanf("%d", &choice);

    return choice;
}

