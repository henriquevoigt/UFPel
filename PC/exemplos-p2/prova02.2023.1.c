#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int x, y;
    struct celula *prox;
} Celula;

typedef struct cabeca{
    int tamanho;
    struct celula *start;
} Cabeca;

Cabeca *cria_cabeca();
Celula *cria_celula(int x, int y);
void insere_lista(Cabeca *lista, int x, int y);
int quadrante(int x, int y);
void salvar_arquivo(Cabeca *Q1, Cabeca *Q2, Cabeca *Q3, Cabeca *Q4);

int main() {
    FILE *file = fopen("entradasquad.txt", "r");

    if (file == NULL){
        printf("Falha ao carregar arquivo 'entradas.txt'\n");
    }

    Cabeca *Q1 = cria_cabeca();
    Cabeca *Q2 = cria_cabeca();
    Cabeca *Q3 = cria_cabeca();
    Cabeca *Q4 = cria_cabeca();

    int x, y;
    while(fscanf(file,"%d %d", &x, &y) == 2){
        int q = quadrante(x, y);

        if (q == 1) insere_lista(Q1, x, y);
        else if (q == 2) insere_lista(Q2, x, y);
        else if (q == 3) insere_lista(Q3, x, y);
        else if (q == 4) insere_lista(Q4, x, y);

    }

    fclose(file);

    salvar_arquivo(Q1, Q2, Q3, Q4);

    printf("Arquivo 'saida.txt' criado com sucesso!\n");

    return 0;
}

Cabeca *cria_cabeca(){
    Cabeca *lista = (Cabeca *)malloc(sizeof(Cabeca));
    lista->start = NULL;
    lista->tamanho = 0;

    return lista;
}

int quadrante(int x, int y) {
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y > 0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
    return 0;
}

Celula *cria_celula(int x, int y){
    Celula *nova_celula = (Celula *)malloc(sizeof(Celula));
    nova_celula->x = x;
    nova_celula->y = y;
    nova_celula->prox = NULL;

    return nova_celula;    
}

void insere_lista(Cabeca *lista, int x, int y){
    Celula *nova_celula = cria_celula(x, y);

    if (lista->start == NULL){
        lista->start = nova_celula;
    }
    else{
        Celula *aux = lista->start;
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = nova_celula;
    }
    
    lista->tamanho++;
}

void salvar_arquivo(Cabeca *Q1, Cabeca *Q2, Cabeca *Q3, Cabeca *Q4){

    FILE *file = fopen("saida.txt", "w");

    if (file == NULL){
        printf("Erro ao abrir o arquivo 'saida.txt'\n");
        exit(0);
    }

    Celula *aux = Q1->start;
    fprintf(file,"Q1:\n");
    while (aux != NULL){
        fprintf(file,"%d %d\n", aux->x, aux->y);
        aux = aux->prox;
    }
    aux = Q2->start;
    fprintf(file,"\nQ2\n");
    while (aux != NULL){
        fprintf(file,"%d %d\n", aux->x, aux->y);
        aux = aux->prox;
    }
    aux = Q3->start;
    fprintf(file,"\nQ3\n");
    while (aux != NULL){
        fprintf(file,"%d %d\n", aux->x, aux->y);
        aux = aux->prox;
    }
    aux = Q4->start;
    fprintf(file,"\nQ4\n");
    while (aux != NULL){
        fprintf(file,"%d %d\n", aux->x, aux->y);
        aux = aux->prox;
    }

    fclose(file);

}