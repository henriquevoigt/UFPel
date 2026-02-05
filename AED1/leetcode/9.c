bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    
    long invertido = 0;
    int original = x;
    
    while (x > 0) {
        invertido = invertido * 10 + x % 10;
        x /= 10;
    }
    
    return original == invertido;
}