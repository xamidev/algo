#include <stdio.h>
#include <stdlib.h>

int main () {

    float no, ne, avg;

    printf("Note d'oral: ");
    scanf("%f", &no);
    printf("Note d'écrit: ");
    scanf("%f", &ne);

    avg = (no*1 + ne*2)/3;

    if (avg >= 10) {
        printf("Admis! | moyenne: %f\n", avg);}
    else if (avg < 10) {
        printf("Redouble! | moyenne: %.2f\n", avg);
    }
    return 0;
}
