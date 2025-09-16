#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20]; // Todas as variaveis do tipo char
    int pontosTuristicos1, pontosTuristicos2, habitantes1, habitantes2; // Todas as variaveis do tipo int
    float area1, area2, pib1, pib2, densidade1, densidade2, perCapta1, perCapta2; // Todas as variaveis do tipo float

    // Aqui começa a criação da primeira carta pelo usuário

    printf("-=-=-=-=- CARTA 1 -=-=-=-=-\n\n"); // Titulo

    printf("Digite a primeira letra do estado escolhido: "); // Primeira letra do estado
    scanf(" %c", &estado1);

    printf("Digite o código da carta: "); // Código da carta
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade escolhida: "); // Cidade escolhida
    scanf(" %s", cidade1);
    
    printf("Digite o número de habitantes da cidade: "); // Número de habitantes
    scanf(" %d", &habitantes1);

    printf("Digite a área da cidade em quilômetros quadrados: "); // Área
    scanf(" %f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (em bilhões): "); // PIB da cidade
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: "); // Pontos turísticos
    scanf("%d", &pontosTuristicos1);
    
    // Aqui começa a criação da segunda carta pelo usuário

    printf("\n-=-=-=-=- CARTA 2 -=-=-=-=-\n\n"); // Titulo

    printf("Digite a primeira letra do estado escolhido: "); // Primeira letra do estado
    scanf(" %c", &estado2);

    printf("Digite o código da carta: "); // Código da carta
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade escolhida: "); // Cidade escolhida
    scanf(" %s", cidade2);

    printf("Digite o número de habitantes da cidade: "); // Número de habitantes
    scanf(" %d", &habitantes2);

    printf("Digite a área da cidade em quilômetros quadrados: "); // Área
    scanf(" %f", &area2);

    printf("Digite o produto interno bruto da cidade: "); // PIB da cidade
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: "); // Pontos turísticos
    scanf("%d", &pontosTuristicos2);

    densidade1 = (float) habitantes1 / area1; // Calculando densidade populacional da cidade 1
    densidade2 = (float) habitantes2 / area2; // Calculando densidade populacional da cidade 2

    perCapta1 = pib1 * 1000000000 / (float) habitantes1; // Calculando o PIB per Capita da cidade 1 (o PIB foi multiplicado por 1 bilhão para conversão)
    perCapta2 = pib2 * 1000000000 / (float) habitantes2; // Calculando o PIB per Capita da cidade 2 (o PIB foi multiplicado por 1 bilhão para conversão)

    // Exibição da Carta 1 para o usuário

    printf("\n\nCarta 1:\n"); // Titulo
    printf("Estado: %c\n", estado1); // Estado 
    printf("Código: %s\n", codigo1); // Código 
    printf("Nome da Cidade: %s\n", cidade1); // Nome da cidade 
    printf("População: %d\n", habitantes1); // População 
    printf("Área: %.2f km²\n", area1); // Área
    printf("PIB: %.2f bilhões de reais\n", pib1); // PIB 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Pontos turísticos 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", perCapta1); // PIB per Capita

    // Exibição da Carta 2 para o usuário
    
    printf("\n\nCarta 2:\n"); // Titulo
    printf("Estado: %c\n", estado2); // Estado
    printf("Código: %s\n", codigo2); // Código
    printf("Nome da Cidade: %s\n", cidade2); // Nome da cidade
    printf("População: %d\n", habitantes2); // População
    printf("Área: %.2f km²\n", area2); // Área
    printf("PIB: %.2f bilhões de reais\n", pib2); // PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Densidade populacional
    printf("PIB per Capita: %.2f reais\n", perCapta2); // PIB per Capita

  return 0;
} 
