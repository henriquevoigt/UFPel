#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    char letra;
    struct celula *prox;
} Celula;

typedef struct cabeca{
    int tamanho;
    struct celula *start;
} Cabeca;

Cabeca *cria_cabeca();
Celula *cria_celula(char letra);
int def_classe(char letra);
void insere_ordenado(Cabeca *lista, char letra);
void salva_arquivo(Cabeca *C1, Cabeca *C2);

int main(){

    FILE *file = fopen("entradaschar.txt","r");

    if (file == NULL){
        printf("Falha ao carregar arquivo 'entradaschar.txt\n");
        exit(0);
    }

    Cabeca *C1 = cria_cabeca(); // C1 = vogal
    Cabeca *C2= cria_cabeca(); // C2 = consoante

    char letra;

    while (fscanf(file,"%c\n", &letra) == 1){
        int c = def_classe(letra);

        if (c == 1) insere_ordenado(C1, letra);
        else if (c == 2) insere_ordenado(C2, letra);
    }

    fclose(file);

    salva_arquivo(C1, C2);

    printf("Arquivo 'saida.txt' gerado com sucesso\n");
}

Cabeca *cria_cabeca(){
    Cabeca *lista = (Cabeca *)malloc(sizeof(Cabeca));
    lista->start = NULL;
    lista->tamanho = 0;

    return lista;
}

Celula *cria_celula(char letra){
    Celula *nova_celula = (Celula *)malloc(sizeof(Celula));
    nova_celula->letra = letra;
    nova_celula->prox = NULL;

    return nova_celula;
}

int def_classe(char letra){
    switch (letra){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1; // vogal
        default:
            return 2; // consoante
    }
}

void insere_ordenado(Cabeca *lista, char letra){
    Celula *nova_celula = cria_celula(letra);
    Celula *atual = lista->start;
    Celula *anterior = NULL;

    while (atual != NULL && atual->letra < letra){
        anterior = atual;
        atual = atual->prox;
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

void salva_arquivo(Cabeca *C1, Cabeca *C2){
    
    FILE *file = fopen("saida.txt", "w");

    if (file == NULL){
        printf("Erro ao gerar o arquivo 'saida.txt'\n");
        exit(0);
    }
    fprintf(file,"\nVOGAIS:\n");
    Celula *aux = C1->start;
    while (aux != NULL){
        fprintf(file,"%c\n", aux->letra);
        aux = aux->prox;
    }
    fprintf(file,"\nCONSOANTES:\n");
    aux = C2->start;
    while (aux != NULL){
        fprintf(file,"%c\n", aux->letra);
        aux = aux->prox;
    }
    fprintf(file,"\nTotal de vogais: %d\nTotal de consoantes: %d\n", C1->tamanho, C2->tamanho);

    fclose(file);

    return;
}