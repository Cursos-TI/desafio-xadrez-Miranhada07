#include <stdio.h>

int main() {
 
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    
    printf("Movimentação do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

   
    printf("Movimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    printf("\n");



    printf("Movimentação do Cavalo:\n");

   
    for (int baixo = 1; baixo <= 2; baixo++) {
        printf("Baixo\n");
    }


    int esquerda = 1;
    while (esquerda <= 1) {
        printf("Esquerda\n");
        esquerda++;
    }

    return 0;
}



