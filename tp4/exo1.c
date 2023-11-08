#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;
    
    printf("Entrer a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && b>c) {
        printf("a > b > c\n");
    }
    else if (a>c &&c>b) {
        printf("a > c > b\n");
    }
    else if (b>a &&a>c) {
        printf("b > a > c\n");
    }
    else if (b>c &&c>a) {
        printf("b > c > a\n");
    }
    else if (c>a&&a>b) {
        printf("c > a > b\n");
    }
    else if (c>b&&b>a) {
        printf("c > b > a\n");
    }
}
