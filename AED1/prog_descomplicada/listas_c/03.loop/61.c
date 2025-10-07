#include <stdio.h>

int main () {

    int i, j;
    int maior = 0;
    int num, original, reverso, resto;

    for ( i = 100; i <= 999; i++ ) {
        for ( j = 100; j <= 999; j++ ) {
            num = i * j;
            original = num;
            reverso = 0;

            while ( num > 0 ) {
                resto = num % 10;
                reverso = reverso * 10 + resto;
                num /= 10;
            }

            if ( original == reverso && original > maior ) {
                maior = original;
            }
        }
    }

    printf("Maior palindromo: %d\n", maior);

    return 0;
}