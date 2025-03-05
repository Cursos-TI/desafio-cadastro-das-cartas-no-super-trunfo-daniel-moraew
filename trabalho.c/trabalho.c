#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    int cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta (carta: A01): ");
    scanf(" %c%d", &estado1, &cidade1);
    printf("Informe os dados da cidade %c%02d:\n", estado1, cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("Digite o código da segunda carta (carta :B02): ");
    scanf(" %c%d", &estado2, &cidade2);
    printf("Informe os dados da cidade %c%02d:\n", estado2, cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados cadastrados
    printf("\nDados da primeira cartaA01:\n");
    printf("Código: %c%02d\n", estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nDados da segunda cartaB02:\n");
    printf("Código: %c%02d\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}





