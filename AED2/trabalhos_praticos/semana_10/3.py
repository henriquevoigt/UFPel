def tempo_minimo(n, e, x, a, t):
    f1 = [0] * n
    f2 = [0] * n
    
    f1[0] = e[0] + a[0][0]
    f2[0] = e[1] + a[1][0]
    
    for j in range(1, n):
        f1[j] = min(f1[j-1] + a[0][j], f2[j-1] + t[1][j-1] + a[0][j])
        f2[j] = min(f2[j-1] + a[1][j], f1[j-1] + t[0][j-1] + a[1][j])
        
    return min(f1[n-1] + x[0], f2[n-1] + x[1])

n = 5
e = [2, 4]
x = [3, 2]
a = [[7, 9, 3, 4, 8], [8, 5, 6, 4, 5]]
t = [[2, 3, 1, 3], [2, 1, 2, 2]]

print(tempo_minimo(n, e, x, a, t))