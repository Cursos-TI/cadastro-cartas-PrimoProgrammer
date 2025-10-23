#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
char estado1[10], estado2[10];
    char códigodacarta1[3], códigodacarta2[3];
    char nomedacidade1[10], nomedacidade2[10];
    int populacao1, populacao2;
    float areaemkm21, areaemkm22;
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepoulacional1, densidadepoulacional2;
    int pibpercapita1, pibpercapita2;
  

    printf("### Carta 01 ###\n");
    printf("Estado: \n" );
    scanf("%s", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &códigodacarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm21);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n", numerodepontosturisticos1);
    scanf("%d", &numerodepontosturisticos1);

    // Inserir informações da segunda carta

    printf("### Carta 02 ###\n");
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Código da carta: \n");
    scanf("%s", &códigodacarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &areaemkm22);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    // Exibindo os dados das cartas
    printf("\n### Carta 01 ###\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", códigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", areaemkm21);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", numerodepontosturisticos1);

    printf("\n### Carta 02 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", códigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", areaemkm22);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", numerodepontosturisticos2);

return 0;
} 
