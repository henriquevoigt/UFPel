#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[50];
} Cadastro;

int main () {
    
    Cadastro cadastro;

    printf("Informe seu nome: ");
    scanf("%[^\n]", &cadastro.nome);
    getchar();
    printf("Informe sua idade: ");
    scanf("%d", &cadastro.idade);
    getchar();
    printf("Informe seu endereco: ");
    scanf("%[^\n]", &cadastro.endereco);


    printf("\nNome: %s\nIdade: %d\nEndereco: %s\n", cadastro.nome, cadastro.idade, cadastro.endereco);

    return 0;

}