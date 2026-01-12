bool backspaceCompare(char* s, char* t) {
    
    int apagaS = 0, apagaT = 0;
    int i, j;
   
    for ( i = strlen(s) - 1, j = strlen(t) - 1; i>= 0 || j >= 0; i--, j-- ) {
        while ( i >= 0 ) {
            if ( s[i] == '#' ) {
                apagaS++, i--;
            }
            else if ( apagaS > 0 ) {
                apagaS--, i--;
            }
            else break;
        }
        while ( j >= 0 ) {
            if ( t[j] == '#' ) {
                apagaT++, j--;
            }
            else if ( apagaT > 0 ) {
                apagaT--, j--;
            }
            else break;
        }

        if ( i >= 0 && j >= 00 && s[i] != t[j] ) {
            return 0;
        }
        if (( i >= 0 ) != ( j >= 0 )) {
            return 0;
        }         
    }

    return 1;

}
