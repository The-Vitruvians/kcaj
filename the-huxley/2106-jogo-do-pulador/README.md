# Jogo do Pulador

  - [Fonte](http://thehuxley.com/problem/2106)

A existência achou um jogo muito interessante: O Jogo do Pulador. O jogo funciona de seguinte forma: Existe um tabuleiro de n casas, onde cada casa contém um número, que indica o quanto o pulador deve pular para chegar na próxima casa. O tabuleiro é um anel, então se o pulador chegar no final do tabuleiro, ele deve continuar seu pulo do começo do tabuleiro.

São sempre gerados tabuleiros aleatórios e também é dito quantos pulos o pulador vai poder fazer. O objetivo é escolher a casa inicial que em k pulos, o pulador tenha pulado a maior quantidade de casas. No caso de empate, a que iniciar mais perto de 0 ganha.

Ajude a entidade a descubrir qual a casa que garante a vitória.

Exemplo:

Um tabuleiro de 6 casas e 3 pulos:
3 5 2 2 4 1
Iniciando em 0: Pula para 3, pula para 5, pula para 0, somando 6 casas.
Iniciando em 1: Pula para 0, pula para 3, pula para 5, somando 10 casas.
Iniciando em 2: Pula para 4, pula para 2, pula para 4, somando 8 casas.
...
Iniciando em 5: Pula para 0, pula para 3, pula para 5, somando 6 casas.
Então ele deve iniciar da posição 1, e somará 10 casas.

# Input Format

A primeira linha da entrada consistirá de dois inteiros: n e k, representando o tamanho do tabuleiro e quantos pulos o jumper deverá fazer, respectivamente.

Em seguida, virão n inteiros, indicando quantas casas o pulador deve pular se ele estiver na i-ésima casa.

# Output Format

A saída deverá conter dois inteiros, representando onde ele deve começar e quantas casas ele irá pular, respectivamente.

| Sample Input | Sample Output |
| :----------: | :-----------: |
| 6 3          | 1 10          |
| 3 5 2 2 4 1  |               |

| Sample Input | Sample Output |
| :----------: | :-----------: |
| 4 2          | 3 8           |
| 1 2 3 4      |               |