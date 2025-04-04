/* Ler um vetor Q de 10 posições (aceitar somente números positivos-se o valor informado for negativo ou zero a leitura deverá ser repetida). 
Escreva a seguir o valor do maior elemento de Q e a respectiva posição(índice) que ele ocupa no vetor. */

#include <stdio.h>

int main(){

    int vetor_Q[10], maior_valor = 0, indice;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor pro indice %d do vetor Q\n", lp_ctrl);
        scanf("%d", &vetor_Q[lp_ctrl]);
        while (vetor_Q[lp_ctrl] <= 0){
            printf("Informe um valor positivo\n");
            scanf("%d", &vetor_Q[lp_ctrl]);
        } if (vetor_Q[lp_ctrl] > maior_valor){
            maior_valor = vetor_Q[lp_ctrl];
            indice = lp_ctrl;
        }
    } printf("O maior valor informado foi %d e esta localizado no indice %d do vetor Q", maior_valor, indice);

    return 0;

}