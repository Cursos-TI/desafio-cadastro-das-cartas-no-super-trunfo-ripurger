#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta A01
    char estado1[50], cidade1[50];  // Nome do estado e nome da cidade
    unsigned long int populacao1;  // População (agora unsigned long int)
    int pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;  // Densidade e PIB per capita

    // Declaração das variáveis para a Carta B02
    char estado2[50], cidade2[50];  // Nome do estado e nome da cidade
    unsigned long int populacao2;  // População (agora unsigned long int)
    int pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;  // Densidade e PIB per capita

    // Cadastro da primeira carta (A01)
    printf("Cadastro da Carta A01\n");
    printf("Informe o nome do estado: ");
    scanf("%s", estado1);
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);  // scanf para unsigned long int
    printf("Informe a area (em km^2): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira carta
    densidade1 = populacao1 / area1;  // Densidade Populacional
    pib_per_capita1 = pib1 * 1e9 / populacao1;  // PIB per Capita (convertendo PIB para reais)

    // Cadastro da segunda carta (B02)
    printf("\nCadastro da Carta B02\n");
    printf("Informe o nome do estado: ");
    scanf("%s", estado2);
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);  // scanf para unsigned long int
    printf("Informe a area (em km^2): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda carta
    densidade2 = populacao2 / area2;  // Densidade Populacional
    pib_per_capita2 = pib2 * 1e9 / populacao2;  // PIB per Capita (convertendo PIB para reais)

    // Variável para selecionar o atributo a ser comparado
    int atributo;

    // Menu de seleção de atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Poder\n");
    printf("Digite o número do atributo que deseja comparar: ");
    scanf("%d", &atributo);

    // Comparação usando switch case para selecionar o atributo
    switch (atributo) {
        case 1: // Comparação de População
            if (populacao1 > populacao2) {
                printf("Comparacao de Populacao: Carta 1 vence\n");
            } else if (populacao1 < populacao2) {
                printf("Comparacao de Populacao: Carta 2 vence\n");
            } else {
                printf("Comparacao de Populacao: Empate\n");
            }
            break;
        
        case 2: // Comparação de Área
            if (area1 > area2) {
                printf("Comparacao de Area: Carta 1 vence\n");
            } else if (area1 < area2) {
                printf("Comparacao de Area: Carta 2 vence\n");
            } else {
                printf("Comparacao de Area: Empate\n");
            }
            break;
        
        case 3: // Comparação de PIB
            if (pib1 > pib2) {
                printf("Comparacao de PIB: Carta 1 vence\n");
            } else if (pib1 < pib2) {
                printf("Comparacao de PIB: Carta 2 vence\n");
            } else {
                printf("Comparacao de PIB: Empate\n");
            }
            break;
        
        case 4: // Comparação de Pontos Turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Comparacao de Pontos Turisticos: Carta 1 vence\n");
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("Comparacao de Pontos Turisticos: Carta 2 vence\n");
            } else {
                printf("Comparacao de Pontos Turisticos: Empate\n");
            }
            break;
        
        case 5: // Comparação de Densidade Populacional (menor valor vence)
            if (densidade1 < densidade2) {
                printf("Comparacao de Densidade Populacional: Carta 1 vence\n");
            } else if (densidade1 > densidade2) {
                printf("Comparacao de Densidade Populacional: Carta 2 vence\n");
            } else {
                printf("Comparacao de Densidade Populacional: Empate\n");
            }
            break;
        
        case 6: // Comparação do Super Poder
            float super_poder1 = pib1 + populacao1 + pontos_turisticos1;
            float super_poder2 = pib2 + populacao2 + pontos_turisticos2;
            if (super_poder1 > super_poder2) {
                printf("Super Poder: Carta 1 vence\n");
            } else if (super_poder1 < super_poder2) {
                printf("Super Poder: Carta 2 vence\n");
            } else {
                printf("Super Poder: Empate\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
