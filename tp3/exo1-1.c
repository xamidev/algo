#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Entrer a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c) {
        printf("a\n");
    }
    else if (b>a && b>c) {
        printf("b\n");
    }
    else {
        printf("c\n");
    }

    return 0;
}
