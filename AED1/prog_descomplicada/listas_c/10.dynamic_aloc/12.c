#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int estoque;
    float preco;
} Produto;

int main () {

    int quantidade, maior_estoque = 0, maior_preco = 0;
    Produto *produtos = NULL;
    

    printf("Informe a quantidade de produtos: ");
    scanf("%d", &quantidade);

    produtos = (Produto *)malloc(quantidade * sizeof( Produto ));
    if ( !produtos ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < quantidade; i++ ) {
        printf("Informe o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        getchar();
        printf("Informe o nome do produto: ");
        scanf("%[^\n]", &produtos[i].nome);
        getchar();
        printf("Informe a quantidade em estoque: ");
        scanf("%d", &produtos[i].estoque);
        getchar();
        printf("Informe o preco: ");
        scanf("%f", &produtos[i].preco);
        getchar();

        if ( produtos[i].preco > produtos[maior_preco].preco ) {
            maior_preco = i;
        }

        if ( produtos[i].estoque > produtos[maior_estoque].estoque ) {
            maior_estoque = i;
        }

    }

    printf("Produto com maior preco: %s | Valor: %.2f\n", produtos[maior_preco].nome, produtos[maior_preco].preco);
    printf("Produto com maior estoque: %s | Qtde: %d\n", produtos[maior_estoque].nome, produtos[maior_estoque].estoque);

    free(produtos);

    return 0;

}