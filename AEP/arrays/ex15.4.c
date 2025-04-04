/* Ler as notas finais de uma turma de 10 alunos armazenando-as em um vetor N. A seguir calcule a média aritmética das notas dos alunos aprovados (nota maior ou igual a 6). 
Armazene em um vetor P a posição (índice) que cada aluno ocupa no vetor N, dos alunos que obtiveram nota maior que a média calculada. Imprimir a média calculada e logo após o vetor P.
OBS: Não deixar valores em branco entre os elementos de P */

#include <stdio.h>

int main(){

    float vetor_N[10], media = 0;
    int vetor_P[10], controle_media=0, controle_posicao = 0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        vetor_P[lp_ctrl] = 0;
        printf("Informe a nota do aluno %d\n", (lp_ctrl+1));
        scanf("%f", &vetor_N[lp_ctrl]);
        if (vetor_N[lp_ctrl] >= 6){
            media += vetor_N[lp_ctrl];
            controle_media++;
        }
    }
    media = media / controle_media;
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_N[lp_ctrl] > media){
            vetor_P[controle_posicao] = (lp_ctrl);
            controle_posicao++;
        }
    }
    printf("Media calculada: %.2f\n", media);
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_P[lp_ctrl] != 0){
            printf("%d ", vetor_P[lp_ctrl]);
        }
    }
}