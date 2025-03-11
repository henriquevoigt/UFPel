#include <stdio.h>

// Escrever um algoritmo que leia uma nota e mostre o conceito equivalente.

int main (){

// variaveis

float nota;

printf("Digite a nota do aluno, entre 0.0 e 10.0\n");
scanf("%f", &nota);

// condições

if (0 <= nota && nota <= 5) 
    printf("O conceito do aluno eh D");
else if (5 < nota && nota <= 7)
    printf("O conceito do aluno eh C");
else if (7 < nota && nota <= 9)
    printf("O conceito do aluno eh B");
else if ( nota > 9 && nota <= 10)
    printf("O conceito do aluno eh A");
    else 
    printf("Digite um valor entre 0.0 e 10.0\n");
    

return 0;
}


