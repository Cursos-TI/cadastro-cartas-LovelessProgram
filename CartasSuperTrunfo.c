#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, pontos1, populacao2, pontos2;
  char estado1[3], codigo1[10], cidade1[20], estado2[3], codigo2[10], cidade2[20], pais[10];
  float area1, pib1, area2, pib2;
  float densidade1, percapita1, densidade2, percapita2;
  int opcao1, opcao2;

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
  // Super Poder da Carta 1
  float superPoder1; 
  superPoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + densidade1;
  printf("*** Super Poder - Carta 1 ***: %.2f\n", superPoder1);
  
  //Super Poder da Carta 2
  float superPoder2; 
  superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + densidade2;
  printf("*** Super Poder - Carta 2 ***: %.2f\n", superPoder2);

  //Comparação das Cartas
  printf("População: Carta 1 Venceu %d\n", populacao1 > populacao2);
  printf("Área: Carta 1 Venceu %d\n", area1 > area2);
  printf("PIB: Carta 1 Venceu %d\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 Venceu %d\n", pontos1 > pontos2);
  printf("Densidade Populacional: Carta 2 Venceu %d\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 Venceu %d\n", percapita1 > percapita2);
  printf("Super Poder: Carta 1 Venceu %d\n", superPoder1 > superPoder2);

  //Comparação das Cartas - Usando estrutuas de decisão
  printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
  printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
      printf("Resultado: A carta 1 (%s) Venceu!\n", cidade1);
    } else {
    printf("Resultado: A carta 2 (%s) Venceu!\n", cidade2);
    }

    // Comparação das cartas usando menu interativo
    printf("*** Comparação com opção pelo jogador ***\n ");

    printf("Digite o nome do País:\n ");
    scanf("%s", pais);
    printf("Escolha duas opções para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha sua primeira opção:\n");
    scanf("%d", &opcao1);
    printf("Escolha sua segunda opção:\n");
    scanf("%d", &opcao2);
    
    switch(opcao1) {

        case 1:
            printf("População: %s (%d) x %s (%d)\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %s (%.2f) x %s (%.2f)\n", cidade1, area1, cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %s (%.2f) x %s (%.2f)\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %s (%d) x %s (%d)\n", cidade1, pontos1, cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade: %s (%.2f) x %s (%.2f)\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) // menor vence
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per capita: %s (%.2f) x %s (%.2f)\n", cidade1, percapita1, cidade2, percapita2);
            if (percapita1 > percapita2)
                printf("Vencedor: %s\n", cidade1);
            else if (percapita2 > percapita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder: %s (%.2f) x %s (%.2f)\n", cidade1, superPoder1, cidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", cidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
    switch(opcao2) 
    {
        case 1:
            printf("População: %s (%d) x %s (%d)\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %s (%.2f) x %s (%.2f)\n", cidade1, area1, cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %s (%.2f) x %s (%.2f)\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %s (%d) x %s (%d)\n", cidade1, pontos1, cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade: %s (%.2f) x %s (%.2f)\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) // menor vence
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per capita: %s (%.2f) x %s (%.2f)\n", cidade1, percapita1, cidade2, percapita2);
            if (percapita1 > percapita2)
                printf("Vencedor: %s\n", cidade1);
            else if (percapita2 > percapita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder: %s (%.2f) x %s (%.2f)\n", cidade1, superPoder1, cidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", cidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
        
    }

        printf("**** Resultado final ****\n");
        printf("%s: %f pontos\n", cidade1, superPoder1);
        printf("%s: %f pontos\n", cidade2, superPoder2);

        if (superPoder1 > superPoder2) {
            printf("Vencedor: %s - %s\n", pais, cidade1);
        } else { 
            printf ("Vencedor: %s - %s\n", pais, cidade2);
        }
        
        if (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    }
  
return 0;
} 
