// Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30.Escrever o vetor X, após seu total preenchimento

#include <stdio.h>

int main(){

    int i, vetor[10];

    for (i = 0; i < 10; i++){
        vetor[i] = 30;
    }

    for (i = 0; i < 10; i++){
        
    printf("Indice %d = %d\n",i, vetor[i]);
    }

}