#include <stdio.h>

int main()
{
    printf("Desafio Super Trunfo!\n\n");

    // Carta 1
    unsigned long int populacao1; //  Alterado para unsigned long int
    int pontos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    // Carta 2
    unsigned long int populacao2; //  Alterado para unsigned long int
    int pontos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    //Super Poder 
    float super1,super2;


    // Entrada de Dados - Carta 1
    printf("Canoas\n");

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite Area: "); 
    scanf("%f", &area1); 

    printf("Digite o Pib: ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos - Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1); //  Cálculo SuperPoder

    printf("\n");

    // Entrada de Dados - Carta 2
    printf("Alvorada\n");

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite Area: ");
    scanf("%f", &area2);

    printf("Digite o Pib: ");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    printf("\n");

    // Cálculos - Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2); //  Cálculo SuperPoder

    // Exibição - Carta 1
    printf("=== Canoas ===\n");
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", super1);

    printf("\n");

    // Exibição - Carta 2
    printf("=== Alvorada ===\n");
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", super2);

    printf("\n");

    // Comparações (0 = Alvorada venceu | 1 = Canoas venceu)
    printf("=== Comparacoes ===\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor é melhor
    printf("Super Poder: %d\n", super1 > super2);
    printf("\n");

    return 0;
}
