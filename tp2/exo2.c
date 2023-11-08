#include <stdlib.h>
#include <stdio.h>

int main() {
    long double a, b, avg1;
    int c, d, avg2;

    printf("Entrer deux réels: \n");
    scanf("%Lf%Lf", &a, &b);
    
    printf("Entrer deux entiers: \n");
    scanf("%d%d", &c, &d);
    
    avg1 = (a+b)/2;
    avg2 = (c+d)/2;
    
    printf("Moyenne 1: %Lf\nMoyenne 2: %d\n", avg1, avg2);
    return 0;
}
