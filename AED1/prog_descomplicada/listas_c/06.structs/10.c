#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char endereco[100];
    int telefone;
} Cadastro;

int main () {

    Cadastro cadastro[5], aux;

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe o nome: ");
        scanf("%[^\n]", &cadastro[i].nome);
        getchar();
        printf("Informe o endereco: ");
        scanf("%[^\n]", &cadastro[i].endereco);
        getchar();
        printf("Informe o telefone: ");
        scanf("%d", &cadastro[i].telefone);
        getchar();
    }

    for ( int j = 0; j < 5; j++ ) {

        for ( int i = 0; i < 4; i++ ) {
            if ( strcmp(cadastro[i].nome, cadastro[i+1].nome) > 0 ) {
                aux = cadastro[i];
                cadastro[i] = cadastro[i+1];
                cadastro[i+1] = aux;
            }
        }
    }

    for ( int i = 0; i < 5; i++ ) {
        printf("Nome: %s\n", cadastro[i].nome);
    }

    return 0;

}