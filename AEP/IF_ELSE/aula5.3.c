#include <stdio.h>

// Escrever um algoritmo para ler o nº de lados de um poligono regular, e a medida do lado (que só deve ser lida para polígono com 3 ou 4 lados), que calcule e imprima o seguinte:
// Se o nº de lados for igual a 3, escrever TRIANGULO e o valor do seu perímetro;
// Se o nº de lados for igual a 4, escrever QUADRADO e o valor da sua área;
// Se o nº de lados for igual a 5, escrever PENTÁGONO;

int main () {

    int lados;
    float area, perimetro, medida;
    
    printf("Quantos lados tem o poligono?\n");
    scanf("%d", &lados);
    
    if (lados == 3 || lados == 4) {
        printf("Qual a medida do lado?\n");
        scanf("%f", &medida);
    }

    if (lados == 5) {
        printf("PENTAGONO");
    } else if (lados == 4) {
        area = medida * medida;
        printf("QUADRADO, %f", area);
    } else if (lados == 3) {
        perimetro = medida * 3;
        printf("TRIANGULO, %f", perimetro);
    } else {
        printf ("Poligono nao identificado");
    }

    return 0; 




}