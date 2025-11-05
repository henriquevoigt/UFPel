#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[20];
    char nascimento[12];
} Aluno;

int main () {

    int quantidade;
    Aluno *alunos;

    printf("Informe a quantidade de alunos que serao cadastrados: ");
    scanf("%d", &quantidade);

    alunos = (Aluno *)malloc(quantidade * sizeof( Aluno ));
    if ( !alunos ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < quantidade; i++ ) {
        printf("Informe a matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Informe o ultimo sobrenome: ");
        scanf("%[^\n]", &alunos[i].sobrenome);
        getchar();
        printf("Informe a data de nascimento (DD/MM/AAAA): ");
        scanf("%[^\n]", &alunos[i].nascimento);
        getchar();
    }

    for ( int i = 0; i < quantidade; i++ ) {
        printf("Matricula: %d | Sobrenome: %s | Nascimento: %s\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].nascimento);
    }

    free(alunos);

    return 0;

}