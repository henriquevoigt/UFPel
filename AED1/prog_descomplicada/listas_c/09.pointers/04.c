#include <stdio.h>

void FuncTroca ( int *a, int *b );

int main () {

    int a, b;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    FuncTroca ( &a, &b );

    printf("A: %d | B: %d\n", a, b);

    return 0;

}

void FuncTroca ( int *a, int *b ) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return;
}