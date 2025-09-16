#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20]; // Todas as variaveis do tipo char
    unsigned long int habitantes1, habitantes2; // Variaveis do tipo unsigned long int (habitantes)
    int pontosTuristicos1, pontosTuristicos2; // Todas as variaveis do tipo int
    float area1, area2, pib1, pib2, densidade1, densidade2, perCapta1, perCapta2, superPoder1, superPoder2; // Todas as variaveis do tipo float

    // Aqui começa a criação da primeira carta pelo usuário

    printf("-=-=-=-=- CARTA 1 -=-=-=-=-\n\n"); // Titulo

    printf("Digite a primeira letra do estado escolhido: "); // Primeira letra do estado
    scanf(" %c", &estado1);

    printf("Digite o código da carta: "); // Código da carta
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade escolhida: "); // Cidade escolhida
    scanf(" %s", cidade1);

    printf("Digite o número de habitantes da cidade: "); // Número de habitantes
    scanf(" %lu", &habitantes1);

    printf("Digite a área da cidade em quilômetros quadrados: "); // Área
    scanf(" %f", &area1);

    printf("Digite o produto interno bruto da cidade (em bilhões): "); // PIB da cidade
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
    scanf(" %lu", &habitantes2);

    printf("Digite a área da cidade em quilômetros quadrados: "); // Área
    scanf(" %f", &area2);

    printf("Digite o produto interno bruto da cidade (em bilhões): "); // PIB da cidade
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: "); // Pontos turísticos
    scanf("%d", &pontosTuristicos2);

    densidade1 = (float) habitantes1 / area1; // Calculando densidade populacional da cidade 1
    densidade2 = (float) habitantes2 / area2; // Calculando densidade populacional da cidade 2

    perCapta1 = pib1 * 1000000000.0 / (float) habitantes1; // Calculando o PIB per Capita da cidade 1 (o PIB foi multiplicado por 1 bilhão para conversão)
    perCapta2 = pib2 * 1000000000.0 / (float) habitantes2; // Calculando o PIB per Capita da cidade 2 (o PIB foi multiplicado por 1 bilhão para conversão)

    superPoder1 = (float) habitantes1 + (float) pontosTuristicos1 + area1 + (pib1 * 1000000000.0) + perCapta1 - densidade1; // Cálculo do Super-Poder 1, como a densidade deve ser invesa, subtraímos
    superPoder2 = (float) habitantes2 + (float) pontosTuristicos2 + area2 + (pib2 * 1000000000.0) + perCapta2 - densidade2; // Cálculo do Super-Poder 2, como a densidade deve ser invesa, subtraímos

    // Comparação das cartas (Super-Poder)

    printf("\n\n-=-=-=-= Comparação das cartas =-=-=-=-\n"); // Titulo
    printf("Regras:\nSe a Carta 1 for a vencedora, o resultado será 1, caso a Carta 2 seja a vencedora, o resultado será 0!\n\n");

    printf("População: %d\n", habitantes1 > habitantes2); // Comparação de população
    printf("Área: %d\n", area1 > area2); // Comparação de área
    printf("PIB: %d\n", (pib1 * 1000000000.0) > (pib2 * 1000000000.0)); // Comparação de PIB, multiplicado por 1 bilhão
    printf("Pontos turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2); // Comparação de pontos turísticos
    printf("Densidade populacional: %d\n", densidade1 < densidade2); // Comparação de densidade populacional, com o sinal invertido
    printf("PIB per Capita: %d\n", perCapta1 > perCapta2); // Comparação de PIB per Capita
    printf("Super Poder: %d\n", superPoder1 > superPoder2); // Comparação de Super Poder

  return 0;
} 
