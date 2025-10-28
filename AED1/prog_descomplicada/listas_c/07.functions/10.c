#include <stdio.h>

int CalculaMaior ( int a, int b );

int main () {

    int a, b, maior;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    maior = CalculaMaior ( a, b );

    printf("O maior eh %d\n", maior);

    return 0;

}

int CalculaMaior ( int a, int b ) {
    
    int maior;

    if ( a > b ) {
        maior = a;
    } else {
        maior = b;
    }

    return maior;
    
}