#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    int matricula;
    char nome[100];
    float nota;
    struct Aluno *prox;
} Aluno;

typedef struct Cabeca {
    int tamanho;
    Aluno *start;
} Cabeca;

Cabeca *criar_lista();
void insere(Cabeca *lista);
int matricula_existe(Cabeca *lista, int matricula);
void insere_inicio(Cabeca *lista, Aluno *nova_celula);
void insere_meio(Aluno *atual, Aluno *nova_celula);
void insere_fim(Aluno *atual, Aluno *nova_celula);
void remover(Cabeca *lista);
void imprime(Cabeca *lista);
void liberar(Cabeca *lista);

void ler_arquivo(Cabeca *lista);
void salvar_arquivo(Cabeca *lista);

int main() {
    Cabeca *lista = criar_lista();
    int menu = 0;

    ler_arquivo(lista);

    do {
        printf("\nMenu do programa:\n");
        printf("1- Inserir aluno;\n");
        printf("2- Remover aluno;\n");
        printf("3- Listar alunos;\n");
        printf("4- Salvar e sair;\n");
        scanf("%d", &menu);
        getchar();

        switch (menu) {
            case 1:
                insere(lista);
                break;
            case 2:
                remover(lista);
                break;
            case 3:
                imprime(lista);
                break;
            case 4:
                salvar_arquivo(lista);
                liberar(lista);
                printf("Programa finalizado com sucesso!\n");
                break;
            default:
                printf("Digite um valor valido;\n");
        }

    } while (menu != 4);

    return 0;
}

Cabeca *criar_lista() {
    Cabeca *lista = (Cabeca *)malloc(sizeof(Cabeca));
    lista->start = NULL;
    lista->tamanho = 0;
    return lista;
}

int matricula_existe(Cabeca *lista, int matricula) {
    Aluno *atual = lista->start;
    while (atual != NULL) {
        if (atual->matricula == matricula) {
            return 1; // matricula já existe
        }
        atual = atual->prox;
    }
    return 0;
}

void insere(Cabeca *lista) {
    Aluno *nova_celula = (Aluno *)malloc(sizeof(Aluno));
    printf("Informe a matricula do aluno:\n");
    scanf("%d", &nova_celula->matricula);
    getchar();

    if (matricula_existe(lista, nova_celula->matricula)) {
        printf("Erro: matricula %d ja cadastrada!\n", nova_celula->matricula);
        free(nova_celula);
        return;
    }

    printf("Informe o nome:\n");
    scanf("%[^\n]s", nova_celula->nome);
    getchar();
    printf("Informe a nota:\n");
    scanf("%f", &nova_celula->nota);
    getchar();
    nova_celula->prox = NULL;

    if (lista->start == NULL || nova_celula->matricula < lista->start->matricula) {
        insere_inicio(lista, nova_celula);
        return;
    }

    Aluno *atual = lista->start;
    while (atual->prox != NULL && atual->prox->matricula < nova_celula->matricula) {
        atual = atual->prox;
    }

    if (atual->prox == NULL) {
        insere_fim(atual, nova_celula);
    } else {
        insere_meio(atual, nova_celula);
    }
    lista->tamanho++;
}

void insere_inicio(Cabeca *lista, Aluno *nova_celula) {
    nova_celula->prox = lista->start;
    lista->start = nova_celula;
    lista->tamanho++;
}

void insere_meio(Aluno *atual, Aluno *nova_celula) {
    nova_celula->prox = atual->prox;
    atual->prox = nova_celula;
}

void insere_fim(Aluno *atual, Aluno *nova_celula) {
    atual->prox = nova_celula;
    nova_celula->prox = NULL;
}

void remover(Cabeca *lista) {
    if (lista->start == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    int matricula;
    printf("Insira a matricula que deseja remover:\n");
    scanf("%d", &matricula);

    Aluno *atual = lista->start, *anterior = NULL;

    while (atual != NULL && atual->matricula != matricula) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno nao encontrado.\n");
        return;
    }

    if (anterior == NULL) { // removendo o primeiro
        lista->start = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    free(atual);
    lista->tamanho--;
    printf("Aluno removido com sucesso!\n");
}

void imprime(Cabeca *lista) {
    if (lista->start == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    Aluno *atual = lista->start;
    while (atual != NULL) {
        printf("\nMatricula: %d | Nome: %s | Nota: %.2f\n",
               atual->matricula, atual->nome, atual->nota);
        atual = atual->prox;
    }
    printf("\nTamanho da lista: %d registros\n", lista->tamanho);
}

void liberar(Cabeca *lista) {
    Aluno *atual = lista->start, *aux;
    while (atual != NULL) {
        aux = atual->prox;
        free(atual);
        atual = aux;
    }
    free(lista);
}

void ler_arquivo(Cabeca *lista) {
    FILE *file = fopen("entrada.txt", "r");
    if (file == NULL) {
        printf("Arquivo 'entrada.txt' nao encontrado. Criando lista vazia...\n");
        return;
    }

    int matricula;
    char nome[100];
    float nota;

    while (fscanf(file, "%d;%[^;];%f\n", &matricula, nome, &nota) == 3) {
        if (matricula_existe(lista, matricula)) {
            continue; // ignora duplicatas do arquivo
        }

        Aluno *nova_celula = (Aluno *)malloc(sizeof(Aluno));
        nova_celula->matricula = matricula;
        strcpy(nova_celula->nome, nome);
        nova_celula->nota = nota;
        nova_celula->prox = NULL;

        if (lista->start == NULL || matricula < lista->start->matricula) {
            insere_inicio(lista, nova_celula);
        } else {
            Aluno *atual = lista->start;
            while (atual->prox != NULL && atual->prox->matricula < matricula) {
                atual = atual->prox;
            }
            if (atual->prox == NULL) {
                insere_fim(atual, nova_celula);
            } else {
                insere_meio(atual, nova_celula);
            }
            lista->tamanho++;
        }
    }
    fclose(file);
    printf("Dados carregados de 'entrada.txt'.\n");
}

void salvar_arquivo(Cabeca *lista) {
    FILE *file = fopen("saida.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir 'saida.txt' para escrita.\n");
        return;
    }

    Aluno *atual = lista->start;
    while (atual != NULL) {
        fprintf(file, "%d;%s;%.2f\n", atual->matricula, atual->nome, atual->nota);
        atual = atual->prox;
    }
    fclose(file);
    printf("Dados salvos em 'saida.txt'.\n");
}