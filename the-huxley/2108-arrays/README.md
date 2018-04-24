# Arrays
  - [Fonte](http://thehuxley.com/problem/2108)

Você receberá dois arrays de inteiros A e B. Verifique se é possível escolher k números no array A and m números no array B, tal que qualquer número entre os escolhidos de A é estritamente menor que qualquer número entre os escolhidos de B.

## Input Format

A primeira linha da entrada consistirá de dois inteiros nA, nB (1 ≤ nA, nB ≤ 10^3), representando o tamanho dos arrays A e B, respectivamente.

A segunda linha da entrada consistirá de dois inteiros k e m (1 ≤ k ≤ nA, 1 ≤ m ≤ nB ), representando a quantidade de números que devem ser selecionados dos arrays A e B, respectivamente.

A terceira linha conterá nA inteiros, representando os elementos do array A.

A quarta linha conterá nB inteiros, representando os elementos do array B.

## Output Format

A saída deverá ser "YES": caso seja possível escolher k números do array A, e m números do array B, de tal forma que qualquer número escolhido do array A seja estritamente menor que qualquer número escolhido do array B. Caso isso não seja possível a saída deverá ser "NO".

| Sample Input | Sample Output |
| :----------: | :-----------: |
| 3 3          | YES           |
| 2 1          |               | 
| 1 2 3        |               | 
| 3 4 5        |               |