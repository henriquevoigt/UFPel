#include <stdio.h>

//  Elabore um algoritmo que, dada a idade de um nadador classifica-o em uma das seguintes categorias

int main (){

// variaveis

int idade;

printf("Insira a idade do nadador\n");
scanf("%d", &idade);

// condições

if (idade >= 5 && idade <= 7)
    printf("Este nadador classifica-se como Infantil A");
else if (idade >= 8 && idade <= 10)
    printf("Este nadador classifica-se como Infantil B");
else if (idade >= 11 && idade <= 13)
    printf("Este nadador classifica-se como Juvenil A");
else if (idade >= 14 && idade <= 17)
    printf("Este nadador classifica-se como Juvenil B");
else if (idade >= 18)
    printf("Este nadador classifica-se como Adulto");
else if (idade < 5)
    printf("Permitido apenas nadadores a partir de 5 anos de idade");

    return 0;
    


}