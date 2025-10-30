#include <stdio.h>

 int main () {

    int a, b;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    if ( &a > &b ) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }

    printf("\nA: %p, B: %p\n", &a, &b);

    return 0;

 }