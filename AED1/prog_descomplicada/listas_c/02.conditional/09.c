#include <stdio.h>

int main () {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if ( y > (x * 0.2) ) {
        printf("\nEmprestimo negado\n");
    } else {
        printf("\nEmprestimo aprovado\n");
    }

    return 0;
    
}