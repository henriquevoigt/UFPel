#include <stdio.h>

typedef struct {
    int matricula;
    char nome[100];
    float nota_p1, nota_p2, nota_p3;
} Aluno;

int main () {

    Aluno alunos[5];
    float maior_media, menor_media, media;
    int indice_maiormedia, indice_maiornota, indice_menormedia;

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Informe o nome do aluno: ");
        scanf("%[^\n]", &alunos[i].nome);
        getchar();
        printf("Informe a P1: ");
        scanf("%f", &alunos[i].nota_p1);
        getchar();
        printf("Informe a P2: ");
        scanf("%f", &alunos[i].nota_p2);
        getchar();
        printf("Informe a P3: ");
        scanf("%f", &alunos[i].nota_p3);
        getchar();

        media = ((alunos[i].nota_p1 + alunos[i].nota_p2 + alunos[i].nota_p3) / 3);

        if ( i == 0 ) {
            maior_media = media;
            menor_media = media;
            indice_maiormedia = i; indice_menormedia = i; indice_maiornota = i;
        }

        if ( maior_media < media ) {
            maior_media = media;
            indice_maiormedia = i;
        }

        if ( menor_media > media ) {
            menor_media = media;
            indice_menormedia = i;
        }

        if ( alunos[i].nota_p1 > alunos[indice_maiornota].nota_p1 ) {
            indice_maiornota = i;
        }

        if ( media >= 6 ) {
            printf("Aluno %s: APROVADO!\n", alunos[i].nome);
        } else {
            printf("Aluno %s: REPROVADO!\n", alunos[i].nome);
        }
    }

    printf("Aluno com maior media: %s\n", alunos[indice_maiormedia].nome);
    printf("Aluno com menor media: %s\n", alunos[indice_menormedia].nome);
    printf("Aluno com maior nota P1: %s\n", alunos[indice_maiornota].nome);

    return 0;

}