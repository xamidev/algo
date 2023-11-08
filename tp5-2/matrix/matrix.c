#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

void matrix(void) {

    srand(time(NULL));
    while (true) {
        for(int i=0;i<80;i++) {
            printf("\x1b[32m%c\x1b[0m",rand()%126+32);
            usleep(500);
        }
        printf("\n");
    }
}
