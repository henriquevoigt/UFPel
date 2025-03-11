#include <stdio.h>

// Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha de Gude o jogador deve pesar entre 70 Kg (inclusive) e 80 Kg (inclusive)
// e medir de 1,75 m (inclusive) a 1,90 m (inclusive).
// Escreva um algoritmo para ler a altura e o peso de um jogador e determine se o jogador está apto a participar
// do campeonato escrevendo uma das seguintes mensagens conforme cada situação.

int main () {

    float altura_jogador, peso_jogador;
    int strike;

    strike = 0;

    printf("Qual a altura do jogador?\n");
    scanf("%f", &altura_jogador);
    printf("Qual o peso do jogador?\n");
    scanf("%f", &peso_jogador);

    if (altura_jogador >= 1.75 && altura_jogador <= 1.90 && peso_jogador >= 70 && peso_jogador <= 80) {
        printf("Aceito");
    } if (altura_jogador < 1.75 || altura_jogador > 1.90) {
        strike = strike + 1;
    } if (peso_jogador < 70 || peso_jogador > 80) {
        strike = strike + 2;
    } if (strike == 1) {
        printf("Recusado por altura");
    } else if (strike == 2) {
        printf("Recusado por peso");
    } else if (strike == 3) {
        printf("Totalmente recusado, peso e altura fora das faixas");
    }
    return 0;

}













   