#include <stdio.h>

int main () {

    char string[50], troca;
    int controle = 0;

    printf("Insira uma palavra\n");
    scanf("%[^\n]", string);
    getchar();
    
    for ( int i = 0; string[i] != '\0'; i++ ) {

        switch (string[i]) {

            case 'a': controle++; break;
            case 'e': controle++; break;
            case 'i': controle++; break;
            case 'o': controle++; break;
            case 'u': controle++; break;

            default: continue;

        }
    }

    printf("Total de vogais encontradas: %d\n", controle);
    printf("Informe por quanto caractere deseja substituir as vogais:\n");
    scanf("%c", &troca);
    printf("Nova string: ");

    for ( int i = 0; string[i] != '\0'; i++ ) {

        if ( string[i] == 'a' || string[i] == 'e' ||
             string[i] == 'i' || string[i] == 'o' ||
             string[i] == 'u' ) {
                string[i] = troca;
        }
        printf("%c", string[i]);
    }

    return 0;

}