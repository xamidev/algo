#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    for (int i=0; i<10; i++) {
        int head = srand(45);
    if (head) {
        printf("Head\n");
    }
    else if (!head) {
        printf("Tails\n");
    }
    else{
        printf("Error\n");
        exit(1);
    }

    return 0;
}
