#include <stdio.h>
#include <string.h>

// Escrever algoritmo para ler nº de gols marcados pelo Inter/Grêmio, e que escreva o nome do ganhador ou empate;

int main () {

    int gremio, inter;

    printf("Quantos gols foram marcados pelo Gremio?\n");
    scanf("%d", &gremio);
    printf("Quantos gols foram marcados pelo Inter?\n");
    scanf("%d", &inter);

    if (gremio > inter)
        printf("Gremio venceu por %d x %d do Inter", gremio, inter);
        else if (inter > gremio)
            printf("Inter venceu por %d x %d do Gremio", inter, gremio);
        else if (inter = gremio)
            printf("O jogo terminou em empate");

    return 0;

}