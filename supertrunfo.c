#include <stdio.h>

int main(void) {
    printf("Desafio Super Trunfo!\n");

    printf("Carta 1\n");

    char estado[50] = "Bahia";
    char codigo[50] = "B01";
    char nome[50] = "Salvador";
    int populacao = 2417678;
    float PIB = 62.954;
    float area = 693.8;
    int pt = 200;

    printf("estado: %s\n" , estado);
    printf("código: %s\n" , codigo);
    printf("nome da cidade: %s\n" , nome);
    printf("população: %d\n" , populacao);
    printf("PIB: %.3f bilhões de reais\n" , PIB);
    printf("área: %.1f km²\n" , area);
    printf("pontos turísticos: %d\n" , pt);

    return 0;
}
