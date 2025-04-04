/* Ler um vetor B de 10 elementos(considere que podem existir elementos repetidos). A seguir copie para um vetor C apenas os elementos de B que não se repetem. 
Após o término da cópia escrever o vetor C. */

#include <stdio.h>

int main(){

    int vetor_B[10], vetor_C[10], comparador=0, controlador = 0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        vetor_C[lp_ctrl] = 0;
        printf("Informe um valor para o indice %d do vetor", lp_ctrl);
        scanf("%d", &vetor_B[lp_ctrl]);
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        comparador=0;
        for (int lp_ctrl2 = 0; lp_ctrl2 < 10; lp_ctrl2++){
            if (vetor_B[lp_ctrl] == vetor_B[lp_ctrl2]){
                comparador++;
            }
        }
        if (comparador <= 1){
            vetor_C[controlador] = vetor_B[lp_ctrl];
            controlador++;
        }
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_C[lp_ctrl]);
    }
    
}