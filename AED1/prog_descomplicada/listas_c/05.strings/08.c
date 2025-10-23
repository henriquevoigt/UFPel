#include <stdio.h>

int main () {

    int controle = 0;
    char string[50];

    printf("Informe uma string\n");
    scanf("%[^\n]", string);

    for ( int i = 0; string[i] != '\0'; i++ ) {
        if ( string[i] == '1' ) {
            controle++;
        }
    }

    printf("Total de '1' na string: %d\n", controle);

    return 0; 
    
}