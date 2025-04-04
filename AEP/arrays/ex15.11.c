/* Ler um vetor R de 10 elementos e um vetor S de 20 elementos. A seguir gere um vetor X que contenha uma única ocorrência dos elementos existentes em R ou em S (união). 
Após completar o preenchimento escrever o vetor X. Considere que nos vetores R e S podem existir elementos repetidos. */

#include <stdio.h>

int main(){

    int vetor_R[10], vetor_S[20], vetor_X[30], comparador = 0, controlador = 0;

    for (int i = 0; i < 30; i++){
        vetor_X[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        printf("Informe um valor pro indice %d do vetor R\n", i);
        scanf("%d", &vetor_R[i]);
    }
    for (int i = 0; i < 20; i++){
        printf("Informe um valor pro indice %d do vetor S\n", i);
        scanf("%d", &vetor_S[i]);
    }

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        comparador=0;
        for (int lp_ctrl2 = 0; lp_ctrl2 < 10; lp_ctrl2++){
            if (vetor_X[lp_ctrl] == vetor_R[lp_ctrl2]){
                comparador++;
            }
        }
        if (comparador <= 1){
            vetor_X[controlador] = vetor_R[lp_ctrl];
            controlador++;
        }
    }

    for (int lp_ctrl = 0; lp_ctrl < 20; lp_ctrl++){
        comparador=0;
        for (int lp_ctrl2 = 0; lp_ctrl2 < 30; lp_ctrl2++){
            if (vetor_S[lp_ctrl] == vetor_X[lp_ctrl2]){
                comparador++;
            }
        }
        if (comparador < 1){
            vetor_X[controlador] = vetor_S[lp_ctrl];
            controlador++;
        }
    }

    for (int lp_ctrl = 0; lp_ctrl < 30; lp_ctrl++){
        if (vetor_X[lp_ctrl] != 0){
            printf("%d ", vetor_X[lp_ctrl]);
        }
    }
    

}