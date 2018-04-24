# Figurinhas dos Irmãos

  - [Fonte](http://thehuxley.com/problem/4)

João e Maria são dois irmãos muito briguentos. Um belo dia, o pai deles, o Sr. Carlos, comprou várias figurinhas do álbum da copa. João disse que por ser menino tinha direito a mais figurinhas. Obviamente, Maria não concordou e propôs um acordo de risco. Eles iriam dividir as figurinhas da seguinte maneira:

João ficaria com todas as figurinhas cujo número de série for par e Maria com as ímpares. O Sr. Carlos gostou da idéia e propôs um pequeno bônus:

- Aquele que obtivesse o maior valor somando os números de séries das figurinhas ganharia como bônus mais R$10,00 reais para comprar figurinhas só para ele.

## Input Format

Consiste de um número inteiro n indicando a quantidade de figurinhas a serem lidas, seguido de n inteiros correspondendo ao número de série de cada
figurinha. Todas as figurinhas possuem números de série diferentes. Note que as figurinhas podem ser repetidas. Neste caso, só devemos considerar na soma do número de série uma única vez, mas contamos na quantidade de figurinhas.

Considere:

  - n <= 10.000
  - Cada inteiro <= 10.000

## Output Format

Consiste dos números inteiros J, M e S, indicando respectivamente, o número de figurinhas que ficaram com o João, o número de figurinhas que ficaram com Maria e a soma dos números de série do irmão que ganhou o bônus do Sr. Carlos.

Depois de cada número da saída coloque um final de linha.

| Sample Input | Sample Output |
| :----------: | :-----------: |
| 8            | 5             |
| 1020         | 3             |
| 3            | 12458         |
| 40           |               |
| 12455        |               |
| 432          |               |
| 10020        |               |
| 2            |               |
| 3            |               |