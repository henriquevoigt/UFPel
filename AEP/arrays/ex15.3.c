// Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor após a retirada dos nulos e negativos.

#include <stdio.h>

int main(){

    int vetor_D[10];

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_D[lp_ctrl]);
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_D[lp_ctrl] <= 0){
            vetor_D[lp_ctrl] = 0;
        } 
        if (vetor_D[lp_ctrl] != 0){
            printf("%d ", vetor_D[lp_ctrl]);
        }
    }
    return 0;
}