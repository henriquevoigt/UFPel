#include <stdio.h>

int main () {

    char nome[50];

    printf("Informe um nome: ");
    scanf("%[^\n]s", nome);

    printf("\nPrimeiras 4 letras: ");

    for ( int i = 0; i < 4; i++ ) {
        printf(" %c", nome[i]);
    }

    return 0;
    
}