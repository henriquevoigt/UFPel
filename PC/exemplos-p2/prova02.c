#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int prioridade;
    int custo;
    struct celula *prox;
} Celula;

typedef struct cabeca{
    int tamanho;
    struct celula *start;
} Cabeca;

Cabeca *cria_cabeca();
Celula *cria_celula(int prioridade, int custo);
void ordenar_lista(Cabeca *lista, int prioridade, int custo);
void salvar_arquivo(Cabeca *lista);

int main(){

    FILE *file = fopen("entradas.txt", "r");

    if (file == NULL){
        printf("Falha ao carregar arquivo 'entradas.txt'\n");
    }

    Cabeca *lista = cria_cabeca();

    int prioridade, custo;

    while(fscanf(file,"%d %d\n", &prioridade, &custo) == 2){
        ordenar_lista(lista, prioridade, custo);
    }

    fclose(file);

    salvar_arquivo(lista);

    printf("Arquivo finalizado, salvo em 'saida.txt'\n");

    return 0;
}

Cabeca *cria_cabeca(){
    Cabeca *lista = (Cabeca *)malloc(sizeof(Cabeca));
    lista->start = NULL;
    lista->tamanho = 0;

    return lista;
}

Celula *cria_celula(int prioridade, int custo){
    Celula *nova_celula = (Celula *)malloc(sizeof(Celula));
    nova_celula->custo = custo;
    nova_celula->prioridade = prioridade;
    nova_celula->prox = NULL;

    return nova_celula;
}

void ordenar_lista(Cabeca *lista, int prioridade, int custo){
    Celula *nova_celula = cria_celula(prioridade, custo);
    Celula *atual = lista->start;
    Celula *anterior = NULL;

    while (atual != NULL){
        if (atual->prioridade < nova_celula->prioridade){
            anterior = atual;
            atual = atual->prox;
        }
        else if(atual->prioridade == nova_celula->prioridade && atual->custo < nova_celula->custo){
            anterior = atual;
            atual = atual->prox;
        }
        else{
            break;
        }
    }

    if (anterior == NULL){
        nova_celula->prox = lista->start;
        lista->start = nova_celula;
    }
    else{
        anterior->prox = nova_celula;
        nova_celula->prox = atual;
    }
    lista->tamanho++;
    
    return;

}

void salvar_arquivo(Cabeca *lista){
    FILE *file = fopen("saida.txt", "w");

    if (file == NULL){
        printf("Falha ao criar o arquivo 'saida.txt'\n");
    }

    Celula *aux = lista->start;

    while (aux != NULL){
        fprintf(file,"%d %d\n", aux->prioridade, aux->custo);
        aux = aux->prox;
    }
    fprintf(file,"\nTotal de entradas: %d\n", lista->tamanho);

    fclose(file);

    return;
}