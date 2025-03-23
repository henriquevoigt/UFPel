// Ler um vetor B de 10 elementos e um valor X. Escreva as posições (índices) do vetor B em que aparece um valor igual a X.

#include <stdio.h>

int main(){

    int vetor_B[10], controle = 0;

    printf("Qual valor voce quer observar?\n");
    scanf("%d", &controle);

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_B[lp_ctrl]);
    }printf("Valor %d identificado nas posicoes: ", controle); 
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_B[lp_ctrl] == controle){
            printf("%d, ", lp_ctrl + 1);
        }
    }

    return 0;
   
}