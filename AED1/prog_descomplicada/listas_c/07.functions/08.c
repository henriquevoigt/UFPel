#include <stdio.h>
#include <math.h>

void CalculaHipotenusa ( int a, int b );

int main () {

    int a, b;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    CalculaHipotenusa( a, b);

    return 0;

}

void CalculaHipotenusa ( int a, int b ) {

    float hipotenusa;

    hipotenusa = (( a * a ) + ( b * b ));
    hipotenusa = sqrt(hipotenusa);

    printf("Hipotenusa eh %.2f\n", hipotenusa);

    return ;

}