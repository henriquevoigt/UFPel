int compararStrings( const void *a, const void *b ) {

    char *str1 = *(char **)a;
    char *str2 = *(char **)b;

    char ordem1[25]; 
    char ordem2[25];

    strcpy( ordem1, str1 );
    strcat( ordem1, str2 );

    strcpy( ordem2, str2 );
    strcat( ordem2, str1 ); 

    return strcmp( ordem2, ordem1 );
}

char* largestNumber( int* nums, int numsSize ) {

    char **listaDeStrings = (char **)malloc(numsSize * sizeof(char *));
    
    int tamanhoTotalResultado = 0;

    for ( int i = 0; i < numsSize; i++ ) {

        listaDeStrings[i] = (char *)malloc(12 * sizeof(char));

        sprintf( listaDeStrings[i], "%d", nums[i] );

        tamanhoTotalResultado += strlen( listaDeStrings[i] );
    }

    qsort( listaDeStrings, numsSize, sizeof(char *), compararStrings );

    if ( listaDeStrings[0][0] == '0' ) {
        char *zeroRes = (char *)malloc(2);
        strcpy( zeroRes, "0" );
        return zeroRes; 
    }

    char *resultado = (char *)malloc((tamanhoTotalResultado + 1) * sizeof(char));
    
    resultado[0] = '\0';

    for ( int i = 0; i < numsSize; i++ ) {
        strcat( resultado, listaDeStrings[i] );
        free( listaDeStrings[i] ); 
    }
    
    free( listaDeStrings ); 

    return resultado;
}