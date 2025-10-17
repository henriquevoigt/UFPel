#include <stdio.h>

int main () {

    char nome[50], controle = 0;

    printf("Informe um nome: ");
    scanf("%[^\n]s", nome);

    for ( int i = 0; nome[i] != '\0'; i++ ) {
        if ( nome[i] != ' ' ){
            controle++;
        }
    }

    printf("Tamanho do nome: %d ", controle);
    
    return 0;
    
}