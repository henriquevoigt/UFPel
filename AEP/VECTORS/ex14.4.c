// Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.

#include <stdio.h>

int main(){

    int i, vetor_C[10];

    for (i=0;i<10;i++){
        printf("Informe um valor para C-%d\n", i);
        scanf("%d", &vetor_C[i]);
    } for (i=0;i<10;i++){
        if (vetor_C[i] < 0){
            vetor_C[i] = 0;
        }
    } for (i=0;i<10;i++){
            printf("Indice %d = %d\n", i, vetor_C[i]);
        }
}