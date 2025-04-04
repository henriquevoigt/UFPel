/* Escreva um programa em C que leia 10 valores e armazene-os em um vetor, em seguida leia um número inteiro que represente um índice deste vetor(validando entre 1 e 10 inclusive). Logo após
retirar o elemento desta posição deslocando os demais elementos.Não deve ficar espaço vazio no vetor.*/

#include <stdio.h>

int main (){
    
    int vetor[10], indice;

    for(int i = 0; i < 10; i++){
        printf("Digite valor: \n");
        scanf("%d",&vetor[i]); 
    }

    printf("Digite indice do vetor:\n");
    scanf("%d",&indice);

    while(indice < 0 || indice > 9){
        printf("Indice invalido. Digite novamente:\n");
        scanf("%d",&indice); 
    }
    
    for(int i = indice-1; i < 9; i++){
        vetor[i] = vetor[i+1]; 
    }

    printf("Vetor: ");

    for(int i = 0; i < 9; i++){
    printf("%d ", vetor[i]); 
    }

}