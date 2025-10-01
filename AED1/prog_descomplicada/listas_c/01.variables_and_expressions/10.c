#include <stdio.h>

int main () {

    float velocidade;
    scanf("%f", &velocidade);
    printf("Velocidade em MT/s: \n%.2f\n", (velocidade / 3.6));

    return 0;

}