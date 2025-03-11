#include <stdio.h>

/* Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso
para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e a mensagem "APROVADO"
se a média for maior ou igual a 5 e "REPROVADO" caso contrário */

int main (){

// variaveis

int codigo;
float n1, n2, n3, n11, n12, n13, media;

printf("Insira o codigo do aluno\n");
scanf("%d", &codigo);
printf("Insira a nota da primeira prova\n");
scanf("%f", &n1);
printf("Insira a nota da segunda prova\n");
scanf("%f", &n2);
printf("Insira a nota da terceira prova\n");
scanf("%f", &n3);

n11 = n1, n12 = n2, n13 = n3;

if (n1 > n2 && n1 > n3)
     n1 = n1*4, n2 = n2*3, n3 = n3*3;
else if (n2 > n1 && n2 > n3)
     n2 = n2*4, n1 = n1*3, n3 = n3*3;
else if (n3 > n1 && n3 > n2)
     n3 = n3*4, n2 = n2*3, n1 = n1*3;

media = ((n1 + n2 + n3)/10);


// decisão

if (media > 5)
    printf("Aluno codigo %d suas notas sao P1 %.1f P2 %.1f P3 %.1f com media final %.1f e voce esta APROVADO", codigo, n11, n12, n13, media);
else 
    printf("Aluno codigo %d suas notas sao P1 %.1f P2 %.1f P3 %.1f com media final %.1f e voce esta REPROVADO", codigo, n11, n12, n13, media);

    return 0;
    
}