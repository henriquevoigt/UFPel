#include <stdio.h>

typedef struct {
    int matricula;
    char nome[100];
    int cod_disciplina;
    float nota_p1, nota_p2;
} Aluno;

#define QTD_ALUNOS 2

int main () {

    Aluno alunos[QTD_ALUNOS];
    float medias[QTD_ALUNOS];

    for ( int i = 0; i < QTD_ALUNOS; i++ ) {
        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Informe o nome do aluno: ");
        scanf("%[^\n]", &alunos[i].nome);
        getchar();
        printf("Informe o Cod. da Disciplina: ");
        scanf("%d", &alunos[i].cod_disciplina);
        getchar();
        printf("Informe a P1: ");
        scanf("%f", &alunos[i].nota_p1);
        getchar();
        printf("Informe a P2: ");
        scanf("%f", &alunos[i].nota_p2);
        getchar();

        medias[i] = ( ((alunos[i].nota_p1 * 1.0) + (alunos[i].nota_p2 * 2.0)) / 3 );
    }

    for ( int i = 0; i < QTD_ALUNOS; i++ ) {
        printf("%d. %s: %.2f\n", i, alunos[i].nome, medias[i]);
    }

    return 0;

}