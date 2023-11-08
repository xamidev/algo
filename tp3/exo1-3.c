#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char x;
    printf("Entrer une lettre: ");
    scanf("%c", &x);

    if (! isalpha(x)) {
        printf("Erreur\n");
        exit(1);
    }

    if (islower(x)) {
        printf("Minuscule\n");}
    else if (! islower(x)) {
        printf("Majuscule\n");}
    return 0;
}
