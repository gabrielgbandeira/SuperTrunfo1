// Bibliotecas utilizadas
#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados.
#include <string.h> // Biblioteca para manipulação de strings.

// Função principal do programa
int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas.
    int PopulacaoCarta1, PopulacaoCarta2, NumerosTuristicos1, NumerosTuristicos2;
    char Estado1[2], Estado2[2], CodigoDaCarta1[10], CodigoDaCarta2[10], NomeDaCidade1[50], NomeDaCidade2[50];
    float Area1, Area2, PIB1, PIB2;

    // Início da coleta de informações para a primeira carta.
    printf("\n");
    printf("\n");

    printf("Vamos Começar a Cadastrar as Informações da Carta 1\n");

    printf("\n");
    printf("\n");


    // Solicita ao usuário que informe uma letra representando o estado.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &Estado1[0]); // Captura um caractere.
    Estado1[1] = '\0'; // Adiciona o terminador de string

    // Solicita ao usuário que informe o código da cidade (letra do estado + número).
    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", CodigoDaCarta1);

    // Solicita o nome da cidade.
    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa o buffer do teclado.
    fgets(NomeDaCidade1, sizeof(NomeDaCidade1), stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1, "\n")] = '\0'; // Remove a quebra de linha.

    // Solicita a população da cidade.
    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta1);

    // Solicita a área da cidade em quilômetros quadrados.
    printf("Digite a área da cidade em quilômetros quadrados. Ex: Digite: 300, cadastro = 300.00 Km².");
    scanf("%f", &Area1);

    // Solicita o Produto Interno Bruto (PIB) da cidade.
    printf("Digite o Produto Interno Bruto da cidade. Ex: Digite: 150, cadastro = 150.00 Bilhões.");
    scanf("%f", &PIB1);

    // Solicita a quantidade de pontos turísticos.
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos1);

    // Início da coleta de informações para a segunda carta.
    printf("\n");
    printf("\n");

    printf("\nVamos Começar a Cadastrar as Informações da Carta 2\n\n");
    
    printf("\n");
    printf("\n");

    // Repetindo os mesmos passos para a segunda carta.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &Estado2[0]);
    Estado2[1] = '\0';

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o Nome da Cidade: ");
    getchar();
    fgets(NomeDaCidade2, sizeof(NomeDaCidade2), stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = '\0';

    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta2);

    printf("Digite a área da cidade em quilômetros quadrados. Ex: Digite: 300, cadastro = 300.00 Km².");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto da cidade. Ex: Digite: 150, cadastro = 150.00 Bilhões.");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos2);

    // Exibe os dados cadastrados da primeira carta.
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", PopulacaoCarta1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos1);

    // Exibe os dados cadastrados da segunda carta
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", PopulacaoCarta2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos2);

    return 0; // Encerra o programa com sucesso
}
