#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20]; // Todas as variaveis do tipo char
  int habitantes1, habitantes2, pontosTuristicos1, pontosTuristicos2; // Todas as variaveis do tipo int
  float area1, area2, pib1, pib2; // Todas as variaveis do tipo float

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

  printf("Digite o produto interno bruto da cidade: "); // PIB da cidade
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade: "); // Pontos turísticos
  scanf("%d", &pontosTuristicos1);
    
  // Aqui começa a criação da segunda carta pelo usuário

  printf("\n-=-=-=-=- CARTA 2 -=-=-=-=-\n\n"); // titulo

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

  // Exibição da Carta 1 para o usuário

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", habitantes1);
  printf("Área: %.2f km²\n", area1); // Formatação para apenas duas casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib1); // Formatação para apenas duas casas decimais
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
  // Exibição da Carta 2 para o usuário
    
  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", habitantes2);
  printf("Área: %.2f km²\n", area2); // Formatação para apenas duas casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib2); // Formatação para apenas duas casas decimais
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
} 
