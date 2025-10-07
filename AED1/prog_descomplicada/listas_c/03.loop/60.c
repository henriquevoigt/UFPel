#include <stdio.h>

int main () {

    int temp = 1, maior = 0, menor, qtd = 0;
    int media = 0, media_par = 0, qtd_par = 0;

    for ( qtd; temp != 0; qtd++ ) {
        printf("Informe um valor a ser somado (0 pra sair)\n");
        scanf("%d", &temp);

        if ( qtd == 0 ) {
            menor = temp;
        }
        if ( maior < temp ) {
            maior = temp;
        }
        if ( menor > temp ) {
            menor = temp;
        }

        if ( temp % 2 == 0 ) {
            media_par += temp;
            qtd_par++;
        }

        media += temp;

    }

    qtd--;

    printf("\nSoma: %d \tQuantidade: %d\t Media: %d\n", media, qtd, media/qtd);
    printf("Maior: %d \tMenor: %d \tMedia Par: %d\n", maior, menor, media_par/qtd_par);

    return 0;

}