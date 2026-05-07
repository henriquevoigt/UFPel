def min_intervalos_para_cobrir(L, intervalos):
    
    intervalos.sort(key=lambda x: x[0])
    
    intervalos_selecionados = []
    fim_atual = 0
    i = 0
    n = len(intervalos)
  
    while fim_atual < L:
        melhor_intervalo = None
        maior_alcance = fim_atual

        # 2. escolha gulosa é encontrar o intervalo que começa <= fim_atual e que vai o mais longe possível (maior final)

        while i < n and intervalos[i][0] <= fim_atual:
            if intervalos[i][1] > maior_alcance:
                maior_alcance = intervalos[i][1]
                melhor_intervalo = intervalos[i]
            i += 1

        if melhor_intervalo is None:
            return -1, []

        intervalos_selecionados.append(melhor_intervalo)
        fim_atual = maior_alcance
        
    return len(intervalos_selecionados), intervalos_selecionados


L = 10
intervalos = [(0, 3), (2, 5), (4, 7), (6, 10), (8, 10)]

quantidade, selecionados = min_intervalos_para_cobrir(L, intervalos)

print(f"Objetivo: Cobrir o intervalo de 0 até {L}\n")

if quantidade != -1:
    print(f"Número mínimo de intervalos: {quantidade}")
    print(f"Intervalos selecionados: {selecionados}")
else:
    print("Erro: Não é possível cobrir todo o intervalo com os subintervalos fornecidos.")