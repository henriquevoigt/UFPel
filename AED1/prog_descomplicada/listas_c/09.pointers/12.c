#include <stdio.h>

int Ordena ( int *a, int *b, int *c );

int main () {

    int a, b, c, flag;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);
    printf("Informe C: ");
    scanf("%d", &c);

    flag = Ordena ( &a, &b, &c );

    if ( flag == 1 ) {
        printf("Os tres valores sao iguais!\n");
    }

    printf("A: %d, B: %d, C: %d\n", a, b, c );

    return 0;

}

int Ordena ( int *a, int *b, int *c ) {

    int temp, flag;

    if ( *a == *b && *b == *c ) {
        flag = 1;
    } else {
        flag = 0;
    }

    if ( *a > *b ) {
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if ( *a > *c ) {
        temp = *c;
        *c = *a;
        *a = temp;
    }
    if ( *b > *c ) {
        temp = *c;
        *c = *b;
        *b = temp;
    }

    return flag;   

}