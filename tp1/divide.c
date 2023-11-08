#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int result;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    result = a / b;
    printf("result: %d\n", result);
    return 0;
}
