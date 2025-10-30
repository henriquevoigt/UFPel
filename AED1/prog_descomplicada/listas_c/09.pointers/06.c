#include <stdio.h>

int FuncTroca ( int *a, int *b );

int main () {

    int a, b, soma;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    soma = FuncTroca ( &a, &b );

    printf("A: %d | B: %d | Soma: %d\n", a, b, soma);

    return 0;

}

int FuncTroca ( int *a, int *b ) {

    int temp;

    *a = *a * *a;
    *b = *b * *b;
    temp = *a + *b;

    return temp;
}