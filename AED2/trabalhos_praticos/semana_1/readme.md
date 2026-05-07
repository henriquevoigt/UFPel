## Henrique Weege Voigt, turma M2, AED II

## As linguagens modernas nos oferecem estruturas convenientes como ArrayList (Java), vector (C++) ou list (Python) que crescem magicamente à medida que inserimos elementos. Neste exercício, você deverá implementar o seu próprio vetor dinâmico do zero, utilizando apenas alocação básica de memória (arrays estáticos primitivos).

# a. Crie uma classe/estrutura VetorDinamico que armazene números inteiros. Ela deve ter uma capacidade inicial de 1 elemento.

# b. Implemente o método inserir(elemento). Quando o vetor estiver cheio, aloque um novo array, copie todos os elementos antigos para o novo e, em seguida, inserir o novo elemento.

# c. Crie duas versões da política de crescimento:

- i. Estratégia A (Crescimento Linear): Sempre que encher, o novo array terá o tamanho do atual + 100 posições.

- ii. Estratégia B (Crescimento Exponencial): Sempre que encher, o novo array terá o dobro do tamanho do atual.

# d. Faça um script de teste que insira 10.000 elementos sequencialmente em ambos os vetores. Adicione um contador global para registrar quantas operações de cópia de elementos (do array antigo para o novo) ocorreram no total.

# e. Ao final, compare o número total de cópias realizadas pela Estratégia A e pela Estratégia B. Qual das duas estratégias realiza menos trabalho total a longo prazo, mesmo desperdiçando mais memória no curto prazo?

** A estratégia de alocar exponencialmente, embora custe mais memória no curto prazo, realiza muito menos trabalho total (do processador) a longo prazo, na amostragem de 10.000 itens, foi cerca de 30 vezes menos esforço. Mas vale ressaltar o desperdício de memória ao término da execução, onde o crescimento linear deixou apenas 1 espaço vago, enquanto o exponencial deixou mais de 6.000 espaços vazios ** 