// altura e raio -> area -> qtd latas -> custo
// cada lata R$ 20, com 5 litros e pinta 3m²
// area = 2.pi.raio x (raio + altura)

#include <stdio.h>


int main (){
  float altura, raio;
  printf("Qual a altura?\n");
  scanf("%f", &altura);
  printf("\nQual o raio?\n");
  scanf("%f", &raio);

  float area;
  area = 2*3.14*raio*(raio + altura);

  float pinto; // quantidade de litros
  pinto = area/3;

  float latas; // quantidade de latas
  latas = pinto/5;

  float custo; 
  custo = latas*20;

  printf("\n Serao necessarias %.2f latas", latas);
  printf(" e custara %.2f reais", custo);

  return 0;

  
}