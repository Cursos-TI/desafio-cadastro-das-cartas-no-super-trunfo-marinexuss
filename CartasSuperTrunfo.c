#include <stdio.h>

int main() {
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12345678;
    float area1 = 1521.11;
    float pib1 = 687.5;
    int pontosTuristicos1 = 50;

    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.30;
    float pib2 = 500.2;
    int pontosTuristicos2 = 40;

    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

