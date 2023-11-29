#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 50

// Exercice 1

void initTableau(int tableau[], int size) {

    srand(time(NULL));

    for (int i=0; i<size; i++) {
        int valeur = rand() % (MAX+1);
        tableau[i] = valeur;
    }
}

int sommeTableau(int tableau[], int size) {
    
    int sum = 0;

    for (int i=0; i<size; i++) {
        sum+=tableau[i];
    }

    return sum;
}

int moyTableau(int tableau[], int size) {
    int sum = sommeTableau(tableau, size);
    return sum/size;
}

void afficheTableau(int tableau[], int size) {
    for (int i=0; i<size; i++) {
        printf("[%d]\t", tableau[i]);
    } printf("\n");
}

int maxTableau(int tableau[], int size) {
    int max = tableau[0];

    for (int i=0; i<size; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

int minTableau(int tableau[], int size) {
    int min = tableau[0];

    for (int i=0; i<size; i++) {
        if(tableau[i] < min) {
            min = tableau[i];
        }
    }
    return min;
}

// Exercice 2

void triTableau(int tableau[], int size) {
    // Tri à bulles
    
    int swap;
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (tableau[j]>tableau[j+1]) {
                swap = tableau[j];
                tableau[j] = tableau[j+1];
                tableau[j+1] = swap;
            }
        }
    }
}

void permuteTableau(int tableau[], int size) {
    
    int tableau2[size];

    for (int i=size-1, j=0; i>=0; i--, j++) {
        tableau2[j] = tableau[i];
    }
    
    afficheTableau(tableau2, size);
    
}
