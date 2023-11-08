#include <stdlib.h>
#include <stdio.h>

int main() {
    
    printf(" ** Exercice 3 - Calcul du prix des tomates **\n");
    double prix, tva, qte, prixKilo, prixHt, prixTtc, totalTva;
    printf("Prix HT d'un kilo de tomates (€): ");
    scanf("%lf", &prix);
    printf("Taux de TVA (\%): ");
    scanf("%lf", &tva);
    printf("Quantité de tomates (kg): ");
    scanf("%lf", &qte);

    prixKilo = (1+(tva/100))*prix;
    prixHt = prix*qte;
    prixTtc = prixKilo*qte;
    totalTva = prixTtc-prixHt;

    printf("\n\nPrix du kilo de tomates TTC: %.2f€\nPrix HT de la quantité de tomates: %.2f€\nPrix TTC de la quantité de tomates: %.2f€\nValeur de la TVA totale: %.2f€\n", prixKilo, prixHt, prixTtc, totalTva);

    return 0;
}
