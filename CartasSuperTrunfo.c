#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, pontos;
  char estado[3], codigo[10], cidade[20];
  float area, pib;
  float densidade, percapita;

  // Área para entrada de dados da carta 1:
  printf("Digite o Estado da Carta 1: ");
  scanf("%s", estado);

  printf("Digite o Código da Carta 1: ");
  scanf("%s", codigo);

  printf("Digite a Cidade da Carta 1: ");
  scanf("%s", cidade);

  printf("Digite a População da Carta 1: ");
  scanf("%d", &populacao);

  printf("Digite a área em KM² da Carta 1: ");
  scanf("%f", &area);

  printf("Digite o PIB da Carta 1: ");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos da Carta 1: ");
  scanf("%d", &pontos);


      // Área para exibição dos dados da cidade:
  printf("***Carta 1:***\n" );
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turisticos: %d\n", pontos);

   // Adição de novas funções - Nível Aventureiro
  densidade = (float) populacao / area;
  percapita = (pib * 1000000000) / populacao;

  printf("Densidade populacional: %.2f hab/km²\n", densidade);
  printf("PIB per capita: %.2f reais\n", percapita);
  
  // Área para adicionar os dados da carta 2:
  printf("Digite o Estado da Carta 2: ");
  scanf("%s", estado);

  printf("Digite o Código da Carta 2: ");
  scanf("%s", codigo);

  printf("Digite a Cidade da Carta 2: ");
  scanf("%s", cidade);

  printf("Digite a População da Carta 2: ");
  scanf("%d", &populacao);

  printf("Digite a área em KM² da Carta 2: ");
  scanf("%f", &area);

  printf("Digite o PIB da Carta 2: ");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos da Carta 2: ");
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade

  printf("***Carta 2:***\n" );
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turisticos: %d\n", pontos);

  // Adição de novas funções - Nível Aventureiro
  densidade = (float) populacao / area;
  percapita = (pib * 1000000000) / populacao;

  printf("Densidade populacional: %.2f hab/km²\n", densidade);
  printf("PIB per capita: %.2f reais\n", percapita);

return 0;
} 
