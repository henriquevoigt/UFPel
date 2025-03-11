#include <stdio.h>
#include <string.h>

// Faça um algoritmo que, para 10 alunos: leia o nome do aluno e duas notas deste aluno e,
// que escreva o nome do aluno, informando se ele está aprovado caso sua média seja maior ou igual a 7, juntamente com a sua média e reprovado caso contrário.

int main () {

    char nome_aluno[10];
    float nota_1, nota_2, media;
    int controle_loop;

    controle_loop = 1;

    while (controle_loop < 10) {
        printf("Qual o nome do aluno?\n");
        scanf("%s", nome_aluno);
        printf("Qual a nota da primeira avaliacao?\n");
        scanf("%f", &nota_1);
        printf("Qual a nota da segunda avaliacao?\n");
        scanf("%f", &nota_2);

        media = ((nota_1 + nota_2)/2);

        if (media >= 7) {
            printf("Aluno %s, voce esta APROVADO e sua MEDIA = %.2f\n", nome_aluno, media);
        } else {
            printf("Aluno %s, voce esta REPROVADO e sua MEDIA = %.2f\n", nome_aluno, media);
        }
        controle_loop = controle_loop + 1;
    }
    return 0;
}
