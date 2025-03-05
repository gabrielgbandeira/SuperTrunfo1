#include <stdio.h>
#include <string.h>

int main() {
    int PopulacaoCarta1, PopulacaoCarta2, NumerosTuristicos1, NumerosTuristicos2;
    char Estado1[2], Estado2[2], CodigoDaCarta1[10], CodigoDaCarta2[10], NomeDaCidade1[50], NomeDaCidade2[50];
    float Area1, Area2, PIB1, PIB2;

    printf("*** Super Trunfo em C: Fundamentos e Técnicas Avançadas ***\n\n");

    // Cadastro da Carta 1
    printf("Vamos Começar a Cadastrar as Informações da Carta 1\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", Estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%9s", CodigoDaCarta1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa buffer antes de fgets()
    fgets(NomeDaCidade1, sizeof(NomeDaCidade1), stdin);
    NomeDaCidade1[strcspn(NomeDaCidade1, "\n")] = 0; // Remove o '\n'

    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Vamos Começar a Cadastrar as Informações da Carta 2\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%1s", Estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf("%9s", CodigoDaCarta2);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa buffer antes de fgets()
    fgets(NomeDaCidade2, sizeof(NomeDaCidade2), stdin);
    NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = 0; // Remove o '\n'

    printf("Digite a População da Cidade: ");
    scanf("%d", &PopulacaoCarta2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &NumerosTuristicos2);

    printf("\n");

    // Exibição dos Dados
    printf("====================================\n");
    printf("            CARTA 1\n");
    printf("====================================\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", PopulacaoCarta1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos1);
    
    printf("\n");

    printf("====================================\n");
    printf("            CARTA 2\n");
    printf("====================================\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", PopulacaoCarta2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerosTuristicos2);

    return 0;
}
