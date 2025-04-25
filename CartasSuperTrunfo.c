#include <stdio.h>

int main() {
    // Definindo variáveis para a Carta 1
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Definindo variáveis para a Carta 2
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a Populacao : ");
    scanf("%lu", &populacao1);
    printf("Digite a Area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando atributos derivados para a Carta 1
    // Proteção básica contra divisão por zero para Area
    if (area1 > 0) {
        densidade_populacional1 = (float)populacao1 / area1;
    } else {
        densidade_populacional1 = 0; // Ou algum valor indicativo de erro/indefinição
    }
    // Proteção básica contra divisão por zero para Populacao
    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / (float)populacao1;
    } else {
        pib_per_capita1 = 0; // Ou algum valor indicativo de erro/indefinição
    }

    // Calculando atributos derivados para a Carta 2
    // Proteção básica contra divisão por zero para Area
    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2 / area2;
    } else {
        densidade_populacional2 = 0; // Ou algum valor indicativo de erro/indefinição
    }
     // Proteção básica contra divisão por zero para Populacao
    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / (float)populacao2;
    } else {
        pib_per_capita2 = 0; // Ou algum valor indicativo de erro/indefinição
    }


    // Calculando Super Poder para a Carta 1
    // Proteção contra divisão por zero para 1/Densidade
    float inversa_densidade1 = 0;
    if (densidade_populacional1 > 0) {
        inversa_densidade1 = 1.0 / densidade_populacional1;
    }
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + inversa_densidade1 + pib_per_capita1;

    // Calculando Super Poder para a Carta 2
    // Proteção contra divisão por zero para 1/Densidade
    float inversa_densidade2 = 0;
    if (densidade_populacional2 > 0) {
        inversa_densidade2 = 1.0 / densidade_populacional2;
    }
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + inversa_densidade2 + pib_per_capita2;


    printf("\n--- Dados Cadastrados e Calculados ---\n");
    printf("--- Carta 1 ---\n");
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Carta 2 ---\n");
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n--- Resultado da Comparacao (1 = Carta 1 vence, 0 = Carta 2 vence) ---\n");

    // Comparacao da Populacao (maior vence)
    printf("Populacao: %d\n", (populacao1 > populacao2) ? 1 : 0);

    // Comparacao da Area (maior vence)
    printf("Area: %d\n", (area1 > area2) ? 1 : 0);

    // Comparacao do PIB (maior vence)
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);

    // Comparacao dos Pontos Turisticos (maior vence)
    printf("Pontos Turisticos: %d\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparacao da Densidade Populacional (menor vence)
    printf("Densidade Populacional: %d\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    // Comparacao do PIB per Capita (maior vence)
    printf("PIB per Capita: %d\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    // Comparacao do Super Poder (maior vence)
     printf("Super Poder: %d\n", (super_poder1 > super_poder2) ? 1 : 0);


    return 0;
}