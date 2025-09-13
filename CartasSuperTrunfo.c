#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20]; // char's
  int habitantes1, habitantes2, pontosTuristicos1, pontosTuristicos2; // int's
  float area1, area2, pib1, pib2; // float's

  // carta 1 input

  printf("-=-=-=-=- CARTA 1 -=-=-=-=-\n\n"); // titulo

  printf("Digite a primeira letra do estado escolhido: "); // primeira letra
  scanf(" %c", &estado1);

  printf("Digite o código da carta: "); // codigo
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade escolhida: "); // cidade
  scanf(" %s", cidade1);

  printf("Digite o número de habitantes da cidade: "); // numero de habitantes
  scanf(" %d", &habitantes1);

  printf("Digite a área da cidade em quilômetros quadrados: "); // area
  scanf(" %f", &area1);

  printf("Digite o produto interno bruto da cidade: "); // pib
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade: "); // pontos turisticos
  scanf("%d", &pontosTuristicos1);
    
  // carta 2 input

  printf("\n-=-=-=-=- CARTA 2 -=-=-=-=-\n\n"); // titulo

  printf("Digite a primeira letra do estado escolhido: "); // primeira letra
  scanf(" %c", &estado2);

  printf("Digite o código da carta: "); // codigo
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade escolhida: "); // cidade
  scanf(" %s", cidade2);

  printf("Digite o número de habitantes da cidade: "); // numero de habitantes
  scanf(" %d", &habitantes2);

  printf("Digite a área da cidade em quilômetros quadrados: "); // area
  scanf(" %f", &area2);

  printf("Digite o produto interno bruto da cidade: "); // pib
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade: "); // pontos turisticos
  scanf("%d", &pontosTuristicos2);

  // carta 1 completa

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", habitantes1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
  // carta 2 completa
    
  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", habitantes2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
} 
