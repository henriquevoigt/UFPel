/* Faça um programa que lê n números decimais, armazenando-os em um vetor. Após, o programa identifica o menor número do vetor e imprime sua posição. */

#include <stdio.h>

int main (){
    
    int tamanho_vetor, posicao;

    printf("Informe quantos numeros deseja armazenar\n");
    scanf("%d", &tamanho_vetor);

    float vetor[tamanho_vetor], controle;

    for (int i = 0; i < tamanho_vetor; i++){
        printf("Informe um valor para a posicao %d do vetor\n", i);
        scanf("%f", &vetor[i]);
        controle = vetor[i];
        
        if (vetor[i] < controle){
            controle = vetor[i];
            posicao = i;
        }    
    }

    printf("Menor valor informado: %.2f na posicao %d do vetor", vetor[posicao], posicao);

    return 0;

}