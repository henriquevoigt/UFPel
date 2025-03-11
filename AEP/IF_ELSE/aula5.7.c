// .Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere os usuário não informará valores iguais.

#include <stdio.h>

int main () {

    int user_value1, user_value2, user_value3;

    printf("Insira o primeiro valor\n");
    scanf("%d", &user_value1);
    printf("Insira o segundo valor\n");
    scanf("%d", &user_value2);
    printf("Insira o terceiro valor\n");
    scanf("%d", &user_value3);

    if (user_value1 > user_value2 && user_value2 > user_value3) {
        printf("%d ... %d ... %d", user_value3, user_value2, user_value1);
    } else if (user_value1 > user_value3 && user_value3 > user_value2) {
        printf("%d ... %d ... %d", user_value2, user_value3, user_value1);
    } else if (user_value2 > user_value3 && user_value3 > user_value1) {
        printf("%d ... %d ... %d", user_value1, user_value3, user_value2);
    } else if (user_value2 > user_value1 && user_value1 > user_value3) {
        printf("%d ... %d ... %d", user_value3, user_value1, user_value2);
    } else if (user_value3 > user_value1 && user_value1 > user_value2) {
        printf("%d ... %d ... %d", user_value2, user_value1, user_value3); 
    } else if (user_value3 > user_value2 && user_value2 > user_value1) {
        printf("%d ... %d ... %d", user_value1, user_value2, user_value3);
    }
    return 0;

}