#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("n: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Pair\n");
    }
    else {
        printf("Impair\n");
    }
    return 0;
}
