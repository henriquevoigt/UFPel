/* Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. 
Calcular e imprimir a soma dos valores maiores que 5 existentes no vetor. */

#include <stdio.h>

int main(){

    int vetor[10], somatorio = 0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor (informe valor < ou = 0 para parar)\n", (lp_ctrl + 1));
        scanf("%d", &vetor[lp_ctrl]);
        if (vetor[lp_ctrl] <= 0){
            printf("Progama interrompido\n");
            lp_ctrl = 10;
        }
        else{
            if (vetor[lp_ctrl] > 5){
                somatorio += vetor[lp_ctrl];
            }
        }
        
    }
    printf("A soma dos valores maiores que 5 existentes no vetor eh: %d", somatorio);

}