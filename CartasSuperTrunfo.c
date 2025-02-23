#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     // Declaração das variáveis para a Carta A01
     char estado1[50], cidade1[50];  // Nome do estado e nome da cidade
     int populacao1, pontos_turisticos1;
     float area1, pib1;
 
     // Declaração das variáveis para a Carta B02
     char estado2[50], cidade2[50];  // Nome do estado e nome da cidade
     int populacao2, pontos_turisticos2;
     float area2, pib2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    // Cadastro da primeira carta (A01)
     printf("Cadastro da Carta A01\n");
     printf("Informe o nome do estado: ");
     scanf("%s", estado1);
     printf("Informe o nome da cidade: ");
     scanf("%s", cidade1);
     printf("Informe a populacao: ");
     scanf("%d", &populacao1);
     printf("Informe a area (em km^2): ");
     scanf("%f", &area1);
     printf("Informe o PIB (em bilhões): ");
     scanf("%f", &pib1);
     printf("Informe o numero de pontos turisticos: ");
     scanf("%d", &pontos_turisticos1);


      // Cadastro da segunda carta (B02)
    printf("\nCadastro da Carta B02\n");
    printf("Informe o nome do estado: ");
    scanf("%s", estado2);
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Informe a populacao: ");
    scanf("%d", &populacao2);
    printf("Informe a area (em km^2): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta A01 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da Carta B02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    
    return 0;
}
