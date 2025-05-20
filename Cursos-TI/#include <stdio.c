#include <stdio.h>
#include <string.h>

// Estrutura da carta de um país
struct CartaPais {
    char nome[50];
    int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
    float densidadeDemografica;
};

// Função para exibir o menu
void exibirMenu() {
    printf("=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparação: ");
}

int main() {
    // Criando as duas cartas
    struct CartaPais pais1 = {"Brasil", 211000000, 8515767.0, 2200.0, 50, 0.0};
    struct CartaPais pais2 = {"Uruguai", 45000000, 2780400.0, 500.0, 30, 0.0};

    // Calculando densidade demográfica
    pais1.densidadeDemografica = pais1.populacao / pais1.area;
    pais2.densidadeDemografica = pais2.populacao / pais2.area;

    int opcao;
    exibirMenu();
    scanf("%d", &opcao);

    printf("\n=== COMPARAÇÃO ENTRE %s E %s ===\n", pais1.nome, pais2.nome);

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1.nome, pais1.populacao);
            printf("%s: %d habitantes\n", pais2.nome, pais2.populacao);
            if (pais1.populacao > pais2.populacao) {
                printf("Vencedor: %s\n", pais1.nome);
            } else if (pais2.populacao > pais1.populacao) {
                printf("Vencedor: %s\n", pais2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1.nome, pais1.area);
            printf("%s: %.2f km²\n", pais2.nome, pais2.area);
            if (pais1.area > pais2.area) {
                printf("Vencedor: %s\n", pais1.nome);
            } else if (pais2.area > pais1.area) {
                printf("Vencedor: %s\n", pais2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", pais1.nome, pais1.pib);
            printf("%s: %.2f bilhões de reais\n", pais2.nome, pais2.pib);
            if (pais1.pib > pais2.pib) {
                printf("Vencedor: %s\n", pais1.nome);
            } else if (pais2.pib > pais1.pib) {
                printf("Vencedor: %s\n", pais2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1.nome, pais1.pontosTuristicos);
            printf("%s: %d pontos turísticos\n", pais2.nome, pais2.pontosTuristicos);
            if (pais1.pontosTuristicos > pais2.pontosTuristicos) {
                printf("Vencedor: %s\n", pais1.nome);
            } else if (pais2.pontosTuristicos > pais1.pontosTuristicos) {
                printf("Vencedor: %s\n", pais2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1.nome, pais1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", pais2.nome, pais2.densidadeDemografica);
            if (pais1.densidadeDemografica < pais2.densidadeDemografica) {
                printf("Vencedor: %s (menor densidade)\n", pais1.nome);
            } else if (pais2.densidadeDemografica < pais1.densidadeDemografica) {
                printf("Vencedor: %s (menor densidade)\n", pais2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
