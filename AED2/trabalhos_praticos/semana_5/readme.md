## Feito em DUPLA! Henrique Weege Voigt e Samuel Bottermund Flores, turma M2

## O exercício escolhido pra responder as perguntas, é o primeiro.

# A escolha gulosa é a de andar ao máximo que a autonomia do carro permite, parando apenas no ultimo posto que seja alcançável.

# Se temos a opção de parar no posto A, ou no posto B (considere que um vem após o outro), parar no B sempre fará que possamos parar no próximo posto que pararíamos se tivessemos parado em A, e também possíveis postos além. 

# Argumento de troca: Supomos uma solução ótima (O) diferente da nossa solução gulosa (G). A primeira escolha em que eles divergem é no posto aos 5KM, onde O para, e G não. Se fizermos a troca, fazendo G parar no posto de 5KM, temos uma nova solução (O'). Colocando a prova, o carro também irá parar apenas 2 vezes (no posto 5KM e 15KM). Sendo (O') tão boa quanto (O), então o guloso é válido.

## 1. Um carro precisa percorrer uma distância com postos ao longo do caminho. Dado o alcance máximo do carro e a posição dos postos, implemente um algoritmo que minimize o número de paradas. Entrada: distancia_total = 25 ● alcance_max = 10 ● postos = [5, 10, 15, 20]

## 2.  Dado um intervalo [0, L] e um conjunto de subintervalos, selecione o menor número de intervalos que cubram completamente [0, L], se possível. Entrada: ● L = 10 ● intervalos = [(0, 3), (2, 5), (4, 7), (6, 10), (8, 10)]

## 3.  Você atua como desenvolvedor freelancer e acabou de receber N propostas de pequenos projetos. Devido à sua rotina, você consegue finalizar exatamente um projeto por dia. Cada cliente estabeleceu um prazo máximo (em dias) para receber o projeto e um valor (em R$) que será pago pela entrega no prazo. Se você estourar o prazo de um cliente, o contrato é cancelado e você não recebe nada por aquele projeto. Implemente um algoritmo que maximize o lucro total escolhendo tarefas que possam ser concluídas antes dos prazos. Implemente um algoritmo que receba a lista de projetos disponíveis e monte a sua agenda de trabalho diária (o que fazer no dia 1, no dia 2, etc.) de forma a maximizar o seu lucro final. Entrada: tarefas = [ (id='A', prazo=2, lucro=100), (id='B', prazo=1, lucro=19), (id='C', prazo=2, lucro=27), (id='D', prazo=1, lucro=25), (id='E', prazo=3, lucro=15)]