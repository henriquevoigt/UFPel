def busca_profundidade(grafo, inicio):
    
    pilha = [inicio]
    
    while len(pilha) > 0:

        atual = pilha.pop()
        print(f"Visitando: {atual}")
        for filho in grafo[atual]:
            pilha.append(filho)

def busca_largura(grafo, inicio):
    
    fila = [inicio]
    
    while len(fila) > 0:

        atual = fila.pop(0)
        print(f"Visitando: {atual}")
        for filho in grafo[atual]:
            fila.append(filho)


if __name__ == '__main__':

    grafo_arvore = {
    'A': ('B', 'C'),
    'B': ('D', 'E'),
    'C': ('H', 'I'),
    'D': ('F', 'G'),
    'E': (),
    'F': (),
    'G': (),
    'H': ('J', 'K'),
    'I': ('L', 'M'),
    'J': (),
    'K': (),
    'L': (),
    'M': ()
}