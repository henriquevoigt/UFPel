#include <stdio.h>

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m);

int main(){
    
    float tabela[30][12]; // 30 anos com 12 meses
    float medias_mensais[12]; // média de cada mês
    int a, m; // anos e meses

    for (a = 0; a < 30; a++) {
        for (m = 0; m < 12; m++) {
            scanf("%f", &tabela[a][m]);
        }
    }

    calcula_medias_mensais(tabela, medias_mensais, a, m);

    for (m = 0; m < 12; m++) {
        printf("%d: %.1f\n", m+1, medias_mensais[m]);
    }

    return 0;
}

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m);

// A sua tarefa é desenvolver a função calcula_medias_mensais, que recebe a matriz
// tabela, os valores a e m (anos e meses) e devolve, por referência, o vetor
// medias_mensais que contém as médias das temperaturas médias de cada mês.