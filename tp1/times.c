#include <stdio.h>
#include <stdlib.h>

int main() {
    long double a;
    long double b;
    long double result;

    printf("a: ");
    scanf("%Lf", &a);
    printf("b: ");
    scanf("%Lf", &b);

    result = a * b;
    printf("result: %Lf\n", result);
    return 0;
}
