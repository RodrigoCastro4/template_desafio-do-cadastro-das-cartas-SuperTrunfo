#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

  // -------- CARTA 1 --------
  int populacao, pontos_turisticos;
  char cidade[20];
  float pib, area_cidade;

  // -------- CARTA 2 --------
  int populacao2, pontos_turisticos2;
  char cidade2[20];
  float pib2, area_cidade2;

  // Apresentação
  printf("Olá, seja bem vindo ao jogo de Super Trunfo!\n");
  printf("Voce ira armazenar as informacoes de suas duas cartas.\n\n");

  // -------- Entrada Carta 1 --------
  printf("=== Carta 1 ===\n\n");

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite o numero de pessoas da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite a area da cidade: \n");
  scanf("%f", &area_cidade);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos);

  // -------- Entrada Carta 2 --------
  printf("\n=== Carta 2 ===\n\n");

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);

  printf("Digite o numero de pessoas da cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite a area da cidade: \n");
  scanf("%f", &area_cidade2);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos2);

  // -------- Exibição --------
  printf("\n\n--- Informacao das cartas ---\n");

  printf("\n--- Dados da Carta 1 ---\n");
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("PIB: %.2f\n", pib);
  printf("Area da cidade: %.2f km²\n", area_cidade);
  printf("Pontos turisticos: %d\n", pontos_turisticos);

  printf("\n--- Dados da Carta 2 ---\n");
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("PIB: %.2f\n", pib2);
  printf("Area da cidade: %.2f km²\n", area_cidade2);
  printf("Pontos turisticos: %d\n", pontos_turisticos2);

  return 0;
}
