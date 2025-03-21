// Ler um vetor D de 10 elementos. Crie um vetor E, com todos os elementos de D (na mesma ordem). Escrever todo o vetor D e logo após todo o vetor E.

#include <stdio.h>

int main(){

    int vetor_D[10], vetor_E[10];

    for (int lp_ctrl=0;lp_ctrl<10;lp_ctrl++){
        printf("Informe valor pra posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_D[lp_ctrl]);
    } for (int lp_ctrl=0;lp_ctrl<10;lp_ctrl++){
        vetor_E[lp_ctrl] = (vetor_D[lp_ctrl]);
    } printf("Vetor_D: "); 
    for (int lp_ctrl=0;lp_ctrl<10;lp_ctrl++){
            printf("%d ", vetor_D[lp_ctrl]);
    } printf("\nVetor_E: ");
    for (int lp_ctrl=0;lp_ctrl<10;lp_ctrl++){
            printf("%d ", vetor_E[lp_ctrl]);
    } return 0;
}