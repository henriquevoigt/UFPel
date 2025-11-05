int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

    int maior_riqueza = 0;

    for ( int i = 0; i < accountsSize; i++ ) {
        int temp = 0;
        for ( int j = 0; j < *accountsColSize; j++ ) {
            temp += accounts[i][j];
        }
        if ( temp > maior_riqueza ) {
            maior_riqueza = temp;
        }
    }

    return maior_riqueza;
    
}