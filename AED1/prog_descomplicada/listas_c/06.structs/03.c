#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
    char curso[100];
} Aluno;

int main () {

    Aluno alunos[5];

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe o nome: ");
        scanf("%[^\n]", &alunos[i].nome);
        getchar();
        printf("Informe a matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Informe o curso: ");
        scanf("%[^\n]", &alunos[i].curso);
        getchar();
    }

    printf("Cadastros concluidos!\n");

    for ( int i = 0; i < 5; i++ ) {
        printf("Nome: %s | Matricula: %d | Curso: %s\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }

    return 0;

}