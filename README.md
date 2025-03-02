## Cadastro de Cidades

## Descrição

Este programa em C permite o cadastro e exibição de informações sobre duas cidades diferentes. O usuário insere dados como estado, código da cidade, nome, população, área, PIB e número de pontos turísticos. Ao final, o programa exibe um resumo das informações cadastradas.

## Funcionalidades

- Cadastro de duas cidades com informações detalhadas.
- Validação básica de entrada para evitar erros.
- Remoção da quebra de linha ao capturar nomes de cidades.
- Impressão dos dados cadastrados de forma organizada.

## Tecnologias Utilizadas

- Linguagem C
- Bibliotecas: `stdio.h` (entrada e saída de dados) e `string.h` (manipulação de strings)

## Como Executar

1. Instale um compilador C (como GCC).
2. Compile o programa com o comando:
   ```sh
   gcc -o cadastro_cidades cadastro_cidades.c
   ```
3. Execute o programa:
   ```sh
   ./cadastro_cidades
   ```

## Exemplo de Uso

```
Digite uma letra de 'A' a 'H' (representando um dos oito estados): A
Digite a letra do estado seguida de um número de 01 a 04: A01
Digite o Nome da Cidade: Cidade Exemplo 1
Digite a População da Cidade: 500000
Digite a área da cidade em quilômetros quadrados: 300.5
Digite o Produto Interno Bruto da cidade: 15.2
Digite a quantidade de pontos turísticos na cidade: 10

(Cadastro da segunda cidade segue o mesmo processo)

Carta 1:
Estado: A
Código: A01
Nome da Cidade: Cidade Exemplo 1
População: 500000
Área: 300.50 km²
PIB: 15.20 bilhões
Número de Pontos Turísticos: 10
```

## Autor

Desenvolvido como parte do aprendizado da linguage C


