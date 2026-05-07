#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int cont_dados;
    int cont_copias;
    int cont_ampliacoes;
    int tamanho;
    int tipo;
} VetorDinamico;

void inserir ( VetorDinamico *vetor, int dado );
void ampliar ( VetorDinamico *vetor );

int main () {

    VetorDinamico vetor_a, vetor_b; // vetor_a = linear | vetor_b = exponencial

    vetor_a.cont_dados = 0;
    vetor_a.cont_copias = 0;
    vetor_a.cont_ampliacoes = 0;
    vetor_a.tamanho = 1;
    vetor_a.tipo = 1;

    vetor_b.cont_dados = 0;
    vetor_b.cont_copias = 0;
    vetor_b.cont_ampliacoes = 0;
    vetor_b.tamanho = 1;
    vetor_b.tipo = 2;

    vetor_a.dados = (int *)malloc(sizeof(int));
    vetor_b.dados = (int *)malloc(sizeof(int));

    for (int i = 0; i < 10000; i++ ) {
        inserir(&vetor_a, i);
        inserir(&vetor_b, i);
    }

    printf("\n|VETOR A|\nTOTAL DE COPIAS: %d | TOTAL DE AMPLIACOES: %d", vetor_a.cont_copias, vetor_a.cont_ampliacoes);
    printf("\n|VETOR B|\nTOTAL DE COPIAS: %d | TOTAL DE AMPLIACOES: %d\n", vetor_b.cont_copias, vetor_b.cont_ampliacoes);

    free(vetor_a.dados);
    free(vetor_b.dados);


}

void inserir ( VetorDinamico *vetor, int dado ) {

    if ( vetor->tamanho - vetor->cont_dados == 0 ) {
        ampliar(vetor);
    }

    vetor->dados[vetor->cont_dados] = dado;
    vetor->cont_dados++;

    return;

}

void ampliar ( VetorDinamico *vetor ) {

    int *novo, *temp = vetor->dados;
    int controle = vetor->tamanho;

    if ( vetor->tipo == 1 ) {
        novo = (int *)malloc(sizeof(int) * vetor->tamanho + 100 * sizeof(int));
        vetor->tamanho += 100;
    }

    if ( vetor->tipo == 2 ) {
        novo = (int *)malloc(sizeof(int) * vetor->tamanho * 2);
        vetor->tamanho *= 2;
    }

    for (int i = 0; i < controle; i++) {
        novo[i] = vetor->dados[i];
        vetor->cont_copias++;
    }

    vetor->dados = novo;
    vetor->cont_ampliacoes++;

    free(temp);

    return;
}

