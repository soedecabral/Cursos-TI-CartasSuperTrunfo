#include <stdio.h>

int main() {
    int i;

    // TORRE - Movimento para a direita (5 casas) usando for
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // BISPO - Movimento na diagonal para cima e direita (5 casas) usando while
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    printf("\n");

    // RAINHA - Movimento para a esquerda (8 casas) usando do-while
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}


