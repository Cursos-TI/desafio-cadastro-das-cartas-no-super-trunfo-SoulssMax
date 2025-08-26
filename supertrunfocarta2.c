#include <stdio.h>

int main(void) {
    
    printf("Desafio Super Trunfo!\n");
    printf("Carta 2\n");

    char estado[50] = "Tocantins";
    char codigo[50] = "T02";
    char nome[50] = "Palmas";
    int populacao = 302.692;
    float PIB = 10.3;
    float area = 2.219;
    int pt = 17;
    
    printf("estado: %s\n" , estado);
    printf("código: %s\n" , codigo);
    printf("nome da cidade: %s\n" , nome);
    printf("população: %d\n" , populacao);
    printf("PIB: %.3f bilhões de reais\n" , PIB);
    printf("área: %.1f km²\n" , area);
    printf("pontos turísticos: %d\n" , pt);

    return 0;
}