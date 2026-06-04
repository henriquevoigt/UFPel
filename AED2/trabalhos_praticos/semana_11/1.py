def consulta_ligacoes(grafo, intervalo):

    for origem, lista_de_arestas in grafo.items():
        for aresta in lista_de_arestas:
            if intervalo[0] <= aresta[1] <= intervalo[1]:
                print (f"{origem} -> {aresta[0]} : ({aresta[1]})")


if __name__ == '__main__':
    
    grafo = {
        'A': [('B', 5), ('C', 3)],
        'B': [('D', 5)],
        'C': [('D', 2)],
        'D': []
    }

    
    valor_minimo = int(input("Digite o peso mínimo do intervalo: "))
    valor_maximo = int(input("Digite o peso máximo do intervalo: "))

    intervalo = (valor_minimo, valor_maximo)
    

    consulta_ligacoes(grafo, intervalo)
    