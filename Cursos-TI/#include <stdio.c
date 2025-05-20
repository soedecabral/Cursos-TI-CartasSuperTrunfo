#include <stdio.h>

// Estrutura para armazenar dados da carta da cidade
struct CartaCidade {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib; // em bilhões de reais
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Dados da carta 1: Amazonas
    struct CartaCidade carta1 = {
        'A', "A01", "Amazonas", 428038, 1571.00, 145.140, 30, 0.0, 0.0
    };

    // Dados da carta 2: Acre
    struct CartaCidade carta2 = {
        'B', "B02", "Acre", 3748000, 200.25, 150.500, 10, 0.0, 0.0
    };

    // Calculando densidade populacional = população / área
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // Calculando PIB per capita = (PIB * 1 bilhão) / população
    carta1.pibPerCapita = (carta1.pib * 1e9) / carta1.populacao;
    carta2.pibPerCapita = (carta2.pib * 1e9) / carta2.populacao;

    // Exibindo os dados calculados
    printf("=== DADOS DAS CIDADES ===\n");
    printf("%s:\n  Densidade Populacional: %.2f hab/km²\n  PIB per Capita: %.2f reais\n\n",
           carta1.nome, carta1.densidadePopulacional, carta1.pibPerCapita);
    printf("%s:\n  Densidade Populacional: %.2f hab/km²\n  PIB per Capita: %.2f reais\n\n",
           carta2.nome, carta2.densidadePopulacional, carta2.pibPerCapita);

    // Comparação por atributo: Densidade Populacional (MENOR vence)
    printf("=== COMPARAÇÃO POR DENSIDADE POPULACIONAL ===\n");
    printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidadePopulacional);
    printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidadePopulacional);

    if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("\nVencedora: %s (menor densidade populacional)\n", carta1.nome);
    } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
        printf("\nVencedora: %s (menor densidade populacional)\n", carta2.nome);
    } else {
        printf("\nEmpate! maior densidade populacional.\n");
    }

    return 0;
}

