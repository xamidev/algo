#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

void matrix(void) {

    int vert[] = {2,92,102};

    srand(time(NULL));
    while (true) {
        for(int i=0;i<80;i++) {
            printf("\x1b[%dm%c\x1b[0m",vert[rand()%2+0],rand()%126+32);
            usleep(500);
        }
        printf("\n");
    }
}
