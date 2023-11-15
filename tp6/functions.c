#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415

void moyenneFloat() {
    float a, b, c;
    printf("Entrez trois réels:");
    scanf("%f%f%f", &a, &b, &c);
    printf("Moyenne:%f\n", (a+b+c)/3);
}

void afficheOrdonne() {
    int a, b, c;
    printf("Entrez trois entiers:");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && b>c) {
        printf("%d>%d>%d\n", a, b, c);
    }
    else if (a>c && c>b) {
        printf("%d>%d>%d\n", a, c, b);
    }
    else if (b>a && a>c) {
        printf("%d>%d>%d\n", b, a, c);
    }
    else if (b>c && c>a) {
        printf("%d>%d>%d\n", b, c, a);
    }
    else if (c>a && a>b) {
        printf("%d>%d>%d\n", c, a, b);
    }
    else if (c>b && b>a) {
        printf("%d>%d>%d\n", a, c, b);
    }
    else {
        printf("error\n");
    }
}

void testFigure() {
    float longueur, largeur;
    printf("Longueur:\n");
    scanf("%f", &longueur);
    printf("Largeur:\n");
    scanf("%f", &largeur);

    if (longueur == largeur) {
        printf("C'est un carré.\n");
    }
    else {
        printf("C'est un rectangle.\n");
    }
}

void afficheAttributsCercle() {
    float rayon;
    printf("Rayon:");
    scanf("%f", &rayon);
    
    char choix;
    printf("Souhaitez-vous obtenir le périmètre du cercle? (o/n)");
    scanf(" %c", &choix);
    if (choix == 79 || choix == 111) {
        perimetreCercle(rayon);
        
        printf("Souhaitez-vous en obtenir l'aire? (o/n)");
        scanf(" %c", &choix);
        if (choix == 79 || choix == 111) {
            aireCercle(rayon);    
        }
        else if (choix == 110 || choix == 78) {
            printf("Dommage.\n");
        }
        else {
            printf("Mauvais choix.\n");
            afficheAttributsCercle();
        }
    }
    else if (choix == 110 || choix == 78) {
        printf("Dommage.\n");
    }
    else {
        printf("Mauvais choix.\n");
        afficheAttributsCercle();
    }
}

void perimetreCercle(float rayon) {
    float perimetre = 2*PI*rayon;
    printf("Périmètre du cercle: %.2f\n", perimetre);
}

void aireCercle(float rayon) {
    float aire = PI*pow(rayon,2);
    printf("Aire du cercle: %.2f\n", aire);
}

void afficheAttributsQuadrilatere() {
    float hauteur, largeur;
    printf("Hauteur:");
    scanf("%f", &hauteur);
    printf("Largeur:");
    scanf("%f", &largeur);
    
    char choix;
    printf("Souhaitez-vous obtenir le périmètre du quadrilatère? (o/n)");
    scanf(" %c", &choix);
    if (choix == 79 || choix == 111) {
        perimetreQuadrilatere(hauteur, largeur);
        
        printf("Souhaitez-vous en obtenir l'aire? (o/n)");
        scanf(" %c", &choix);
        if (choix == 79 || choix == 111) {
            aireQuadrilatere(hauteur, largeur);   
        }
        else if (choix == 110 || choix == 78) {
            printf("Dommage.\n");
        }
        else {
            printf("Mauvais choix.\n");
            afficheAttributsQuadrilatere();
        }
    }
    else if (choix == 110 || choix == 78) {
        printf("Dommage.\n");
    }
    else {
        printf("Mauvais choix.\n");
        afficheAttributsQuadrilatere();
    }
}

void perimetreQuadrilatere(float longueur, float largeur) {
    printf("Périmètre du quadrilatère: %.2f\n", 2*(longueur+largeur));
}

void aireQuadrilatere(float longueur, float largeur) {
    printf("Aire du quadrilatère: %.2f\n", longueur*largeur);
}

void fib() {

    int termes;
    unsigned long int n, n1=0, n2=1;
    printf("Nombre de termes? ");
    scanf("%d", &termes);

    for (int i=0; i<termes; i++) {
        n = n1+n2;
        n2 = n1;
        n1 = n;
    }
    printf("%lu\n", n);
}

void caracteres(int n, char c) {
    for (int i=0; i<n; i++) {
        printf("%c", c);
    }
    printf("\n");
}

void afficheCaractere() {
    int n;
    char caractere;
    printf("Caractère à afficher? ");
    scanf(" %c", &caractere);
    printf("Nombre de caractères à afficher? ");
    scanf("%d", &n);
    caracteres(n, caractere);
}

void afficheSapin() {
    printf("\n*\n");

    for (int i=0; i<20; i++) {
        if (i%2 != 0) {
            printf("%.*s\n", i+2, "***************************");
        }
    }
    printf("||\n");
    printf("||\n");
}

void pyramide(int base) {
    for (int i = 0; i<base; i++) {
        printf("%.*s\n",i+1,"**********************************************************");
    }
}

void affichePyramide() {
    int base;
    printf("Base de la pyramide? ");
    scanf("%d", &base);
    pyramide(base);
}

void afficheRectangle() {
    int longueur, largeur;
    printf("Longueur? ");
    scanf("%d", &longueur);
    printf("Largeur ? ");
    scanf("%d", &largeur);
    rectangle(longueur, largeur);
}

void rectangle(int longueur, int largeur) {
    for (int i = 0; i<largeur; i++) {
        printf("%.*s\n", longueur, "*****************************************************");
    }
}
