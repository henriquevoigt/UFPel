#include <stdio.h>
#include <string.h>

int main () {

    char string[100];
    int tamanho = 0;

    printf("Informe um nome completo!\n");
    scanf("%[^\n]s", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        tamanho++;
    }

    printf("Tamanho da string: %d\n", tamanho);

    return 0;

}