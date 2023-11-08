#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int photocopies;
    float prix, prixUnitaire;

    printf("Nombre de photocopies? ");
    scanf("%d", &photocopies);
    
    if (photocopies <=10) {
        prixUnitaire = 0.10;
        prix = prixUnitaire*photocopies;
    }
    else if (photocopies > 10) {
        prixUnitaire = 0.09;
        prix=prixUnitaire*(photocopies-10)+10*0.10;
        if (photocopies > 30) {
            prixUnitaire = 0.08;
            prix=10*0.10+20*0.09+prixUnitaire*(photocopies-30);
        }
    }

    printf("Prix total: %.2f\n", prix);
    
    return 0;
}
