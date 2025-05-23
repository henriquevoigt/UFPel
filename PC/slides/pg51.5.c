/* Refaça o exercício anterior usando o comando while. */

#include <stdio.h>

int main(){

    int fatorial, controle;

    printf("Informe o numero que deseja saber o fatorial\n");
    scanf("%d", &fatorial);

    controle = (fatorial - 1);

    while(controle > 1){
        fatorial *= controle;
        controle--;
        printf("%d ", fatorial);
    }

    printf("Fatorial: %d", fatorial);
}