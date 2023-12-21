#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50

int main(int argc, char** argv) {
    
    if (argc != 2) {
        printf("Usage: %s <taille>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int taille = atol(argv[1]);
    
    int matrice[taille][taille];

    
    // initialisation de la matrice unitaire
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            if (i == j) {
                matrice[i][j] = 1;
            } else {
                matrice[i][j] = 0;
            }
        }
    }

    // affichage
    printf("\nMatrice unitaire\n");
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            printf("[%d] ", matrice[i][j]);
        }
        printf("\n");
    }
    
    // initialisation de la matrice aléatoire
    
    int matriceRandom[taille][taille];

    srand(time(NULL));
     
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            matriceRandom[i][j] = rand() % MAX;
        }
    }
    
    printf("\nMatrice aléatoire\n");
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            printf("[%d] ", matriceRandom[i][j]);
        }
        printf("\n");
    }

    // multiplication de la matrice aléatoire par la constante
    int constante = 2;
    int matriceMultipliee[taille][taille];

    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            matriceMultipliee[i][j] = matriceRandom[i][j]*constante;
        }
    }

    printf("\nMatrice multipliée par %d\n", constante);
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            printf("[%d] ", matriceMultipliee[i][j]);
        }
        printf("\n");
    }

    // addition de la matrice aléatoire avec la matrice multipliée
     
    int matriceAdditionnee[taille][taille];

    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            matriceAdditionnee[i][j] = matriceRandom[i][j] + matriceMultipliee[i][j];
        }
    }

    printf("\nMatrice additionnée\n");
    for (int i=0; i<taille; i++) {
        for (int j=0; j<taille; j++) {
            printf("[%d] ", matriceAdditionnee[i][j]);
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
