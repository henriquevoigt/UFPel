int numberOfSteps(int num) {

    int contador = 0;

    while ( num > 0 ) {
        if ( num % 2 == 0 ) {
            num /= 2;
            contador++;
        } else {
            num -= 1;
            contador++;
        }
    }

    return contador;
    
}