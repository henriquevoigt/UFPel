## Feito em DUPLA! Henrique Weege Voigt e Samuel Bottermund Flores, turma M2

## DESENHO ESTRUTURADO NO EXCALIDRAW, ANEXADO EM PDF

## 1. A partir de uma uma implementação funcional de uma Trie padrão (ou uma de suas variantes, como TST ou Radix Tree), sua tarefa é expandir a funcionalidade da estrutura.

# a. Implemente um método/função chamado buscar_por_prefixo(String prefixo) que receba uma string como entrada e imprima as chaves válidas armazenadas na árvore que comecem com esse exato prefixo.

- i. Se o prefixo não existir na árvore, a função deve retornar uma lista vazia.

- ii. Se o prefixo corresponder a uma palavra completa que também éprefixo de outras (ex: prefixo "mar", e a árvore contém "mar", "maré", "maravilha"), a própria palavra "mar" deve ser incluída no resultado.

## 2. Considere o seguinte conjunto de chaves: {romano, romeno, roma, romaria, rodamoinho}.

# a. Desenhe a Trie padrão resultante da inserção sequencial destas palavras. Indique claramente os nós que marcam o fim de uma palavra.

# b. Desenhe a Radix Tree (Árvore Patricia) correspondente para o mesmo conjunto de palavras.

# c. Compare as duas estruturas desenhadas: quantas arestas (ou nós) foram economizadas na Radix Tree? Explique brevemente qual é a regra estrutural que permite essa economia de memória.