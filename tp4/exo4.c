#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int age;
    char sexeChoice;
    bool sexe; // true = homme; false = femme
    
    printf("Age: ");
    scanf("%d", &age);
    printf("Sexe (h/f): ");
    scanf(" %c", &sexeChoice);

    if (sexeChoice == 'h') {
        sexe = true;
    }
    else if (sexeChoice == 'f') {
        sexe = false;
    }
    else {
        printf("Erreur: il n'y a que deux sexes (homme/femme)\n");
        exit(1);
    }

    if (sexe) {
        if (age > 20) {
            printf("Imposable\n");
        }
        else {
            printf("Non imposable\n");
        }
    }
    else if (!sexe) {
        if (18 <= age && age < 35) {
            printf("Imposable\n");
        }
        else {
            printf("Non imposable\n");
        }
    }
    return 0;
}
