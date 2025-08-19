/* Fazer um programa que lê as 3 notas de n alunos (n é fornecido pelo usuário, no início do programa) de uma turma de Programação (V1, V2 e MT, onde MT é a média dos
trabalhos). O programa calcula e imprime a média de cada aluno, usando a fórmula M=(3*v1+3*v2+4*MT)/10. Após, o programa calcula e imprime a média da turma em V1,
em V2 e em MT. Finalmente, o programa conta quantos alunos obtiveram nota maior que a média calculada para V1, imprimindo esta informação. */

#include <stdio.h>

typedef struct {
    float p1, p2, mt, media;
} aluno;

void coleta_nota(aluno *alunos, int quantidade);
void calcula_media (aluno *alunos, int quantidade);

int main(){

    int qtde = 0;

    printf("Informe quantos alunos serao avaliados\n");
    scanf("%d", &qtde);

    aluno alunos[qtde];

    coleta_nota(alunos, qtde);
    calcula_media(alunos, qtde);

}

void coleta_nota(aluno *alunos, int quantidade){

    for (int i = 0; i < quantidade; i++){
        printf("Informe a nota da P1 do aluno %d\n", i+1);
        scanf("%f", &alunos[i].p1);
        printf("Informe a nota da P2 do aluno %d\n", i+1);
        scanf("%f", &alunos[i].p2);
        printf("Informe a nota da MT do aluno %d\n", i+1);
        scanf("%f", &alunos[i].mt);
        alunos[i].media = (((alunos[i].p1 * 3)+(alunos[i].p2 * 3)+(alunos[i].mt * 4))/10);
        printf("Media do aluno %d: %.2f\n", i+1, alunos[i].media);
    }

}

void calcula_media(aluno *alunos, int qtde){

    float media_p1 = 0, media_p2 = 0, media_mt = 0;
    int controle = 0;

    for (int i = 0; i < qtde; i++){
        media_p1 += alunos[i].p1;
        media_p2 += alunos[i].p2;
        media_mt += alunos[i].mt;
    }
    media_p1 = media_p1 / qtde;
    media_p2 = media_p2 / qtde;
    media_mt = media_mt / qtde;

    printf("Medias da turma: P1: %.2f | P2: %.2f | MT: %.2f\n", media_p1, media_p2, media_mt);
    printf("Indice dos alunos com media maior que nota da P1: ");

    for (int i = 0; i < qtde; i++){
        if (alunos[i].media > media_p1){
            printf("%d, ", i+1);
        }
    }
}
