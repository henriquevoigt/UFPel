#include <stdio.h>

int CalculaSoma ( int x, int y, int z );

int main () {

    int x, y, z, total;

    printf("Informe um valor pra X: ");
    scanf("%d", &x);
    printf("Informe um valor pra Y: ");
    scanf("%d", &y);
    printf("Informe um valor pra Z: ");
    scanf("%d", &z);

    total = CalculaSoma ( x, y, z );

    printf("Soma do intervalo: %d\n", total);

    return 0;
}

int CalculaSoma ( int x, int y, int z ) {

    if ( x > y ) {
        return 0;
    } else {
       return x + CalculaSoma ( x + z, y, z );
    }

}