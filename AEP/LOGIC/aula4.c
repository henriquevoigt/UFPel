#include <stdio.h>



int main (){

 int a, b;

 printf("Diga um numero\n");
 scanf("%d", &a);
 printf("\nDiga outro numero\n");
 scanf("%d", &b);

 if (a > b)
    printf("O maior numero eh %d", a);
 else
  printf("O maior numero eh %d", b);

 return 0;

 }