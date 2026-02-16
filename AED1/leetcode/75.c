void sortColors(int* nums, int numsSize) {
    int contaZero = 0;
    int contaUm = 0;
    int contaDois = 0;

    for ( int i = 0; i < numsSize; i++ ) {
        if ( nums[i] == 0 ) {
            contaZero++;
        } else if ( nums[i] == 1 ) {
            contaUm++;
        } else {
            contaDois++;
        }
    }

    int indice = 0;

    while ( contaZero > 0 ) {
        nums[indice] = 0;
        indice++;
        contaZero--;
    }

    while ( contaUm > 0 ) {
        nums[indice] = 1;
        indice++;
        contaUm--;
    }

    while ( contaDois > 0 ) {
        nums[indice] = 2;
        indice++;
        contaDois--;
    }
}