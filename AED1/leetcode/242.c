bool isAnagram( char* s, char* t ) {
    int tamanhoS = strlen(s);
    int tamanhoT = strlen(t);

    if ( tamanhoS != tamanhoT ) {
        return false;
    }

    int contador[26] = {0};

    for ( int i = 0; i < tamanhoS; i++ ) {
        contador[s[i] - 'a']++;
        contador[t[i] - 'a']--;
    }

    for ( int i = 0; i < 26; i++ ) {
        if ( contador[i] != 0 ) {
            return false;
        }
    }

    return true;
}