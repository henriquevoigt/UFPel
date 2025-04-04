// Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima da média. Escrever a média e o resultado da contagem.

#include <stdio.h>

int main(){

    int contador=0;
    float notas_alunos[10], media=0;

    for(int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe a nota do aluno %d\n", (lp_ctrl + 1));
        scanf("%f", &notas_alunos[lp_ctrl]);
        media += notas_alunos[lp_ctrl];
    } media = media/10;
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (notas_alunos[lp_ctrl] > media){
            contador++;
        }
    } printf("A media da turma foi %.2f e %d alunos ficaram acima dela", media, contador);
    
    return 0;
}