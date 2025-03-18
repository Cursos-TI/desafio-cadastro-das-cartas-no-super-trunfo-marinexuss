#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[] = "A", estado2[] = "B", codigo1[] = "A01", codigo2[] = "B02", nome1[] = "São Paulo", nome2[] = "Rio de Janeiro";
    float populacao1 = 12325000, populacao2 = 6748000, area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
    int pontos1 = 50, pontos2 = 30;
    
    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, nome1);
    printf("População: %.0f\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n", populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, nome2);
    printf("População: %.0f\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}

