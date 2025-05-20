#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializar todas as posições com 0 (água)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Vetores representando os navios (só usados conceitualmente)
    int navio1[TAMANHO_NAVIO] = {3, 3, 3}; // Horizontal
    int navio2[TAMANHO_NAVIO] = {3, 3, 3}; // Vertical

    // Coordenadas de início dos navios
    int linha_navio1 = 2; // linha fixa
    int coluna_navio1 = 4; // começa na coluna 4 → col 4, 5, 6

    int linha_navio2 = 5; // começa na linha 5 → lin 5, 6, 7
    int coluna_navio2 = 1; // coluna fixa

    // Posicionar navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio1][coluna_navio1 + i] = navio1[i];
    }

    // Posicionar navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio2 + i][coluna_navio2] = navio2[i];
    }

    // Exibir o tabuleiro
    printf("TABULEIRO BATALHA NAVAL:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}



