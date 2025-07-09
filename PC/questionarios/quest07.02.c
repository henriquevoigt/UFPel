#include <stdio.h>

enum numeros{
    um, dois, tres, quatro, cinco, seis = 6, sete, oito, nove, dez
};

int main(){
    printf("%d %d %d %d\n", um, dez, (cinco + quatro), (sete + um));

    return 0;

}