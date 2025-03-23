/* Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de ordem par de Y (elementos com índice 0,2,4,6,8) receberão os respectivos elementos de X multiplicados por 2.
Os elementos de ordem ímpar de Y (elementos com índices 1,3,5,7,9) receberão os respectivos elementos de X multiplicados por 3. Escrever o vetor Y. */

#include <stdio.h>

int main(){

    int vetor_X[10], vetor_Y[10];

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor pra posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_X[lp_ctrl]);
        if (lp_ctrl % 2 == 0){
            vetor_Y[lp_ctrl] = (vetor_X[lp_ctrl] * 2);
        } else {
            vetor_Y[lp_ctrl] = (vetor_X[lp_ctrl] * 3);
        }
    } for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_Y[lp_ctrl]);
    }

    return 0;

}