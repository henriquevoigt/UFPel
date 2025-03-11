// Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros 10,20,30,40,50,...,100. Escrever o vetor A após o seu total preenchimento.

#include <stdio.h>

int main(){

    int i, somador = 1, A[10];

    for (i = 0; i < 10; i++){
        A[i] = (somador * 10);
        somador++;
    }for (i = 0; i < 10; i++){
        printf("Indice %d = %d\n", i, A[i]);   
    }

}
