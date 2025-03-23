// Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no vetor A.

#include <stdio.h>

int main(){

    int vetor_A[10], contador = 0, controle = 0;

    printf("Informe o valor que deseja controlar\n");
    scanf("%d", &controle);

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe o valor pra posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_A[lp_ctrl]);
        if (vetor_A[lp_ctrl] == controle){
            contador++;
        } 
    } printf("O valor %d apareceu %d vezes", controle, contador);

    return 0;

}