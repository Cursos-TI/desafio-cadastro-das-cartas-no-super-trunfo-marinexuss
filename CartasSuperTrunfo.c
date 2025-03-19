#include <stdio.h>

// Função para calcular o Super Poder
float calcularSuperPoder(int populacao, float area, float pib, int pontosTuristicos, float densidadePopulacional, float pibPerCapita) {
    float inversoDensidade = 1.0 / densidadePopulacional;
    return populacao + area + pib + pontosTuristicos + pibPerCapita + inversoDensidade;  // Somando todos os atributos
}

// Função para comparar duas cartas e imprimir o resultado
void compararCartas(int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, 
                    int pontosTuristicos1, int pontosTuristicos2, float densidade1, float densidade2, 
                    float pibPerCapita1, float pibPerCapita2, float superPoder1, float superPoder2) {

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2) ? 1 : 0);

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2) ? 1 : 0);

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2) ? 1 : 0);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Comparando Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade1 < densidade2) ? 1 : 0);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 0);
}

int main() {
    // Declaração de variáveis para Carta 1
    char estado1[] = "A", codigo1[] = "A01", nome1[] = "São Paulo";
    int populacao1 = 12325000, pontosTuristicos1 = 50;
    float area1 = 1521.11, pib1 = 699.28;
    float densidade1, pibPerCapita1, superPoder1;
    
    // Declaração de variáveis para Carta 2
    char estado2[] = "B", codigo2[] = "B02", nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000, pontosTuristicos2 = 30;
    float area2 = 1200.25, pib2 = 300.50;
    float densidade2, pibPerCapita2, superPoder2;
    
    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;  // PIB em reais
    superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;  // PIB em reais
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);
    
    // Exibição dos resultados para Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos resultados para Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    // Comparar as duas cartas
    compararCartas(populacao1, populacao2, area1, area2, pib1, pib2, 
                   pontosTuristicos1, pontosTuristicos2, densidade1, densidade2, 
                   pibPerCapita1, pibPerCapita2, superPoder1, superPoder2);

    return 0;
}
