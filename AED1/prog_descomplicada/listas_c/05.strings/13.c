#include <stdio.h>

int main () {

    char string[100];
    int controle = 0;

    printf("Informe uma frase\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        if ( string[i] == ' ' ) {
            controle++;
        }
    }

    printf("Total de espacos em branco: %d\n", controle);

    return 0;

}