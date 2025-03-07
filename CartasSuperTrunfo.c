#include <stdio.h>

int  main() {
    // Declaraçao de variavéis para a Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "São Paulo";
    int população1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Declaração e inicialização das variavéis para a Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populaçao2 = 6748000;
    float area2 = 1200.25; 
    float pib2 = 300.50;
    int pontosTuristicos = 30;

    // Exibição dos dados das Cartas 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populaçao: %d\n", nomeCidade1);
    printf("Área: %2f km²\n", area1);
    printf("PIB: %2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados das Cartas 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", população2);
    printf("Área: %2f km²\n", area2)
    printf("PIB: %2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);

    return 0;
}

