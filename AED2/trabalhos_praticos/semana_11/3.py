def verifica_conexao(grafo, inicio):

    visitados = set()
    fila = [inicio]

    visitados.add(inicio)

    while len(fila) > 0:
        atual = fila.pop(0)

        for vizinho in grafo[atual]:
            if vizinho not in visitados:
                visitados.add(vizinho)
                fila.append(vizinho)
                
    if len(visitados) == len(grafo):
        return "Conexo" 
    else:
        return "Não conexo" 


if __name__ == '__main__':
    
    grafo_1 = {
        'A': ['B', 'C'],
        'B': ['A', 'D'],
        'C': ['A', 'D'],
        'D': ['B', 'C']
    }
    
    grafo_2 = {
        'A': ['B', 'C'],
        'B': ['A', 'D'],
        'C': ['A', 'D'],
        'D': ['B', 'C'],
        'E': [] 
    }
    
    print("Testando Grafo 1 a partir de 'A':", verifica_conexao(grafo_1, 'A'))
    print("Testando Grafo 2 a partir de 'A':", verifica_conexao(grafo_2, 'A'))