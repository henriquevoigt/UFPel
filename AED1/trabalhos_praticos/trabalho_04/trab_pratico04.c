char* largestNumber(int* nums, int numsSize) {
    
    char **vetor_strings = (char **)malloc(numsSize * sizeof(char *));
    int tamanho_vstrings = 0;
    
    for ( int i = 0; i < numsSize; i++ ) {
        vetor_strings[i] = (char *)malloc(12); 
        sprintf( vetor_strings[i], "%d", nums[i] );
        tamanho_vstrings += strlen( vetor_strings[i] );
    }

    for ( int i = 0; i < numsSize - 1; i++ ) {
        for ( int j = 0; j < numsSize - i - 1; j++ ) {

            char s1[25]; 
            char s2[25]; 

            strcpy( s1, vetor_strings[j] );
            strcat( s1, vetor_strings[j+1] );

            strcpy( s2, vetor_strings[j+1] );
            strcat( s2, vetor_strings[j] );

            if ( strcmp(s2, s1) > 0 ) {
                char *temp = vetor_strings[j];
                vetor_strings[j] = vetor_strings[j+1];
                vetor_strings[j+1] = temp;
            }
        }
    }
    
    if ( vetor_strings[0][0] == '0' ) {
        char *zero = malloc(2); 
        strcpy( zero, "0" ); 
        return zero;
    }

    char *result = (char *)malloc(tamanho_vstrings + 1);
    result[0] = '\0';
    
    for ( int i = 0; i < numsSize; i++ ) {
        strcat( result, vetor_strings[i] );
        free( vetor_strings[i] );
    }
    free( vetor_strings ); 

    return result;
}