/* Ler um vetor R de 10 elementos e um vetor S de 20 elementos . A seguir gere um vetor X que contenha uma única ocorrência dos elementos comuns a R e S (intersecção). 
Após completar o preenchimento escrever o vetor X. Considere que nos vetores R e S podem existir elementos repetidos. */

#include <stdio.h>

int main(){

    int vetor_R[10], vetor_S[20], vetor_X[10], contador = 0;

    for (int i = 0; i < 10; i++){
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

    for (int lp_ctrl = 0; lp_ctrl < 20; lp_ctrl++){
        for (int lp_ctrl2 = 0; lp_ctrl2 < 10; lp_ctrl2++){
            if (vetor_S[lp_ctrl] == vetor_R[lp_ctrl2]){
                vetor_X[contador] = vetor_S[lp_ctrl];
                contador++;
            }
        }
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_X[lp_ctrl]);
    }
}
