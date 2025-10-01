#include <stdio.h>

int main () {

    int idade, ano;

    scanf("%d", &idade);
    scanf("%d", &ano);

    printf("\nAno de nascimento: %d", (ano - idade));
    
    return 0;
    
}