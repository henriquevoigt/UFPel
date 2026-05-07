tarefas = [
    {'id': 'A', 'prazo': 2, 'lucro': 100},
    {'id': 'B', 'prazo': 1, 'lucro': 19},
    {'id': 'C', 'prazo': 2, 'lucro': 27},
    {'id': 'D', 'prazo': 1, 'lucro': 25},
    {'id': 'E', 'prazo': 3, 'lucro': 15}
]

# ordena as tarefas pelo lucro em ordem decrescente (a escolha gulosa)
tarefas.sort(key=lambda x: x['lucro'], reverse=True)

max_prazo = max(t['prazo'] for t in tarefas)

agenda = ['-'] * max_prazo
lucro_total = 0

# tesnta alocar cada tarefa o mais distante possivel
for t in tarefas:
    for d in range(t['prazo'] - 1, -1, -1):
        if agenda[d] == '-':
            agenda[d] = t['id']
            lucro_total += t['lucro']
            break

print("Agenda:")
for i, tarefa_id in enumerate(agenda):
    print(f"Dia {i + 1}: {tarefa_id}")

print(f"Lucro total: {lucro_total}")