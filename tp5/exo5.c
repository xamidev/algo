#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("*\n");

    for (int i=0; i<20; i++) {
        if (i%2 != 0) {
            printf("%.*s\n", i+2, "***************************");
        }
    }
    printf("||\n");
    printf("||\n");
    return 0;
}
