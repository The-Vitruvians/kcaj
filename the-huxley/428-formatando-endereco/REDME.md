# Formatando endereço

  - [Fonte](http://thehuxley.com/problem/428)



Você receberá um conjunto de dados contendo o nome da rua, número da residência, nome do bairro, cidade, estado e o número do cep (somente números). O programa deverá imprimir os dados conforme o modelo que os Correios utilizam para a postagem de correspondências.

 

Atualmente o modelo adotado é:

Nome da rua, número da residência.

Bairro: nome do bairro. Cep: número do CEP

Cidade/Estado

 

Por exemplo:

  - Dados recebidos:
    - nome da rua: Rua Wall Street
    - número da residência: 70
    - Nome do bairro: Centro Financeiro
    - cidade: Manhatan
    - Estado: New York
    - número do cep: 12345000

  - Dados de saída:

Rua Wall Street, 70.

Bairro: Centro Financeiro. Cep: 12345000

Manhattan/New York

## Input Format

Serão fornecidos os dados por linha.

Rua Wall Street
70
Centro Financeiro
Manhattan
New York
12345000

## Output Format

Rua Wall Street, 70.
Bairro: Centro Financeiro. Cep: 12345000
Manhattan/New York

| Sample Input      | Sample Output                            |
| :---------------: | :--------------------------------------  |
| Rua Wall Street   | Rua Wall Street, 70.                     |
| 70                | Bairro: Centro Financeiro. Cep: 12345000 |
| Centro Financeiro | Manhattan/New York                       |
| Manhattan         |
| New York          |
| 12345000          |