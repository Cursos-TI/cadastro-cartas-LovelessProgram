#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, pontos1, populacao2, pontos2;
  char estado1[3], codigo1[10], cidade1[20], estado2[3], codigo2[10], cidade2[20];
  float area1, pib1, area2, pib2;
  float densidade1, percapita1, densidade2, percapita2;

  // Área para entrada de dados da carta 1:
  printf("Digite o Estado da Carta 1: ");
  scanf("%s", estado1);

  printf("Digite o Código da Carta 1: ");
  scanf("%s", codigo1);

  printf("Digite a Cidade da Carta 1: ");
  scanf("%s", cidade1);

  printf("Digite a População da Carta 1: ");
  scanf("%d", &populacao1);

  printf("Digite a área em KM² da Carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da Carta 1: ");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos da Carta 1: ");
  scanf("%d", &pontos1);


      // Área para exibição dos dados da cidade:
  printf("***Carta 1:***\n" );
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turisticos: %d\n", pontos1);

   // Adição de novas funções - Nível Aventureiro
  densidade1 = (float) populacao1 / area1;
  percapita1 = (pib1 * 1000000000) / populacao1;

  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", percapita1);
  
  // Área para adicionar os dados da carta 2:
  printf("Digite o Estado da Carta 2: ");
  scanf("%s", estado2);

  printf("Digite o Código da Carta 2: ");
  scanf("%s", codigo2);

  printf("Digite a Cidade da Carta 2: ");
  scanf("%s", cidade2);

  printf("Digite a População da Carta 2: ");
  scanf("%d", &populacao2);

  printf("Digite a área em KM² da Carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da Carta 2: ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos da Carta 2: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade

  printf("***Carta 2:***\n" );
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turisticos: %d\n", pontos2);

  // Adição de novas funções - Nível Aventureiro
  densidade2 = (float) populacao2 / area2;
  percapita2 = (pib2 * 1000000000) / populacao2;

  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", percapita2);

  //Juntando todos os atributos das cartas
  float superPoder1; 
  superPoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + densidade1;
  printf("*** Super Poder - Carta 1 ***: %.2f\n", superPoder1);

  float superPoder2; 
  superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + densidade2;
  printf("*** Super Poder - Carta 2 ***: %.2f\n", superPoder2);

  //Comparação das Cartas
  printf("População: Carta 1 Venceu %d\n", populacao1 > populacao2);
  printf("Área: Carta 1 Venceu %d\n", (int) area1 > area2);
  printf("PIB: Carta 1 Venceu %d\n", (int) pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 Venceu %d\n", (int) pontos1 > pontos2);
  printf("Densidade Populacional: Carta 2 Venceu %d\n", (int) densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 Venceu %d\n", (int) percapita1 > percapita2);
  printf("Super Poder: Carta 1 Venceu %d\n", (int) superPoder1 > superPoder2);
  
return 0;
} 
