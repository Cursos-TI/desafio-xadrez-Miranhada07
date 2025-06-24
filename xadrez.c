#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita) - usando FOR
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita) - usando WHILE
    printf("Movimentação do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda) - usando DO-WHILE
    printf("Movimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}


