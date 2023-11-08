#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, swap;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    swap = a;
    a = b;
    b = swap;
    printf("a : %d, b : %d\n", a, b);
}
